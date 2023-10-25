public class FibonacciSeries {
    public static void main(String[] args) {
        int n = 10, t1 = 0, t2 = 1;
        System.out.print("Fibonacci Series between 1-10: ");
        for (int i = 0; i <= n; i++) {
            int sum = t1 + t2;
            t1 = t2;
            t2 = sum;
            if (t1 >= 1 && t1 <= n) {
                System.out.print(t1 + " ");
            }
        }
    }
}
