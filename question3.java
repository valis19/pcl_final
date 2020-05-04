import java.util.*;

class RecursiveDescentPaser {
    static int ptr;
    static char[] input;
    public static void main(String[] args) {
        System.out.println("Enter the input string:");
        String s = new Scanner(System.in).nextLine();
        input = s.toCharArray();
        if (input.length<2) {
            System.out.println("The input string is invalid");
            System.exit(0);
        }
        ptr = 0;
        boolean isValid = Valid();
        if ((isValid) & (ptr == input.length)) {
            System.out.println("The input string is valid");
        } else {
            System.out.println("The input string is invalid");
        }
    }
    
    static boolean Valid() {
        int n = ptr;
        if(input[ptr++] != 'x') {
            ptr = n;
            return false;
        }
        if(input[ptr++] != '+') {
            ptr = n;
            return false;
        }
        if(otherValid() == false) {
            ptr = n;
            return false;
        }
        return true;
    }
    
    static boolean otherValid() {
        int m = ptr;
        if(input[ptr] == 'x') {
            ptr++;
            return true;
        } else {
            if(input[ptr++] != "(") {
                ptr = m;
                return false;
            }
            if(Valid() == false) {
                ptr = m;
                return false;
            }
            if(input[ptr++] != ")") {
                ptr = m;
                return false;
            }
            return true;
        }
    }
}
