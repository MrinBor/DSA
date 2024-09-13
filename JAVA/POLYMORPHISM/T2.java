import java.util.*;
import java.util.Scanner;


class Point
{
    private double x;
    private double y;


    public Point(int x,int y)
    {
        this.x = x;
        this.y = y;
    }

    public double calculateDistance()
    {
        return Math.sqrt(x*x + y*y);
    }

    public double calculateDistance(Point otherpoint)
    {
        double delx = otherpoint.x - this.x;
        double dely = otherpoint.y - this.y;
        return Math.sqrt(delx*delx + dely*dely);
    }

    public void Display()
    {
        System.out.println(" x: "+x+" y:"+y+"\n\n");
    }
}

public class T2 
{
    public static void main(String args[])
    {
        Point p1 = new Point(1, 2);
        Point p2 = new Point(3, 4);

        p1.Display();
        p2.Display();

        System.out.println("\nThe distance between point 1 and point 2 is "+p1.calculateDistance(p2)+"\n\n");


    }    
}
