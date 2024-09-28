#include <stdio.h>

int main(void) {

  /*
   * operaters
   */

  // basic mathematical operators
  int x = 10;
  int y = x + 1;
  int z = x - 1;
  int u = y * z;
  int v = 10 / x;
  int w = 10 % 2;
  // integral division vs floating point division
  int a = x / y;
  double b = (double)x / y;

  // assignment operators
  x = 4;
  x += 1;
  x -= 1;
  x *= 2;
  x /= 2;
  x++;
  x--;

  // relational operators
  x = 5;
  y = 4;

  int is_eq = x == y;
  int is_neq = x != y;
  int is_gt = x > y;
  int is_lt = x < y;
  int is_gteq = x >= y;
  int is_lteq = x <= y;

  // logical operators
  x = 1;
  y = 0;
  int log_and = x && y;
  int log_not = !x;
  int log_or = x || y;

  // type cast
  char char_a = 'a';
  int int_a = (int)char_a;

  x = 1;

  // control flow
  if (x == 1) {
    printf("x is equal to %d\n", x);
  } else if (x < 2) {
    printf("x is less than 2\n");
  } else {
    printf("x is not 1 or less than 2\n");
  }

  // switch statement
  switch (x) {
  case 1:
    printf("x is equal to %d\n", x);
  default:
    printf("in default switch state\n");
  }

  // iteration tools
  x = 10;

  while (x > 0) {
    printf("The value of x in my while loop is %d\n", x--);
  }

  for (; x < 10; x++) {
    printf("The value of x in my for loop is %d\n", x);
  }

  return 0;
}
