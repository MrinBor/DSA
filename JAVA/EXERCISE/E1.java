import java.util.*;

class Point {
    private double x, y;

    // Constructor to initialize with double coordinates
    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    // Constructor to initialize with integer coordinates
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    // Calculate distance from origin
    int calculateDistance() {
        return (int) Math.round(Math.sqrt(x * x + y * y));
    }

    // Calculate distance from another point
    int calculateDistance(Point p) {
        double dx = this.x - p.x;
        double dy = this.y - p.y;
        return (int) Math.round(Math.sqrt(dx * dx + dy * dy));
    }

    // Getter methods (if needed)
    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    // Setter methods (if needed)
    public void setX(double x) {
        this.x = x;
    }

    public void setY(double y) {
        this.y = y;
    }
}

class E1 
{
    public static void main(String[] args) {
        // Create Point objects
        Point point1 = new Point(3.5, 1.5);
        Point point2 = new Point(6, 4);

        // Calculate distances and print
        System.out.println("Distance of point1 from origin is " + point1.calculateDistance());
        System.out.println("Distance of point2 from origin is " + point2.calculateDistance());
        System.out.println("Distance of point1 from point2 is " + point1.calculateDistance(point2));

        // Create more objects for testing your code
    }
}
