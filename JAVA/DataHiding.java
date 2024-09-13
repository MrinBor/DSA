/**
 * 
 * 
 * Not concerend about the working of certain Thing -> Thang
 * 
 * 
 * Data
 * and the corresponding
 * Operations/Methods associated with it 
 * Buttons are requiredd to be implementd
 * 
 * 
 * Engine is data
 * 
 * The methods af obtaining 
 * 
 * Usually the data are Hidden 
 * 
 */


 //Constructors
 

import java.util.*;
import java.util.Scanner;





public class DataHiding {
    
    //This cannot be accessed outside th class

    private int Bonus;
    private int a1=100;///The output will be 100
    private int a2;

    int getLength()
    {
        return a1;
    }

    void setLength(int l)
    {
        this.a1 = l;
    }

    //The getter and the setter methodds 
    //We will have the follwing 
    ///Using th eproperty methods


    public static void main(String args[])
    {
        DataHiding d1 = new DataHiding(); 
        System.out.println(d1.a1);

        d1.setLength(111);
        System.out.println("The output of the d1 variable is as follows :: -->> "+d1.getLength());
    }


    /**
     * For accessing the data  we need to provide some methods 
     * 
     * We will have the following
     */


    
}


/**
 * The concept of DATA HIDING
 * We will have the following
 * We will have the follwinf
 */

// The getter and the setter methods
// We will have the following
/**
 * Read and writable
 * Read Onl
 * 
 */