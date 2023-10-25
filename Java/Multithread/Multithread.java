// Multithread programming Method
package Multithread;
class A extends Thread {
    @Override
    public void run() {
        for(int i = 1; i<=5; i+=2) {
            System.out.println("Thread of A: "+i+" is running");
        }
    }
}

class B extends Thread {
    @Override
    public void run() {
        for(int j = 1; j<=5; j+=2) {
            System.out.println("Thread of B: "+j+" is running");
        }
    }
}

public class Multithread {
    public static void main(String[] args) {
        A a = new A();
        a.start();
        B b = new B();
        b.start();
    }
}