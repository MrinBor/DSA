import  java.util.*;
import java.util.Scanner;



//The super is a reference to the Super Class

class Line
{
    int a;
    int b;
    int x = 10;


    Line(int a,int b)
    {
        this.a = a;
        this.b = b;
    }
}

class Rectangle extends Line 
{
    int length;
    int breadth;



    //he assignment of the Values
    Rectangle(int l, int br,int a,int b) 
    {
        super(a,b);
        //The super calss constructor is called
        // We will have the following

        this.length = l;
        this.breadth = b;


        System.out.println("The parameterized Constructor is called");
        //To avoid name conflict e will use this operator
    }

    void Display() {
        System.out.println("Length -->> " + this.length);
        System.out.println("Breadth-->> " + this.breadth);
    }
}

public class ThisSup
{


    public static void main(String args [] )
    {
        Scanner s = new Scanner(System.in);
        Rectangle  r = new Rectangle(1,2,3,4);
        r.Display();
    }
}