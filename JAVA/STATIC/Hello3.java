import java.util.*;
import java.util.Scanner;

class Customer
{

    private static int counter; // Declaring the static variable counter
    private String customerId;
    private String customerName;
    private long contactNumber;
    private String address;
    private static float deliveryCharge;

    static 
    {
        deliveryCharge = 1.5f;
        counter = 100; // Initializing the static variable counter
    }

    public Customer(String  customerName,String Address)
    {
        this.customerId = "C" + ++Customer.counter;
        this.customerName = customerName;
        this.address = Address;

    }

    public void Display()
    {
        System.out.println("Address         "+this.address);
        System.out.println("Customer Name   "+this.customerName);
        System.out.println("Customer ID -->>"+this.customerId);
    }



}


public class Hello3 
{
    public static void main(String args [])
    {
        Customer c1 = new Customer("MRIN", "Flat No 2B");
        c1.Display();

        Customer c2 = new Customer("MRIN", "Flat No 2B");
        c2.Display();

    }

}
