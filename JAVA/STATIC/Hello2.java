import java.util.Scanner;
import java.util.*;


class Customer {
    private String customerId;
    private String customerName;
    private long contactNumber;
    private String Address;
    private static float deliveryCharge;

    static {
        deliveryCharge = 1.5f;
    }

    public Customer(String customerId, String customerName, long contactNumber, String Address) 
    {
        this.customerId = customerId;
        this.customerName = customerName;
        this.contactNumber = contactNumber;
        this.Address = Address;
    }

    public void displayCustomerDetails() {
        System.out.println("Displaying customer details \n***********");
        System.out.println("Customer Id : " + customerId);
        System.out.println("Customer Name : " + customerName);
        System.out.println("Contact Number : " + contactNumber);
        System.out.println("Address : " + Address);
        System.out.println();
    }

    public static void DiscountDisplay() 
    {
        System.out.println("Discounted Price == " + deliveryCharge);
    }
}

public class Hello2 {
    public static void main(String[] args) {
        Customer c1 = new Customer("AS01", "Mrinmoy", 4072L, "FLAT NO 2B");
        c1.displayCustomerDetails();
        c1.DiscountDisplay();
    }
}
