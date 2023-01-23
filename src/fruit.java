import java.awt.*;

public class fruit  {
    public rectangle background;
    public snake snake;
    public int width,height,xPadding;
    public Color color;
    public rectangle obj;
    public boolean isSpawned;

    public fruit(rectangle background, snake snake, int width, int height, Color color)
    {
        this.background=background;
        this.snake=snake;
        this.width=width;
        this.height=height;
        this.color=color;
        this.obj=new rectangle(0,0,width,height);
        xPadding=(int)((Constants.Tile_Width-this.width)/2.0);
    }
    public void spawn()
    {
        do{
            double randX=(int)(Math.random()*(int)(background.width/Constants.Tile_Width))*Constants.Tile_Width+ background.x;
            double randY=(int)(Math.random()*(int)(background.height/Constants.Tile_Width))*Constants.Tile_Width+ background.y;
            this.obj.x=randX;
            this.obj.y=randY;
        }while (snake.collisionWithobj(this.obj));
        isSpawned=true;
    }
    public void update(double dt)
    {
        if(snake.collisionWithobj(this.obj))
        {
            snake.grow();
            this.obj.x=-100;
            this.obj.y=-100;
            isSpawned=false;
            GameScene.score+=1;
        }
    }

    public void draw(Graphics2D g2)
    {
        g2.setColor(Colors.fruit_color);
        g2.fillRect((int)this.obj.x+xPadding,(int)this.obj.y+xPadding,width,height);
    }


}
