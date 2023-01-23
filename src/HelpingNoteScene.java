import javax.imageio.ImageIO;
import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

public class HelpingNoteScene extends Scene {
    public BufferedImage back;
    public  ML mouseListener=new ML();
    public HelpingNoteScene(ML mouseListener){
        this.mouseListener=mouseListener;
        try{
            BufferedImage backToMenu= ImageIO.read(new File("assets/BackToMenu.png"));
            back=backToMenu;
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

    }

    @Override
    public void draw(Graphics g) {
        g.setColor(Color.WHITE);
        g.fillRect(0,0,Constants.Screen_Width,Constants.Screen_Height);
        g.drawImage(back,300,420,200,75,null);
        g.setColor(Color.BLACK);
        int x=40,y=40;
        try(FileReader reader = new FileReader("help.txt"))
        {
            Scanner scan = new Scanner(reader);
            // читаем посимвольно

            while (scan.hasNextLine()) {
                g.drawString(scan.nextLine(),x,y);
                y+=44;
            }

            reader.close();
        }
        catch(IOException ex){

            System.out.println(ex.getMessage());
        }
    }
}
