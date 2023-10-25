package Interface;

// Define the interface
interface Greeting {
    void sayHello();
}

// Implement the interface in a class
class EnglishGreeting implements Greeting {
    public void sayHello() {
        System.out.println("Hello!");
    }
}

// Implement the interface in another class
class FrenchGreeting implements Greeting {
    public void sayHello() {
        System.out.println("Bonjour!");
    }
}

// Main program
public class Interface {
    public static void main(String[] args) {
        // Create instances of the implementing classes
        Greeting englishGreeting = new EnglishGreeting();
        Greeting frenchGreeting = new FrenchGreeting();

        // Call the sayHello() method through the interface reference
        englishGreeting.sayHello();
        frenchGreeting.sayHello();
    }
}


