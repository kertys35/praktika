import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.File;
import javax.imageio.ImageIO;
import javax.swing.*;
public class MenuScene extends Scene{
    public KL keyListener;
    public  ML mouseListener=new ML();
    public BufferedImage play,settings,helpNote,exit;

    public MenuScene(KL keyListener,ML mouseListener)
    {
        this.keyListener=keyListener;
        this.mouseListener=mouseListener;
        try{
            BufferedImage MenuStart= ImageIO.read(new File("assets/Menu_Start.png"));
            play=MenuStart;
        }catch(Exception e){
            e.printStackTrace();
        }

        try{
            BufferedImage SettingsStart= ImageIO.read(new File("assets/Settings_Start.png"));
            settings=SettingsStart;
        }catch(Exception e){
            e.printStackTrace();
        }
        try{
            BufferedImage ExitStart= ImageIO.read(new File("assets/Exit_Start.png"));
            exit=ExitStart;
        }catch(Exception e){
            e.printStackTrace();
        }
        try{
            BufferedImage HelpNoteStart= ImageIO.read(new File("assets/HelpNote_Start.png"));
            helpNote=HelpNoteStart;
        }catch(Exception e){
            e.printStackTrace();
        }
    }
    public void update(double dt)
    {
        if(mouseListener.getX()>=150&&mouseListener.getX()<350&&mouseListener.y>=40&&mouseListener.y<140)
        {
            if(mouseListener.isPressed())
            {
                Window.getWindow().changeState(1);
            }
        }
        if(mouseListener.getX()>=150&&mouseListener.getX()<350&&mouseListener.y>=160&&mouseListener.y<260)
        {
            if(mouseListener.isPressed())
            {
                Window.getWindow().changeState(2);
            }
        }
        if(mouseListener.getX()>=150&&mouseListener.getX()<350&&mouseListener.y>=280&&mouseListener.y<380)
        {
            if(mouseListener.isPressed())
            {
                Window.getWindow().changeState(3);
            }
        }
        if(mouseListener.getX()>=150&&mouseListener.getX()<350&&mouseListener.y>=400&&mouseListener.y<500)
        {
            if(mouseListener.isPressed())
            {
                Window.getWindow().close();
            }
        }
    }
    public void draw(Graphics g)
    {
        g.setColor(new Color(100, 196, 21, 126));
        g.fillRect(0,0,Constants.Screen_Width,Constants.Screen_Height);
        g.drawImage(play,150,40,200,100,null);
        g.drawImage(settings,150,160,200,100,null);
        g.drawImage(helpNote,150,280,200,100,null);
        g.drawImage(exit,150,400,200,100,null);

    }
}
