import java.util.ArrayList;
import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        int n;
        int prod=1;
        ArrayList<Integer> arr = new ArrayList<Integer>();
        Scanner kb = new Scanner(System.in);
        n = kb.nextInt(); 
        for (int i=0;i<n; i++) {
            arr.add(kb.nextInt());
        }
        for (int i=1; i<n; i++) {
            int p = arr.get(i-1) * arr.get(i);
            prod = Math.max(prod, p);
        }
        System.out.println(prod);
        kb.close();
    } 
}