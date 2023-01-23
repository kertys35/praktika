import java.awt.*;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.awt.geom.Rectangle2D;

import static java.awt.Color.GREEN;

public class GameScene extends Scene{
    rectangle background,foreground;
    snake snake;
    KL keyListener;
    public static int score=0;
    public fruit fruit;
    public GameScene(KL keyListener){
        background=new rectangle(0,0,Constants.Screen_Width,Constants.Screen_Height);
        foreground=new rectangle(24,48,24*20,24*19);
        snake=new snake(1,48,48+24,24,24,background);
        this.keyListener= keyListener;
        fruit=new fruit(foreground,snake,12,12,Color.GREEN);
        fruit.spawn();
    }
    @Override
    public void update(double dt) {
        if(keyListener.isKeyPressed(KeyEvent.VK_UP))
        {
            snake.changedirections(Direction.UP);
        }else if(keyListener.isKeyPressed(KeyEvent.VK_DOWN))
        {
            snake.changedirections(Direction.DOWN);
        }else if(keyListener.isKeyPressed(KeyEvent.VK_RIGHT))
        {
            snake.changedirections(Direction.RIGHT);
        }else if(keyListener.isKeyPressed(KeyEvent.VK_LEFT))
        {
            snake.changedirections(Direction.LEFT);
        }
        if(!fruit.isSpawned)
            fruit.spawn();
        fruit.update(dt);
        snake.update(dt);

    }


    @Override
    public void draw(Graphics g) {
        Graphics2D g2=(Graphics2D)g;
        g.setColor(Color.black);
        g.fillRect((int)background.x,(int)background.y,background.width,background.height);
        g2.setColor(Colors.field_color);
        g2.fill(new Rectangle2D.Double((int)foreground.x,(int)foreground.y,foreground.width,foreground.height));
        snake.draw(g2);
        fruit.draw(g2);
        g.setColor(Color.RED);
        g.setFont(new Font("Times New Roman", Font.BOLD, 20));
        g.drawString("Счёт:",300,44);
        g.drawString(String.valueOf(GameScene.score),360,44);
    }
}
