#include <stdio.h>

int main(void) {
    // This is a comment
    /* This is also
      a comment */

    printf("Hello world!\n");
    printf("This is also a new line!\n");

    /*
    * declarations
    * ------------
    * type_name var_name;
    *
    * a type is a property that describes a range of values and allowed
    * operations on these values. An instance of a type is an object or a data
    * object.
    */

    // some sample declarations of built-in types in C
    // int my_int;
    // char my_char;
    // float my_float;
    // double my_double;

    // chars

    // this is an uninitialized char
    char char_1;

    printf("The value of uninitialized char_1 is:\t");
    printf("%c\n", char_1);

    char_1 = 'a';

    printf("The value of  char_1 after assignment is is:\t");
    printf("%c\n", char_1);

    // chars are also integral types, and can be assigned using their
    // corresponding integer value in the relevant character set

    char_1 = 98;
    printf("The value of  char_1 after assignment to 98 is is:\t");
    printf("char formatting:%c\tdecimalformatting:%d\n", char_1, char_1);

    size_t char_size = sizeof(char_1);
    printf("The size of my char_1 object is %zu byte(s).\n", char_size);

    // integer types
    // decimal representation
    int int_1;
    int_1 = 10;

    // octal representation
    int int_2;
    int_2 = 012;

    // hexadecimal representation
    int int_3;
    int_3 = 0xA;

    printf("Decimal: %d\t Octal: %o\t Hexadecimal: %X\n", int_1, int_1, int_3);

    // unsigned ints
    unsigned int int_4 = -1U;
    printf("Decimal unsigned int -1: %u\n", int_4);
    printf("Size of unsigned int: %zu bytes\n", sizeof(int_4));

    short short_1 = 32;
    printf("Decimal short: %u\n", short_1);
    printf("Size of short: %zu bytes\n", sizeof(short_1));

    int x = 1;
    short y = 2;
    long z = 3L;
    printf("The size of an short: %zu bytes\n", sizeof(y));
    printf("The size of an int: %zu bytes\n", sizeof(x));
    printf("The size of an long: %zu bytes\n", sizeof(z));

    // floating point types
    float float_1 = 123.45F;
    printf("The size of a float: %zu bytes\n", sizeof(float_1));

    double double_1 = 789.1234;
    printf("The size of a double: %zu bytes\n", sizeof(double_1));

    printf("Done! Returning 0 and exiting!\n");
    return 0;
}
