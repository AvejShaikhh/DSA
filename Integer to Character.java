// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.*;
class Main {
    public static void main(String[] args) {
       System.out.print("Integer to Character");
       Scanner sc = new Scanner(System.in);
       
       int[] arr = new int[4];
       for(int i=0;i<4;i++){
           arr[i] = sc.nextInt();
       }
       for(int num: arr){
           System.out.print(num + " ");
       }
      inttostr(arr);
    }
    
    public static void inttostr(int[] arr){
        
        
        for(int i=0;i<4;i++){
            int ascii = arr[i];
            char ch = (char)ascii;
            
            System.out.print(ch);
        }
       
    }
}
