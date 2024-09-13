import java.util.*;
import java.util.Scanner;


class P1
{
    P1()
    {
        System.out.println("\nInherited class Called\n");
    }
};

class P2 extends P1
{
    P2()
    {
        System.out.println("\nBase class constructor called\n");
    }
};

public class Conscall 
{
    public static void main(String args[])
    {
        P2 p = new P2();
    }

}
