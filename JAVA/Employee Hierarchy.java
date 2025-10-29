// Parent class: Employee
class Employee {
    // Fields common to all employees
    private String name;
    private int id;
    private double salary;

    // Constructor
    public Employee(String name, int id, double salary) {
        this.name = name;
        this.id = id;
        this.salary = salary;
    }

    // Method to display employee details
    public void displayDetails() {
        System.out.println("Employee Name: " + name);
        System.out.println("Employee ID: " + id);
        System.out.println("Salary: $" + salary);
    }
}

// Child class: Manager (inherits from Employee)
class Manager extends Employee {
    // Additional field specific to Manager
    private String department;

    // Constructor
    public Manager(String name, int id, double salary, String department) {
        // Call parent class constructor using super()
        super(name, id, salary);
        this.department = department;
    }

    // Overriding displayDetails() to include department
    @Override
    public void displayDetails() {
        super.displayDetails();  // Display common details from Employee
        System.out.println("Department: " + department);
    }
}

// Main class to demonstrate inheritance
public class EmployeeHierarchy {
    public static void main(String[] args) {
        // Creating an Employee object
        Employee emp = new Employee("Alice Johnson", 101, 50000);
        System.out.println("=== Employee Details ===");
        emp.displayDetails();

        System.out.println("\n=== Manager Details ===");
        // Creating a Manager object
        Manager mgr = new Manager("Bob Williams", 102, 80000, "IT Department");
        mgr.displayDetails();
    }
}
