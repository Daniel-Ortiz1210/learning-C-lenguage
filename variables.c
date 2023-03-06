#include <stdio.h>

int main() {
    int myAge = 21;
    char myFirstLetter = 'D';
    float myWeight = 79.2;

    // Printing a variable
    printf("%d\n", myAge);
    printf("%f\n", myWeight);
    printf("%c\n", myFirstLetter);

    // Combining variables with Text

    printf("My name is Daniel and my my name starts with %c character\n", myFirstLetter);

    printf("Hi, my name is Daniel and my weight is %f kilograms\n", myWeight);

    printf("Hi my name is Daniel and I am %i years old\n", myAge);

    // Using more than one variable with Text
    printf("Hi, my name is Daniel an I am %i years old, my name starts with %c, and my weight is %f kilograms\n", myAge, myFirstLetter, myWeight);

    // Adding up variables

    int x = 10;
    int y = 20;

    int z = x + y;

    printf("%i\n", z);

    // Declaring multiple variables

    int a, b, c, d;
    a = b = c = d = 70;
    printf("%i\n", a + b + c + d);

    int e = 20, f = 30, g = 40;
    printf("%i\n", e + f + g);


    return 0;
}