import java.util.Scanner;

public class New1 {

    public int FindSum(int n) {
        int sum = 0;
        for (int i = 1; i < n; i++) {
            sum += i;
        }
        return sum;
    }

    public static void main(String[] args) {
        New1 a1 = new New1();
        Scanner s = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = s.nextInt();

        int sum = a1.FindSum(number);
        System.out.println("The sum is: " + sum);
    }
}



//   The code runs without an error but the output is not as expected. We need to find out the error or bug in our code. This is simple if we have a single method but imagine an entire application where different methods are dependent on one another. In such a case, it becomes very difficult to find out where the bug is present. 
//   So, we need the help of tools for debugging.
//   Eclipse provides different tools for debugging. Using these tools, we can run the program interactively and watch the code during each step of the execution. This makes it easier to identify the point at which the error was made.
