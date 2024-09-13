How can we initialize the static variables?

One way to initialize the static variable is to initialize at the time of declaration as shown below

private static float deliveryCharge = 1.5f; 
This is fine if you have to directly initialize a value but this would not work if you need to perform some computation and then initialize the value of a static member variable. 

### In that case, Java provides one more type of static member called static block.





## What happens if you try to access the deliveryCharge in setDeliveryCharge() method with the help of this?

public static void setDeliveryCharge(float deliveryCharge) {
	// Which object's deliveryCharge?
	this.deliveryCharge = deliveryCharge; // This line will throw error 
	}
Static blocks and static methods cannot access non-static (instance) members directly since static methods do not belong to any object, so it is not possible to know which object's instance variables should be accessed. Trying to do so will result in a compilation error.

However, non-static methods can access static members.




So far, we have been dealing with classes and objects which don’t interact with other classes, but in real life, objects interact with objects of other classes. Let us look at an example: 



## Here, Student and Hostel both are separate classes having their own existence. They both are related to each other as a Student 'lives in' a Hostel. 

Below are some other examples that show how different classes may be related to each other: 

Employee drinks Coffee 
Customer buys a Phone 
College has a Department 
Car has a Wheel 
In OOP, two classes can communicate with each other using their objects. An object may communicate with another object to use the functionalities provided by the other object. This is very helpful if we want to reuse the members of a class in another. Some of the types of relationships in Java are: 

Aggregation 
Association 
Inheritance 
You will now be looking at these relationships in detail.