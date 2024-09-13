import java.util.Scanner;


//The way to initialize th estatic variables is as follows
/**
 * 
 */

 class Static_Block
{
    private static float deliveryCharge = 1.5f;
    //The declaration

    private static float DeliveryCharge = 1.0f;


    public Static_Block()
    {
        System.out.println("The Object is Invoked \n\n");
    }

    public void Display()
    {
        DeliveryCharge++;
        System.out.println(DeliveryCharge);
    }
}


public class Hello {
    public static void main(String args[]) {

        Static_Block st = new Static_Block();


        Scanner s = new Scanner(System.in);
        int a = s.nextInt();

        System.out.print("The value of a -->> " + a);

        for(int i=0;i<5;i++)
        {
            st.Display();
        }

        Static_Block st2 = new Static_Block();
        st2.Display();//The new object will haeve the same value as in the previous one
    }
}


/**
 * 
 * A static variable belongs to an entire class and not to a specific object.
 */