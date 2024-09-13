class Point {
    private double x;
    private double y;

    // Constructor to initialize the point coordinates
    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    // Method to calculate distance from origin (0, 0)
    public double calculateDistance() {
        return Math.sqrt(x * x + y * y);
    }

    // Method to calculate distance from another point
    public double calculateDistance(Point otherPoint) {
        double deltaX = otherPoint.x - this.x;
        double deltaY = otherPoint.y - this.y;
        return Math.sqrt(deltaX * deltaX + deltaY * deltaY);
    }
}

class Tester {

    public static void main(String[] args) {
        Point point1 = new Point(3.5, 1.5);
        Point point2 = new Point(6, 4);

        System.out.println("Distance of point1 from origin is " + point1.calculateDistance());
        System.out.println("Distance of point2 from origin is " + point2.calculateDistance());
        System.out.println("Distance of point1 from point2 is " + point1.calculateDistance(point2));

        // Create more objects for testing your code
    }
}
