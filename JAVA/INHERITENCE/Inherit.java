import java.util.*;
import java.util.Scanner;

class Customer {
    private String customerId;
    private String customerName;

    public Customer(String customerId, String customerName) {
        this.customerId = customerId;
        this.customerName = customerName;
    }

    public Customer() {
        System.out.println("Parent Default Constructor");
    }

    public String getCustomerId() {
        return customerId;
    }

    public void setCustomerId(String customerId) {
        this.customerId = customerId;
    }

    public String getCustomerName() {
        return customerName;
    }

    public void setCustomerName(String customerName) {
        this.customerName = customerName;
    }

    public void displayCustomerDetails() {
        System.out.println("Displaying customer details \n***************************");
        System.out.println("Customer Id : " + customerId);
        System.out.println("Customer Name : " + customerName);
        System.out.println();
    }
};



class RegularCustomer extends Customer {
    private float discount;

    public RegularCustomer(String custId, String custName) {
        this.setCustomerId(custId);
        this.setCustomerName(custName);
        this.discount = 5.0f;
        System.out.println("Child Constructor");
    }

    public float getDiscount() {
        return discount;
    }

    public void setDiscount(float discount) {
        this.discount = discount;
    }
};





public class Inherit 
{
    public static void main(String args[])
    {
        RegularCustomer a1 = new RegularCustomer("Hello There", "How are you");
        System.out.println(a1.getCustomerId());
        System.out.println(a1.getCustomerName());

    }    
}
