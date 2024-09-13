import java.util.*;
import java.util.Scanner;


/**
 * Every class will have some properties and asssociated methods
 * 
 * 
 * Theproperties and the Methods 
 * 
 * We have to decide the dta types of the Object
 * 
 * We will have the FOLLOWING
 */

class InnerObj
{

    //Properties:
    /**
     * 
     * The printinfg of the area perimeter an th ecircumference
     */
    public  int a1;
    private int channel;
    private int value;


    //THE METHODS::

    public int PrintInteger()
    {
        return a1;
    }

    public void Change()
    {
        System.out.println("\nThe volume is CHANGED\n");
    }

    public void OnChange()
    {
        System.out.println("\nThe volume has been Changed\n");       
    }


    public static void main(String args[])
    {
        InnerObj ob = new InnerObj();
        //Reference and the Object
        ob.Change();
        ob.OnChange();


        ob.a1=100;
        System.out.print(ob.a1);
    }
}


/**
 * One class can have many Objects
 * 
 * Based on the design the car is Manufactured
 * 
 * We will ahev the follwing
 * 
 * 
 * The behaviour are written as methods
 * 
 * 
 * 
 * Channel
 * value
 * 
 * 
 * We can have as many functions as we can have
 * 
 * We will have the follwing
 * 
 * 
 * These are the Properties
 */