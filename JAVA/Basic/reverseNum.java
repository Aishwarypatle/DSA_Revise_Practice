import java.util.Scanner;

class Hello{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        System.out.println(reverseNum(num));
    }
    public static int reverseNum(int num){
        int revNum = 0;
        while (num != 0) {
            revNum = (revNum * 10 ) + ( num % 10);
            num = num / 10;
        }
        return revNum;
    }
}