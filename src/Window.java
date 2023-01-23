import javax.swing.JFrame;
import java.awt.*;
public class Window  extends JFrame implements  Runnable{
    public boolean isRunning;
    public static Window window=null;
    public  KL keyListener=new KL();
    public  ML mouseListener=new ML();
    public Window(int Width,int Height,String title)///Конструктор
    {
        setSize(Width,Height);
        setTitle(title);
       /// SetResizable(false);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        isRunning=true;
        changeState(0);
        addKeyListener(keyListener);
        addMouseListener(mouseListener);
        addMouseMotionListener(mouseListener);
    }
    public void update(double dt)/////Обновление
    {
        Image dbImage=createImage(getWidth(),getHeight());
        Graphics dbg =dbImage.getGraphics();
        this.draw(dbg);
        getGraphics().drawImage(dbImage,0,0,this);
        currentScene.update(dt);

    }
    public static   Window getWindow()
    {
        if(Window.window==null) {
            Window.window = new Window(Constants.Screen_Width, Constants.Screen_Height, Constants.Screen_Title);
        }
        return Window.window;
    }

    public  void close()////закрыть окно
    {
        isRunning=false;
    }

    public void draw(Graphics g)///Рисовка
    {
        Graphics2D g2=(Graphics2D)g;
        currentScene.draw(g);
    }
    public  int currentState;
    public  Scene currentScene;
    public  void changeState(int newState)///Смена экрана
    {
        currentState=newState;
        switch(currentState)
        {
            case 0:
                currentScene=new MenuScene(keyListener,mouseListener);

                break;
            case 1:
                currentScene=new GameScene(keyListener);
                break;
            case 2:
                currentScene=new SettingsScene(mouseListener);
                break;
            case 3:
                currentScene=new HelpingNoteScene(mouseListener);
                break;
            default:
                 break;
        }
    }
    public void run()
    {
    double lastFrameTime=0.0;
    try{
            while(isRunning)
            {
                double time=Time.getTime();
                double deltaTime=time-lastFrameTime;
                lastFrameTime=time;
                update(deltaTime);
            }
        }catch(Exception e){
        e.printStackTrace();
    }
    this.dispose();
    }


}
