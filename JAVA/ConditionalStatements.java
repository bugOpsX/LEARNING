/**
 * 🎯 Conditional Statements in Java
 * 
 * Demonstrates the usage of:
 * 1. if
 * 2. if-else
 * 3. if-else-if ladder
 * 4. nested if
 * 5. switch-case
 * 
 * Includes multiple test cases and real-world logic.
 */

import java.util.Scanner;

public class ConditionalStatements {

    // Method 1: Simple if statement example
    public static void checkVotingEligibility(int age) {
        if (age >= 18) {
            System.out.println("✅ You are eligible to vote.");
        }
    }

    // Method 2: if-else statement example
    public static void checkEvenOdd(int number) {
        if (number % 2 == 0) {
            System.out.println("🔢 " + number + " is Even.");
        } else {
            System.out.println("🔢 " + number + " is Odd.");
        }
    }

    // Method 3: if-else-if ladder example
    public static void displayGrade(int marks) {
        if (marks >= 90) {
            System.out.println("🎓 Grade: A+");
        } else if (marks >= 75) {
            System.out.println("🎓 Grade: A");
        } else if (marks >= 60) {
            System.out.println("🎓 Grade: B");
        } else if (marks >= 40) {
            System.out.println("🎓 Grade: C");
        } else {
            System.out.println("❌ Failed");
        }
    }

    // Method 4: Nested if statement example
    public static void verifyEntry(int age, boolean hasID) {
        if (age >= 18) {
            if (hasID) {
                System.out.println("🎫 Access Granted - ID Verified!");
            } else {
                System.out.println("🚫 Access Denied - ID Required!");
            }
        } else {
            System.out.println("🚷 Access Denied - Underage!");
        }
    }

    // Method 5: switch-case statement example
    public static void displayDayName(int day) {
        switch (day) {
            case 1:
                System.out.println("📅 Monday");
                break;
            case 2:
                System.out.println("📅 Tuesday");
                break;
            case 3:
                System.out.println("📅 Wednesday");
                break;
            case 4:
                System.out.println("📅 Thursday");
                break;
            case 5:
                System.out.println("📅 Friday");
                break;
            case 6:
                System.out.println("📅 Saturday");
                break;
            case 7:
                System.out.println("📅 Sunday");
                break;
            default:
                System.out.println("❓ Invalid day number!");
        }
    }

    // 🧪 Test Runner
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("=== 🧠 Conditional Statements Demo ===\n");

        // Test 1: Simple if
        System.out.print("Enter your age: ");
        int age = sc.nextInt();
        checkVotingEligibility(age);

        // Test 2: if-else
        System.out.print("\nEnter a number to check Even/Odd: ");
        int num = sc.nextInt();
        checkEvenOdd(num);

        // Test 3: if-else-if
        System.out.print("\nEnter marks to get grade: ");
        int marks = sc.nextInt();
        displayGrade(marks);

        // Test 4: nested if
        System.out.print("\nEnter your age for entry check: ");
        int entryAge = sc.nextInt();
        System.out.print("Do you have an ID? (true/false): ");
        boolean hasID = sc.nextBoolean();
        verifyEntry(entryAge, hasID);

        // Test 5: switch
        System.out.print("\nEnter a day number (1-7): ");
        int day = sc.nextInt();
        displayDayName(day);

        sc.close();
    }
}
