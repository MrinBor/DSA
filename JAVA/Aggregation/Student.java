import java.util.*;

class Subject {
    private String subjectName;

    Subject(String subjectName) {
        this.subjectName = subjectName;
    }

    // Getter method for subjectName
    public String getSubjectName() {
        return subjectName;
    }
}

class Student {
    private int rollNo;
    private String studentName;
    private Subject subject;

    Student(int rollNo, String studentName, Subject subject) {
        this.rollNo = rollNo;
        this.studentName = studentName;
        this.subject = subject;
    }

    public void displayDetails() {
        System.out.println("Student Name: " + studentName);
        // Use the getter method to access the subject name
        System.out.println("Subject Name: " + subject.getSubjectName());
    }

    public static void main(String args[]) {
        Subject subject = new Subject("Maths");
        Student student = new Student(101, "Nate", subject);
        student.displayDetails();
    }
}
