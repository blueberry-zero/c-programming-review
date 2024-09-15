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

  printf("Done! Returning 0 and exiting\n!");
  return 0;
}
