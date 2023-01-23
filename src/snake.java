import java.awt.*;
import java.awt.geom.Rectangle2D;

public class snake {
    public rectangle[] body=new rectangle[100];
    public int width,height;
    public int size;
    public int tail=0;
    public int head;
    public Direction direction=Direction.RIGHT;
    public double waitBetweenUpdates=0.1f;
    public double waitTimeLeft=waitBetweenUpdates;
    public rectangle background;
    public void changedirections(Direction newDIrection)
    {
        if(newDIrection==Direction.RIGHT&&direction!=Direction.LEFT)
         direction=newDIrection;
        else if(newDIrection==Direction.LEFT&&direction!=Direction.RIGHT)
            direction=newDIrection;
        else if(newDIrection==Direction.UP&&direction!=Direction.DOWN)
            direction=newDIrection;
        else if(newDIrection==Direction.DOWN&&direction!=Direction.UP)
            direction=newDIrection;
    }

    public void update(double dt)
    {
        if(collisionWithBody())
            Window.getWindow().changeState(0);
        if(waitTimeLeft>0)
        {
            waitTimeLeft-=dt;
            return;

        }
        waitTimeLeft=waitBetweenUpdates;
        double newX=0;
        double newY=0;
        if(direction==Direction.RIGHT)
        {
            newX=body[head].x+width;
            newY=body[head].y;
        }else if(direction==Direction.LEFT)
        {
            newX=body[head].x-width;
            newY=body[head].y;

        }else if(direction==Direction.UP)
        {
            newX=body[head].x;
            newY=body[head].y-height;
        }else if(direction==Direction.DOWN)
        {
            newX=body[head].x;
            newY=body[head].y+height;
        }

        body[(head+1)%body.length]=body[tail];
        body[tail]=null;
        head=(head+1) % body.length;
        tail=(tail+1) % body.length;
        body[head].x=newX;
        body[head].y=newY;

    }
    public snake(int size,int startX, int startY,int width, int height,rectangle background)//Конструктор
    {
        this.size=size;
        this.width=width;
        this.background=background;
        this.height=height;
        for(int i=0;i<=size;i++)
        {
            rectangle bodypart=new rectangle(startX+i*width,startY,width,height);
            body[i]=bodypart;
            head++;
        }
        head--;
    }
    public boolean collisionWithBorder(rectangle head)
    {
        return (head.x < background.x || (head.x + head.width) > background.x+background.width || head.y < background.y || (head.y + head.height) > background.y + background.height);
    }

    public boolean collisionWithobj(rectangle obj)
    {
        for(int i = tail;i!=head;i=(i+1)%body.length)
        {
            if(collision(obj,body[i]))
                return true;
        }
        return false;

    }
    public void grow()
    {
        double newX=0;
        double newY=0;
        if(direction==Direction.RIGHT)
        {
            newX=body[tail].x-width;
            newY=body[tail].y;
        }else if(direction==Direction.LEFT)
        {
            newX=body[tail].x+width;
            newY=body[tail].y;

        }else if(direction==Direction.UP)
        {
            newX=body[tail].x;
            newY=body[tail].y+height;
        }else if(direction==Direction.DOWN)
        {
            newX=body[tail].x;
            newY=body[tail].y-height;
        }
        rectangle newBodyPart = new rectangle((int)newX,(int)newY,width,height);
        tail=(tail-1)%body.length;
        body[tail]=newBodyPart;

    }

    public boolean collisionWithBody()
    {
        rectangle headR=body[head];
        return collisionWithobj(headR)||collisionWithBorder(headR);
    }
    public boolean collision(rectangle r1, rectangle r2)
    {
        return (r1.x >= r2.x && r1.x + r1.width <= r2.x + r2.width && r1.y >= r2.y && r1.y + r1.height <= r2.y + r2.height);
    }
    public void draw(Graphics2D g2)
    {
        for(int i = tail;i!=head;i=(i+1)%body.length)
        {

            rectangle piece = body[i];
            g2.setColor(Colors.snake_color);
            g2.fill(new Rectangle2D.Double(piece.x,piece.y,piece.width,piece.height));
        }
    }
}
