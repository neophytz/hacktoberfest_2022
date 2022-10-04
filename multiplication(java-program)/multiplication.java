
import java.util.Scanner;
public class MultiplyNumbers{
    public static void main(String[] args){
        int num1, num2, product;
        
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first number: ");
        num1 = sc.nextInt();
        System.out.println("Enter second number: ");
        num2 = sc.nextInt();
    
        product = num1 * num2;
    
        System.out.println("The product of two numbers: "+ product);
    }
}