import java.util.*;
import java.util.Scanner;

class Prev1
{
    private int a;
    private int b;

    public void SetData(int a,int b)
    {
        this.a = a ;
        this.b = b;
    }

    public void GetData()
    {
        System.out.println(a);
    }
};

public class IN1 
{
    public static void main(String args[])
    {
        Scanner s  = new Scanner(System.in);
        int a;
        a = s.nextInt();
        int b;
        b = s.nextInt();
        Prev1 p = new Prev1();
        p.SetData(1, 2);
        p.GetData();

    }
}
