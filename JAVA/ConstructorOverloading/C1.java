import java.util.*;
import java.util.Scanner;


class ConsOverloading
{
    float a1;
    float a2;
    String a3;

    ConsOverloading(float a1,float a2,String a3)
    {
        this.a1 = a1;
        this.a2 = a2;
        this.a3 = a3;
        System.out.println("\nConstructor 1 Invoked\n");
    }

    ConsOverloading(float a1,float a2)
    {
        this.a1 = a1;
        this.a2 = a2;
        System.out.println("\nConstructor 2 Invoked\n");
    }

}


public class C1 
{
    public static void main(String args [])
    {
        ConsOverloading c1 = new ConsOverloading(1.1f,2.1f, "Hello");
        ConsOverloading c2 = new ConsOverloading(1.1f, 2.1f);

    }
}



//