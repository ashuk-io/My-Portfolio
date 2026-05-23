import java.util.*;

public class Modulus {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        int button = input.nextInt();

        if (number % 2 == 0) System.out.println("Even");
        else System.out.println("Odd");

        switch(button) {
            case 1 : System.out.println("Hello");
            break;
            case 2 : System.out.println("Heyyy");
            break;
            case 3 : System.out.println("Yepppp");
            break;
            default : System.out.println("Invalid Button");

        }
    }
}
