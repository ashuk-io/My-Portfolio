import java.util.*;

public class Conditionals {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();

        if(age > 18){
            System.out.print("Adult\n");
        }
        else if (age < 18) System.out.print("Underage\n");
        else System.out.println("Nikal Laude");

    }
    
}
