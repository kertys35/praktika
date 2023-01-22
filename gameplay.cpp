#include "pch.h"
#include "gameplay.h"

class vector {
public:
	int x, y;
};
vector PositionFruit;
vector direction;
vector GameArea;
kutsovaya_Trishin::gameplay::gameplay(void)
{
	InitializeComponent();
	//Создание области игры
	GameArea.x = 500;
	GameArea.y = 310;
	firstlaunch = true;
	NewGame();
}

void kutsovaya_Trishin::gameplay::GenerateFruitPosition()
{
	//Генерация позиции фрукта
	Random^ rand = gcnew Random();
	PositionFruit.x = rand->Next(60, GameArea.x);
	PositionFruit.y = rand->Next(70, GameArea.y);
	//Проверка, что фрукт не создался на змее
	for (int i = 0; i < score; i++)
	{
		if (PositionFruit.x == snake[i]->Location.X && PositionFruit.y == snake[i]->Location.Y)
		{
			GenerateFruitPosition();
		}
	}
	///Преобразуем значение, чтобы оно было кратно шагу
	int TempX = PositionFruit.x % step;
	PositionFruit.x -= TempX;
	int TempY = PositionFruit.y % step;
	PositionFruit.y -= TempY;
	///Присваиваем позицию фрукту
	fruit->Location = Point(PositionFruit.x, PositionFruit.y);
	///Добавляем объект в форму
	this->Controls->Add(fruit);
}

void kutsovaya_Trishin::gameplay::Eat()
{
	if (snake[0]->Location.X == PositionFruit.x && snake[0]->Location.Y == PositionFruit.y)
	{
		score += 1;
		label_score_num->Text = Convert::ToString(score);///увеличение счёта
		snake[score] = gcnew PictureBox();
		snake[score]->Location = Point(snake[score - 1]->Location.X + step * direction.x, snake[score - 1]->Location.Y + step * direction.y);
		switch (snake_colour)
		{
		case 1:
			snake[score]->BackColor = Color::Red;
			break;
		case 2:
			snake[score]->BackColor = Color::Green;
			break;
		case 3:
			snake[score]->BackColor = Color::Blue;
			break;
		default:
			break;
		}
		snake[score]->Width = step;
		snake[score]->Height = step;
		this->Controls->Add(snake[score]);
		GenerateFruitPosition();
	}
}

void kutsovaya_Trishin::gameplay::Move()
{
	for (int i = score; i >= 1; i--)
	{
		snake[i]->Location = snake[i - 1]->Location;
	}
	snake[0]->Location = Point(snake[0]->Location.X + direction.x * step, snake[0]->Location.Y + direction.y * step);
}

void kutsovaya_Trishin::gameplay::EatYourself()
{
	for (int i = 1; i < score; i++)
	{
		if (snake[0]->Location == snake[i]->Location)
		{
			GameOver();
		}
	}
}

void kutsovaya_Trishin::gameplay::GameOver()
{
	play = true;
	die = true;
	if(score<=68)
		MessageBox::Show("Игра окончена.\nВаш счёт:" + score + ".", "Игра", MessageBoxButtons::OK, MessageBoxIcon::Information);
	else
		MessageBox::Show("Вы выиграли.\nВаш счёт:" + score + ".", "Игра", MessageBoxButtons::OK, MessageBoxIcon::Information);
	this->Hide();
	Owner->Show();
}

void kutsovaya_Trishin::gameplay::NewGame()
{
	if (!firstlaunch)
	{
		this->Controls->Remove(fruit);
		for (int i = 0; i <= score; i++)
		{
			this->Controls->Remove(snake[i]);
		}
	}
	else
		firstlaunch = false;
	//Змея
	snake = gcnew array <PictureBox^, 1> (401);
	snake[0] = gcnew PictureBox();
	snake[0]->Location = Point(200, 200);
	switch (snake_colour)//Цвет змеи
	{
	case 1:
		snake[0]->BackColor = Color::Red;
		break;
	case 2:
		snake[0]->BackColor = Color::Green;
		break;
	case 3:
		snake[0]->BackColor = Color::Blue;
		break;
	default:
		break;
	}
	snake[0]->Width=step;
	snake[0]->Height = step;
	score = 0;
	this->Controls->Add(snake[0]);
	//Фрукт
	fruit = gcnew PictureBox();
	switch (fruit_colour)//цвет фрукта
	{
	case 1:
		fruit->BackColor = Color::Red;
		break;
	case 2:
		fruit->BackColor = Color::Green;
		break;
	case 3:
		fruit->BackColor = Color::Blue;
		break;
	default:
		break;
	}
	fruit->Width = step;
	fruit->Height = step;
	GenerateFruitPosition();
	timer1->Interval = updateinterval;
	timer1->Start();
	direction.x = 1;
	direction.y = 0;
	play = true;
	die = false;
	switch (field_colour)
	{
	case 1:
		this->BackColor = Color::MistyRose;
		break;
	case 2:
		this->BackColor = Color::LightGreen;
		break;
	case 3:
		this->BackColor = Color::Azure;
		break;
	default:
		break;
	}
	score = 0;
	label_score_num->Text = Convert::ToString(score);

}

void kutsovaya_Trishin::gameplay::CheckBorders()
{
	if (snake[0]->Location.X >= rightborder->Location.X || snake[0]->Location.X <= leftborder->Location.X)
	{
		GameOver();
	}
	if (snake[0]->Location.Y <= upperborder->Location.Y || snake[0]->Location.Y >= lowerborder->Location.Y)
	{
		GameOver();
	}
}

System::Void kutsovaya_Trishin::gameplay::gameplay_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode.ToString() == "Right")
	{
		direction.x = 1;
		direction.y = 0;
	}
	if (e->KeyCode.ToString() == "Left")
	{
		direction.x = -1;
		direction.y = 0;
	}
	if (e->KeyCode.ToString() == "Up")
	{
		direction.x = 0;
		direction.y = -1;
	}
	if (e->KeyCode.ToString() == "Down")
	{
		direction.x = 0;
		direction.y = 1;
	}
}

System::Void kutsovaya_Trishin::gameplay::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	if (!die && play) {
		Move();
		Eat();
		EatYourself();
		CheckBorders();
	}
	else if (die && play)
	{
		timer1->Stop();
	}
	else if (!play && !die)
	{
		timer1->Stop();
	}
}
