package encapsulation;


public class test2 {
    public static void method(short s) {  
        System.out.println("short");
    }
    
    public static void method(byte b) {  
        System.out.println("byte");
    }
    
    public static void method(int i) {  
        System.out.println("int");
    }
    
    public static void method(long l) {  
        System.out.println("long");
    }

    public static void main(String[] args) {
        for (int i = 0; i < 5; i++) {
    System.out.println(i);
    if (i < 3) {
        continue;
    } else {
        for (int j = 0; j < 5; j++) {
            System.out.println(j);
        }
    }        
}
    }
}
