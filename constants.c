#include <stdio.h>

int main() {

    const int MYAGE = 21;
    const float PI = 3.1416;

    // This will cause an error...

    // MYAGE = 33;

    printf("%i\n", MYAGE);
    printf("%.4f\n", PI);

    return 0;
}