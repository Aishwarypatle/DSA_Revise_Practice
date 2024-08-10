import java.util.Scanner;

class Hello{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        // int num1 = input.nextInt();
        // int num2 = input.nextInt();
        int[] nums = {3,3};
        System.out.println(finGCDArray(nums));
    }

    public static int finGCDArray(int [] nums){
        int smallNum = nums[0];
        int largeNum = nums[0];
        int gcdNum = 0;
        for(int i=0;i<nums.length;i++){
            if(nums[i] < smallNum){
                smallNum = nums[i];
            }
            if(nums[i] > largeNum){
                largeNum = nums[i];
            }
        }
            if(smallNum == largeNum){
                return smallNum;
            }
        int i = 1;
        while(i!= largeNum){
            if(smallNum%i==0 && largeNum%i==0 ){
                System.out.println(i);
                gcdNum = i;
            }
            i++;
        }
        return gcdNum;
    }
}