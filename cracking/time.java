import java.util.Date;
import java.util.Timer;
import java.util.TimerTask;

class time extends TimerTask {
    public static void main(String[] args) {
	run();		
    }
    public void run() {
       System.out.println("Hello World!");
    }
 // And From your main() method or any other method
 Timer timer = new Timer();
 timer.schedule(new run(), 0, 5000);

 }
