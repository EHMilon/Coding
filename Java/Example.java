public class Example {
    public static boolean prime(int n) {
        if (n <= 1) {
            return false;
        }
        
        for(int i =2; i<=Math.sqrt(n); i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        int num = 100;
        for(int j=1; j<=num; j++){
            if(prime(j)){
                System.out.println(j);
            }
            
        }
    }
}