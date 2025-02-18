#include <stdio.h>

int main() {
    int number, result;
    
    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Add 10 to the entered number
    result = number + 10;
    
    // Display the result
    printf("Result after adding 10: %d\n", result);
    
    return  0;
}
