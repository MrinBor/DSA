import java.util.*;
import java.util.Scanner;


public class Restaurant {
    private String restaurantName;
    private long[] restaurantContacts;
    private String restaurantAddress;
    private float rating;
    private static float deliveryCharge = 1.5f;

    public Restaurant(String name, long[] contacts, String address, float rating) {
        this.restaurantName = name;
        this.restaurantContacts = contacts;
        this.restaurantAddress = address;
        this.rating = rating;
    }

    public void displayRestaurantDetails() {
        System.out.println("Restaurant Details \n***************");
        System.out.println("Restaurant Name : " + this.restaurantName);
        System.out.println("Restaurant Rating : " + this.rating);
        for (int index = 0; index < this.restaurantContacts.length; index++) {
            System.out.println("Restaurant Contacts : " + this.restaurantContacts[index]);
        }
        System.out.println("Restaurant Address : " + this.restaurantAddress);
        System.out.println();
    }

    public String getRestaurantName() {
        return restaurantName;
    }

    public void setRestaurantName(String restaurantName) {
        this.restaurantName = restaurantName;
    }

    public long[] getRestaurantContacts() {
        return restaurantContacts;
    }

    public void setRestaurantContacts(long[] restaurantContacts) {
        this.restaurantContacts = restaurantContacts;
    }

    public String getRestaurantAddress() {
        return restaurantAddress;
    }

    public void setRestaurantAddress(String restaurantAddress) {
        this.restaurantAddress = restaurantAddress;
    }

    public float getRating() {
        return rating;
    }

    public void setRating(float rating) {
        this.rating = rating;
    }

    public static void main(String[] args) {
        long[] contacts = { 1234567890L, 9876543210L };
        Restaurant r = new Restaurant("The Food Place", contacts, "123 Food Street, Flavor Town", 4.5f);
        r.displayRestaurantDetails();

        System.out.println(deliveryCharge);
    }
}


/**
 * 
 * How can we initialize the static variables?
 * 
 * One way to initialize the static variable is to initialize at the time of
 * declaration as shown below
 * 
 * private static float deliveryCharge = 1.5f;
 * This is fine if you have to directly initialize a value but this would not
 * work if you need to perform some computation and then initialize the value of
 * a static member variable.
 * 
 * In that case, Java provides one more type of static member called static
 * block.
 */


 /**
  * Static blocks get executed only once when a class gets loaded in memory. If
  * there are multiple static blocks, they will be executed in the order of their
  * occurrence.
  * 
  * After implementing static variable and static block, the Customer class looks
  * as shown below.
  */