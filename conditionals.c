#include <stdbool.h>
#include <stdio.h>

int main() {
    int myAge = 21;

    if (myAge >= 18) {
        printf("You are an adult");
    } else if (myAge < 18 && myAge >= 0) {
        printf("You are not an adult");
    } else {
        printf("Edad no valida");
    }

    // Ternary Operator

    (myAge >= 18) ? printf("You are an adult!") : printf("You are not an adult!");

    return 0;
}