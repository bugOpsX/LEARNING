import java.util.Scanner;

class Student {
    // Attributes
    private String name;
    private int rollNumber;
    private double[] marks; // Array to hold marks for multiple subjects

    // Method to input student details
    public void inputDetails() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter student name: ");
        name = scanner.nextLine();

        System.out.print("Enter roll number: ");
        rollNumber = scanner.nextInt();

        System.out.print("Enter number of subjects: ");
        int numSubjects = scanner.nextInt();
        marks = new double[numSubjects];

        // Taking marks input
        for (int i = 0; i < numSubjects; i++) {
            System.out.print("Enter marks for subject " + (i + 1) + ": ");
            marks[i] = scanner.nextDouble();
        }
    }

    // Method to calculate average marks
    public double calculateAverage() {
        double sum = 0;
        for (double mark : marks) {
            sum += mark;
        }
        return marks.length > 0 ? sum / marks.length : 0;
    }

    // Method to display student details
    public void displayDetails() {
        System.out.println("\n=== Student Details ===");
        System.out.println("Name: " + name);
        System.out.println("Roll Number: " + rollNumber);
        System.out.println("Marks:");
        for (int i = 0; i < marks.length; i++) {
            System.out.println("  Subject " + (i + 1) + ": " + marks[i]);
        }
        System.out.println("Average Marks: " + calculateAverage());
    }
}

// Main class
public class StudentClassImplementation {
    public static void main(String[] args) {
        Student student = new Student();

        // Input, compute, and display
        student.inputDetails();
        student.displayDetails();
    }
}
