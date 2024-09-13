import java.util.*;
import java.util.Scanner;



class Car {
    private String color;
    private static int NoOfCars = 0;

    static{
        System.out.println("The car class is Loaded");
    }

    public Car(String color)
    {
        this.color = color;
        NoOfCars++;
    }

    public String getColor()
    {
        return this.color;
    }

    public static int GetNoOfCars()
    {
        return NoOfCars;
    }


}


class A2
{
    public static void main(String args[])
    {
        Car c1 = new Car("Red");
        Car c2 = new Car("Green");
        Car c3 = new Car("Blue");
        System.out.println("Number of cars created: " + Car.GetNoOfCars());

    }


    static
    {
        System.out.println("The execution starts HERE !!");
    }
}