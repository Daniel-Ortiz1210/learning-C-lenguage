#include <stdio.h>

int main() {

    // Implicit conversion
    int x = 12;
    int y = 7;
    int result = x / y;

    printf("%i\n", result);

    float float_result = x / y;

    printf("%f\n", float_result); 


    // Explicit conversion

    float_result = (float) x / y;

    printf("%f\n", float_result);
    printf("%.1f\n", float_result);

    return 0;
}