//Thread create using extends method
class MyThread extends Thread {
    @Override
    public void run() {
        System.out.println("Thread is running");
    }
}

public class ThreadCreate {
    public static void main(String[] args) {
        MyThread obj = new MyThread();
        obj.start();
    }
}
//Thread create using interface method
class MyThread implements Runnable {
    @Override
    public void run() {
        System.out.println("Thread is running");
    }
}

public class ThreadCreate {
    public static void main(String[] args) {
        MyThread obj = new MyThread();
        Thread thread = new Thread(obj);
        thread.start();
    }
}
