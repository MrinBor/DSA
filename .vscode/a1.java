import java.util.*;
import java.util.Scanner;

//The biuanry dearchg algotrithn 

/**
 * Linearly searchiong th e targer
 * 0(N) is the time comp[lexity for it
 * ]
 * 
 * 
 * Biunary search 
 * From a different perzxpective
 * 
 * We have to search for an elementinside an arrays
 * 
 * 
 * The middle eelelenmt seadcrhc wll bw the first
 * 
 * 
 * Divifd eupto (n+1)/2
 * 
 * It takex place ont he sorted array
 *  
 */



class a1
{

static void FindMin(int a,int arr[])
    {
       //tHE SEARCJHIN G TIME WILL BE LESS IN ALL THJE RESPECTIVE CASES
       // tHE NO OF ITERSTIONN WILL BE LESS
       
       //tHE BINARY IS FASTER 
        // bINARY SEARCH CO


        //DISCARDING THE UNUSED EELEMMTS 


        /**
         * tHGE BINARY SEACRH CVAN BVE IMPLEMNTED EAS9ILY
         * 
         * 
         */

         for(int i=0;i<a;i++)
         {
            System.out.println(arr[i]);
         }

    }
    public static void main(String args [])
    {
        Scanner s = new Scanner(System.in);
        int a=s.nextInt();
        int arr[] = new int[a];

        for(int i=0;i<a;i++)
        {
            arr[i]=s.nextInt();
        }

        FindMin(a, arr);
    }
}