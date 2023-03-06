#include <stdio.h>

int main() {

    int numerOne = 10;
    float numberTwo = 1.1234567;
    double numberThree = 2.134567487;
    char myFirstLetter = 'A';

    // Printing variables

    printf("%i\n", numerOne);
    printf("%f\n", numberTwo);
    printf("%lf\n", numberThree);
    printf("%c\n", myFirstLetter);

    // Printing variables with more decimals

    printf("%.5lf\n", numberThree);
    printf("%f.1\n", numberTwo);

    return 0;

    
}