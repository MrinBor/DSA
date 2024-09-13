import java.util.*;
import java.util.Scanner;

class Parent
{
    public int a;
    public int b;

    Parent()
    {
        System.out.println("\nThe non parameterized Parent Constructor is invoked\n");
    }

    Parent(int a,int b)
    {
        System.out.println("\nThe parameterized Parent constructor is invoked\n");
        this.a = a;
        this.b = b;
    }
};

class Child extends Parent
{
    public int c;
    public int d;

    Child()
    {
        super();
        System.out.println("\nThe non parameterizes child constructor is invoked\n");
    }

    Child(int a,int b,int c,int d)
    {
        super(a, b);
        System.out.println("\nThe parameterized child constructor is invoked\n");
        this.c = c;
        this.d = d;
    }

    public void Display()
    {
        System.out.println("\nThe values are as follows \n"+a+" "+b+" "+c+" "+d+"\n\n");
    }
}


public class Super 
{
    public static void main(String args[])
    {
        int a;
        Scanner s = new Scanner(System.in);
        a = s.nextInt();
        System.out.println("\nA value -->> "+a);

        Child c1 = new Child();
        Child c2 = new Child(1,2,3,4);

        c2.Display();
    }
    
}