import java.util.*;
import java.util.Scanner;

class Customer
{
    private String customerName;
    private int customerId;
    private long uniqueId;
    private String Address;

    public Customer(String  customerName,int customerId,long uniqueId,String Address)
    {
        System.out.println("\nINVOKING THE PARAMETERS\n");
        this.customerName = customerName;
        this.customerId = customerId;
        this.uniqueId = uniqueId;
        this.Address = Address;
    }

    public void UpdateFields(long uniqueId)
    {
        System.out.println("\nSetting the unique ID Field\n");
        this.uniqueId = uniqueId;
    }

    public void UpdateFields(String customerName)
    {
        System.out.println("\nSetting the Customer Name Field\n");
        this.customerName = customerName;
    }

    public void Display()
    {
        System.out.println("Customer Name    "+this.customerName+"\n");
        System.out.println("Customer Id      " + this.customerId + "\n");
        System.out.println("Unique Id        " + this.uniqueId + "\n");
        System.out.println("Address          " + this.Address + "\n");

    }








};



public class A1 
{
    public static void main(String args[])
    {
        Customer No1 = new Customer("MRINMOY", 1, 123445565, "PLOT 1");
        No1.Display();

        No1.UpdateFields(11111111);
        No1.Display();

        No1.UpdateFields("Princess");
        No1.Display();
    }    
}
