//Single Inheritance
/*
 // Parent class
class Animal {
  public void eat() {
    System.out.println("The animal is eating.");
  }
}

// Child class inheriting from Animal
class Dog extends Animal {
  public void bark() {
    System.out.println("The dog is barking.");
  }
}

// Main method to test the classes
public class Main {
  public static void main(String[] args) {
    Dog myDog = new Dog();
    myDog.eat(); // Output: The animal is eating.
    myDog.bark(); // Output: The dog is barking.
  }
} 
*/

//Multiple Inheritance
/* 
// Grandparent class
class Animal {
  public void eat() {
    System.out.println("The animal is eating.");
  }
}

// Parent class inheriting from Animal
class Dog extends Animal {
  public void bark() {
    System.out.println("The dog is barking.");
  }
}

// Child class inheriting from Dog
class Bulldog extends Dog {
  public void snore() {
    System.out.println("The bulldog is snoring.");
  }
}

// Main method to test the classes
public class Main {
  public static void main(String[] args) {
    Bulldog myBulldog = new Bulldog();
    myBulldog.eat(); // Output: The animal is eating.
    myBulldog.bark(); // Output: The dog is barking.
    myBulldog.snore(); // Output: The bulldog is snoring.
  }
} 
*/  

// Hierarchical Inheritance Example

// Parent class
class Animal {
  public void eat() {
    System.out.println("The animal is eating.");
  }
}

// Child class inheriting from Animal
class Dog extends Animal {
  public void bark() {
    System.out.println("The dog is barking.");
  }
}

// Another child class inheriting from Animal
class Cat extends Animal {
  public void meow() {
    System.out.println("The cat is meowing.");
  }
}

// Main method to test the classes
public class Main {
  public static void main(String[] args) {
    Dog myDog = new Dog();
    myDog.eat(); // Output: The animal is eating.
    myDog.bark(); // Output: The dog is barking.

    Cat myCat = new Cat();
    myCat.eat(); // Output: The animal is eating.
    myCat.meow(); // Output: The cat is meowing.
  }
}

/* 
 * public class example {
    static class Who {
        public void who() {
            System.out.println("who are you?");
        }
    }

    static class Milon extends Who {
        public void milon() {
            System.out.println("I am Milon");
        }
    }

    static class Roman extends Who {
        public void roman() {
            System.out.println("I am Roman");
        }
    }

    public static void main(String[] args) {
        Milon name1 = new Milon();
        name1.who();
        name1.milon();

        Roman name2 = new Roman();
        name2.who();
        name2.roman();
    }
}
 */