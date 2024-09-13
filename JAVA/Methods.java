import java.util.*;
import java.util.Scanner;




//Redifing the method of super class into the sub class


class Super
{
    public void Display()
    {
        System.out.println("Super Class\n");
    }
}


class Sub extends Super
{
    public void Display()//This display is over rided over here
    //A class has obtianed it form the super class
    {
        System.out.println("Sub Class");
    }
}


public class Methods {
    public static void main(String[] args) 
    {
        Super s = new Super();
        s.Display();

        Sub sb = new Sub();
        sb.Display();

        System.out.println("###############");
        //Based on Object -->> Method willl be declared 
        /**
         * 
         * We will have this Method as follows 
         * 
         * Sub Meth 2 will be called 
         * The second one  
         * 
         */
        Super su =  new Sub();// Based on the Object the method will be called
        //Methods
        // // // We would have this
        /**
         * The programme will take decision at the run time 
         * 
         * 
         * 
         */
        su.Display();

        //Method calling


    }
}


// Object is the Sub Class
// A super class reference holding an object
// Method of an Object will be called

// Reeference = pbject
// The method will be called depending on the object


// Sub class is having own method of displaying something
// Display The message
// We will

// Dyanamic Method Despatch


/**
 * 
 * Topics 
 * 
 * Method Overridding
 * Over Riding
 * 
 * Dyanamic method Despacth
 * Rules
 * 
 */

