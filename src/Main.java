public class Main {
    public static void main(String[] args) {
        Window window=Window.getWindow();
        Thread t1=new Thread(window);
        t1.start();
    }
}