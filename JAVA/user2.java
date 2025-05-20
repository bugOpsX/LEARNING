public class user2 {
    public static void main(String[] args) {

        String[] name = { "Sumant", "Rajesh", "Abhishek", "Rohit" };
        int[] exp = { 3, 0, 6, 9 };
        int[] score = { 78, 45, 97, 80 };
        String[] roles = { "Developer", "Intern", "Pro Developer", "Manager" };

        for (int i = 0; i < name.length; i++) {
            System.out.println(roles[i] + ": " + name[i]);
            System.out.println(roles[i] + "'s Experience: " + exp[i] + " years");
            System.out.println("Working Score of " + roles[i] + ": " + score[i]);
            System.out.println("-----------------------------------");
        }
    }
}
