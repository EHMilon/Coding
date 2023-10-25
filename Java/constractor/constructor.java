package constractor;

public class constructor {
    private String name;
    private int age;

    // Constructor
    public constructor(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Copy Constructor
    public constructor(constructor other) {
        this.name = other.name;
        this.age = other.age;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public static void main(String[] args) {
        // Create a person object using the constructor
        constructor person1 = new constructor("John", 25);

        // Create a new person object using the copy constructor
        constructor person2 = new constructor(person1);

        System.out.println("person1:");
        System.out.println("Name: " + person1.getName());
        System.out.println("Age: " + person1.getAge());

        System.out.println("\nperson2 (copy of person1):");
        System.out.println("Name: " + person2.getName());
        System.out.println("Age: " + person2.getAge());
    }
}
