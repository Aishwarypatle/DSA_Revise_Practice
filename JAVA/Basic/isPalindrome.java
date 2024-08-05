import java.util.Scanner;

class Hello{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        // int num = input.nextInt();
        String str = input.next();
        // System.out.println(isPalindromeNum(num));
        System.out.println(isPalindromeString(str));
    }


    public static String isPalindromeNum(int num){
        int revNum = 0 ;
        int tempNum = num ;
        while(num != 0){
            revNum = (revNum * 10) + (num % 10);
            num = num/10;
        }
        if(revNum == tempNum){
            return "YES";
        }else{
            return "No";
        }
    }
    public static String isPalindromeString(String str){
        String revStr="";
        for(int i=str.length()-1; i>=0 ; i--){
            revStr = revStr + str.charAt(i);
        }
        if(revStr.toString().equals(str)){
            return "YES";
        }else{
            return "NO";
        }
    }
}