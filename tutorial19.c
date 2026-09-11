#include <stdio.h>

// 1. Define the sum function OUTSIDE of main
int sum(int a, int b) {
    return a + b;
}

int main() { // 2. Open the main function here
    printf("hello world\n");
    
    /* your comments can go here */
    
    int a, b, c;
    a = 9;
    b = 87;
    
    // 3. Call the sum function
    c = sum(a, b); 
    
    printf("The sum is: %d\n", c);
    
    return 0;
} // 4. Close the main function here

