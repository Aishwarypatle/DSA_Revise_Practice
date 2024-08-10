import java.util.ArrayList;
import java.util.Scanner;

class Hello{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num1 = input.nextInt();
        int num2 = input.nextInt();
        System.out.println(finGCD(num1,num2));
    }

    public static int finGCD(int num1,int num2){
        // ArrayList<Integer>  divisibleNums = new ArrayList<>();
        int divisibleNum = 0 ;
        int loopNum = num1 > num2 ? num1 : num2 ;

        for(int i=1;i<=loopNum;i++){
            if(num1%i == 0 && num2%i == 0 ){
                // divisibleNums.add(i);
                divisibleNum = i;
            }
        }
        // return divisibleNums.get(divisibleNums.size()-1);
        return divisibleNum;
    }
}