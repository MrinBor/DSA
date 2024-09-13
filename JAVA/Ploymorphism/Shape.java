import java.util.Scanner;

class PolyMorph {
    float radius;
    float length;
    float breadth;

    public float CalculateArea(float length, float breadth) {
        return length * breadth;
    }

    public float CalculateArea(float length, float breadth, float radius) {
        return length * breadth * radius;
    }
}

public class Shape {
    public static void main(String[] args) {
        PolyMorph p = new PolyMorph();
        float res1 = p.CalculateArea(1.2f, 2.1f);
        float res2 = p.CalculateArea(1.2f, 1.4f, 1.6f);

        System.out.println("Polymorph Area 1 -->> " + res1);
        System.out.println("Polymorph Area 2 -->> " + res2);
    }
}
