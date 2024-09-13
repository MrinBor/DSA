import java.util.*;
import java.util.Scanner;


class Super
{
    int a;
    int b;
    Super(int a,int b)
    {
        System.out.println("Super class");
    }
}

class Base extends Super
{
    int a;
    int b;

    Base()
    {
        super(1,2);
        System.out.println("Base Class");
    } 
}

/**
 * Java_1
 */
public class Java_1 
{
    public static void main(String args[])
    {
        Base b = new Base();
    }    
}