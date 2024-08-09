import java.util.Scanner;
public class RightArrow {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        for (int i = 1; i < rows * 2; i++) {
            if (i <= rows) {
                for (int j = 1; j < i; j++) {
                    System.out.print("  ");
                }
                for (int j = rows; j >= i; j--) {
                    System.out.print("*");
                }
            } else {
                for (int j = 1; j < rows * 2 - i; j++) {
                    System.out.print("  ");
                }
                for (int j = 1; j <= i - rows + 1; j++) {
                    System.out.print("*");
                }
            }
            System.out.println();
        }
    }
}
