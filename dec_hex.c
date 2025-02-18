#include <stdio.h>

int main() {
    int number;
    
    // Ask the user for input
    printf("Enter a decimal number: ");
    scanf("%d", &number);
    
    // Display the number in hexadecimal format
    printf("Hexadecimal representation: %X\n", number);
    
    return 0;
}
