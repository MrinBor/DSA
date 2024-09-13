import java.util.*;
import java.util.Scanner;


class Car
{
    String colour;
    private static int number = 0;

    public Car(String colour)
    {
        this.colour = colour;
        number++;
    }

  

    public void NoOfCardata()
    {
        System.out.println("The Car Number -->>"+number);
        System.out.println("\nThe car number "+number+" is created \n");
    }

    public void Display_Data()
    {
        System.out.println("Coulour :: " + colour);
        System.out.println("Number :: "  + number);
    }
}


public class T2 
{
    public static void main(String args [])
    {
        Car c1 =  new Car("Red");
        c1.NoOfCardata();
        c1.Display_Data();

        Car c2 = new Car("Red");
        c2.NoOfCardata();
        c2.Display_Data();


        Car c3 = new Car("Red");
        c3.NoOfCardata();
        c3.Display_Data();
        

    }
}
