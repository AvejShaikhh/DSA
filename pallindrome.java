// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.*;
class Main {
    public static void main(String[] args) {
        System.out.println("Check Pallindrome");
        Scanner sc = new Scanner(System.in);
        
        int num = sc.nextInt();
        
        if(checkPallindrome(num)){
            System.out.print("Pallindrome");
        }
        else{
            System.out.print("Not Pallindrome");
        }
        sc.close();
    }
    public static boolean checkPallindrome(int num){
        int temp = num;
        int rev = 0;
        while(num>0){
            int rem = num%10;
            rev = rev*10 + rem;
            num = num/10;
        }
        if(rev==temp){
            return true;
        }
        else{
            return false;
        }
    }
}
