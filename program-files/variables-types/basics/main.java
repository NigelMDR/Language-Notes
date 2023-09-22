public class main {
    public static void main(String[] args) {
        // Initialize variables
        boolean flag = true;     // Boolean: true [non 0] or false [0].
        char letter = 'A';       // Single character.
        // Integers
        short sval = 32767;      // Smaller integer
        int ival = 2147483647;   // Integer number.
        long lval = 0x7ffffff;   // bigger integer.
        // Floating points
        float fval = 0.07f;      // Single precision float.
        double dval = 0.01;      // Double precision float
        // Auto
        var some_int = 13;       // Automatic type [int].
        var some_float = 13.0f;  // Automatic type [float].
        var some_double = 13.0;  // Automatic type [double].

        // Declare variables
        char name_0 = 'G', name_1 = 'N', name_2 = 'U';
        int year, month, day;
        // Initialize declare variables
        year = 2019;
        month = 3;
        day = 23;
        // print
        System.out.format("Bool: " + flag + '\n');
        System.out.format("Char: " + letter + '\n');
        System.out.format("Short: " + sval + '\n');
        System.out.format("Int: " + ival + '\n');
        System.out.format("Long: " + lval + '\n');
        System.out.format("Float: " + fval + '\n');
        System.out.format("Double: " + dval + '\n');
        System.out.format("Var int: " + some_int + '\n');
        System.out.format("Var float: " + some_float + '\n');
        System.out.format("Var double: " + some_double + '\n');
        System.out.format("Char: " + name_0 + name_1 + name_2 + '\n');
        System.out.format("Date: " + year + '/' + month + "/" + day + '\n');

    }

}