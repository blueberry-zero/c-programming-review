
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




    return 0;
}
