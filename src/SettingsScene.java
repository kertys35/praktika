import javax.imageio.ImageIO;
import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.File;

public class SettingsScene extends Scene{
    public BufferedImage back,green_field,red_field,blue_field,red_snake,blue_snake,green_snake,red_fruit,green_fruit,blue_fruit;
    public  ML mouseListener=new ML();
    public SettingsScene(ML mouseListener)
    {
        this.mouseListener=mouseListener;
        try{
            BufferedImage backToMenu= ImageIO.read(new File("assets/BackToMenu.png"));
            back=backToMenu;
        }catch(Exception e){
            e.printStackTrace();
        }
        try{
            BufferedImage FieldR= ImageIO.read(new File("assets/Red.png"));
            red_field=FieldR;
        }catch(Exception e){
            e.printStackTrace();
        }
        try{
            BufferedImage FieldG= ImageIO.read(new File("assets/Green.png"));
            green_field=FieldG;
        }catch(Exception e){
            e.printStackTrace();
        }
        try{
            BufferedImage FieldB= ImageIO.read(new File("assets/Blue.png"));
            blue_field=FieldB;
        }catch(Exception e){
            e.printStackTrace();
        }
        try{
            BufferedImage SnakeR= ImageIO.read(new File("assets/Red.png"));
            red_snake=SnakeR;
        }catch(Exception e){
            e.printStackTrace();
        }
        try{
            BufferedImage SnakeB= ImageIO.read(new File("assets/Blue.png"));
            blue_snake=SnakeB;
        }catch(Exception e){
            e.printStackTrace();
        }
        try{
            BufferedImage SnakeG= ImageIO.read(new File("assets/Green.png"));
            green_snake=SnakeG;
        }catch(Exception e){
            e.printStackTrace();
        }
        try{
            BufferedImage FruitB= ImageIO.read(new File("assets/Blue.png"));
            blue_fruit=FruitB;
        }catch(Exception e){
            e.printStackTrace();
        }
        try{
            BufferedImage FruitR= ImageIO.read(new File("assets/Red.png"));
            red_fruit=FruitR;
        }catch(Exception e){
            e.printStackTrace();
        }
        try{
            BufferedImage FruitG= ImageIO.read(new File("assets/Green.png"));
            green_fruit=FruitG;
        }catch(Exception e){
            e.printStackTrace();
        }
    }
    @Override
    public void update(double dt) {
        if(mouseListener.getX()>=300&&mouseListener.getX()<500&&mouseListener.y>=420&&mouseListener.y<495)
        {
            if(mouseListener.isPressed())
            {
                Window.getWindow().changeState(0);
            }
        }
        if(mouseListener.getX()>=80&&mouseListener.getX()<180&&mouseListener.y>=75&&mouseListener.y<150)
        {
            if(mouseListener.isPressed())
            {
                Colors.snake_color=Color.RED;
            }
        }
        if(mouseListener.getX()>=200&&mouseListener.getX()<300&&mouseListener.y>=75&&mouseListener.y<150)
        {
            if(mouseListener.isPressed())
            {
                Colors.snake_color=Color.BLUE;
            }
        }
        if(mouseListener.getX()>=320&&mouseListener.getX()<420&&mouseListener.y>=75&&mouseListener.y<150)
        {
            if(mouseListener.isPressed())
            {
                Colors.snake_color=Color.GREEN;
            }
        }
        if(mouseListener.getX()>=80&&mouseListener.getX()<180&&mouseListener.y>=185&&mouseListener.y<260)
        {
            if(mouseListener.isPressed())
            {
                Colors.field_color=new Color(171, 54, 54);
            }
        }
        if(mouseListener.getX()>=200&&mouseListener.getX()<300&&mouseListener.y>=185&&mouseListener.y<260)
        {
            if(mouseListener.isPressed())
            {
                Colors.field_color=new Color(44, 131, 169);
            }
        }
        if(mouseListener.getX()>=320&&mouseListener.getX()<420&&mouseListener.y>=185&&mouseListener.y<260)
        {
            if(mouseListener.isPressed())
            {
                Colors.field_color=new Color(96, 211, 65, 119);
            }
        }
        if(mouseListener.getX()>=80&&mouseListener.getX()<180&&mouseListener.y>=295&&mouseListener.y<370)
        {
            if(mouseListener.isPressed())
            {
                Colors.fruit_color=Color.RED;
            }
        }
        if(mouseListener.getX()>=200&&mouseListener.getX()<300&&mouseListener.y>=295&&mouseListener.y<370)
        {
            if(mouseListener.isPressed())
            {
                Colors.fruit_color=Color.BLUE;
            }
        }
        if(mouseListener.getX()>=320&&mouseListener.getX()<420&&mouseListener.y>=295&&mouseListener.y<370)
        {
            if(mouseListener.isPressed())
            {
                Colors.fruit_color=Color.GREEN;
            }
        }
    }

    @Override
    public void draw(Graphics g) {
        g.setColor(Color.white);
        g.fillRect(0,0,Constants.Screen_Width,Constants.Screen_Height);
        g.setColor(Color.BLACK);
        g.setFont(new Font("Times New Roman", Font.BOLD, 15));
        g.drawString("Цвет Змеи",220,60);
        g.drawImage(red_snake,80,75,100,75,null);
        g.drawImage(blue_snake,200,75,100,75,null);
        g.drawImage(green_snake,320,75,100,75,null);
        g.drawString("Цвет Поля",220,170);
        g.drawImage(red_field,80,185,100,75,null);
        g.drawImage(blue_field,200,185,100,75,null);
        g.drawImage(green_field,320,185,100,75,null);
        g.drawString("Цвет Фрукта",220,280);
        g.drawImage(red_fruit,80,295,100,75,null);
        g.drawImage(blue_fruit,200,295,100,75,null);
        g.drawImage(green_fruit,320,295,100,75,null);
        g.drawImage(back,300,420,200,75,null);
    }
}
