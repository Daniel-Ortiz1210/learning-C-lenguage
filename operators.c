#include <stdio.h>

int main() {

    // Arithmetic Operators

    int x = 10;
    int y = 15;

    int sum = x + y;

    printf("%i\n", sum);

    int a = 5;
    int b = 10;

    int minus = b - a;

    printf("%i\n", minus);

    int c = 20;
    int d = 30;

    int multiplication = c * d;

    printf("%i\n", multiplication);

    int e = 10;
    int f = 5;

    int division = (int) e / f;

    printf("%i\n", division);

    int g = 20;
    g += 5;

    printf("%i\n", g);

    int h = 30;
    h -= 25;

    printf("%i\n", h);


    // Logic and Comparation Operators

    int i = 5;
    int j = 6;

    printf("%d\n", (i < j && j > i));

    int k = 10;
    int l = 12;

    printf("%d\n", (l > k || k > l));

    printf("%d\n", (k == l));

    printf("%d\n", !(l > k));

    // Sizeof

    int myAge;
    float pi;
    char n;

    printf("%lu\n", sizeof(myAge));
    printf("%lu\n", sizeof(pi));
    printf("%lu\n", sizeof(d));

    /*
    Note that we use the %lu format specifer to print the result, instead of %d. 
    It is because the compiler expects the sizeof operator to return a long unsigned int (%lu), 
    instead of int (%d). On some computers it might work with %d, but it is safer to use %lu.
    */

}