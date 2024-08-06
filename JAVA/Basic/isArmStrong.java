import java.util.Scanner;

class Hello{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
         int num = input.nextInt();
        System.out.println(isArmstrongNum(num));
    }


    public static String isArmstrongNum(int num){
        //num = 153
        double length = Integer.toString(num).length();
        int tempNum = num;
        int totalSum = 0;
        while(num > 0){
            int unitNum = num % 10;
            totalSum = (int) (totalSum + Math.pow(unitNum,length));
            num = num/10;
        }
        System.out.println(totalSum);
        if(tempNum == totalSum){
            return  "True";
        }else{
            return "false";
        }
    }
}

// input 153 = 1cube + 5cube + 3cube = 153