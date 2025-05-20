
/*
 * Ek program banao jo user ka naam aur age store karke print kare.

Bonus: Ek array banao with 3 subject marks and unhe print karo.
 */

 public class user {
    public static void main(String[] args){
        String[] name = new String [4];
        name[0] = "Sumant";
        name[1] = "Rajesh";
        name[2] = "Abhishek";
        name[3] = "Rohit";
        System.out.println("Developer " + name[0]);
        System.out.println("Intern: " + name[1]);
        System.out.println("Pro Developer: " + name[2]);
        System.out.println("Manager: " + name[3]);

        int[] exp = new int[4];
        exp[0] = 3;
        exp[1] = 0;
        exp[2] = 6;
        exp[3] = 9;
        System.out.println("Manager's Experience: " + exp[0]);
        System.out.println("Intern's Experience: " + exp[1]);
        System.out.println("Pro Developer's Experience: " + exp[2]);
        System.out.println("Manager's Experience: " + exp[3]);

        int[] score = new int[4];
        score[0] = 78; 
        score[1] = 45;
        score[2] = 97;
        score[3] = 80;
        System.out.println("Working Score of Developer: " + score[0]);
        System.out.println("Working Score of Intern: "+ score[1]);
        System.out.println("Working Score of Pro Developer: " + score[2]);
        System.out.println("Working Score of Manager: " + score[3]);
    }
}