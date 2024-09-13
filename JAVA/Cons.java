import java.util.*;
import java.util.Scanner;



/**
 * itemno
 * name
 * price
 * qty
 */

 /**
  * Customer 
  */

// We will have the following
/**
 * Public int values
 * We will have the following
 * 
 */


 /**
  * Array of Objects Creation we will have the following

  */

public class Cons 
{



    public int l;
    public int b;
    public int c;

    public String a1;
    public String a2;

    public Cons()
    {
        l=1;
        b=2;
    }


    // Theu do not have any return Types
    // By default the constructors are made as public


    public Cons(int l,int b)
    {
        this.l = l;
        this.b = b;
        System.out.println("The default parameters settled \n");



    }

    public Cons(int l, int b,int c) {
        this.l = l;
        this.b = b;
        this.c = c;
        System.out.println("The default parameters settled with 3 parameters \n");


    }




    public static void main(String args[])
    {
        // Cons c1 = new Cons(1,2,3);


        Cons c[] = new Cons[10];

        c[0] = new Cons(1,2,3);
        c[1] = new Cons(4,5,6);
        c[2] = new Cons(7,8,9);


    }    
}
