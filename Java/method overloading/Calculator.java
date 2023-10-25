public class Calculator {
    
    // Method to add two integers
    public int add(int a, int b) {
        return a + b;
    }
    
    // Method to add three integers
    public int add(int a, int b, int c) {
        return a + b + c;
    }
    
    // Method to add two doubles
    public double add(double a, double b) {
        return a + b;
    }
    
    // Main method to test the calculator
    public static void main(String[] args) {
        Calculator calc = new Calculator();
        
        // Test the integer addition methods
        System.out.println("2 + 3 = " + calc.add(2, 3));
        System.out.println("2 + 3 + 4 = " + calc.add(2, 3, 4));
        
        // Test the double addition method
        System.out.println("2.5 + 3.5 = " + calc.add(2.5, 3.5));
        
        
        
    }
}
