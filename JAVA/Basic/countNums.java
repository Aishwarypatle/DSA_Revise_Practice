import java.util.Scanner;

class Hello{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        System.out.println(countNum(num));
    }
    public static int countNum(int num){

       return Integer.toString(num).length();

    }
}