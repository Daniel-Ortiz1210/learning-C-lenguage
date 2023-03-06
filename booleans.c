#include <stdbool.h>
#include <stdio.h>

int main() {
    bool isMarch = true;
    bool isWinter = false;
    
    // 
    printf("%i\n", isMarch);
    printf("%i\n", isWinter);

    if (isMarch) {
        printf("Is March");
    } else {
        printf("Is Not March");
    }
    
    return 0;
}