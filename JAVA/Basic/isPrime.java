import java.util.Scanner;

class Hello{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        System.out.println(isPrime(num));
    }


    public static String isPrime(int num){
        if(num <= 0){
            return "zero or negative num";
        }else if(num % 2 == 0){
            return "even";
        }else{
            return "odd";
        }
    }
}