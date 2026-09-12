#include <stdio.h>
// This is called recursio:A function calling itself to solve a smaller version of the same problem.
// FUNCTION HEADER:
// [int] means it gives back a whole number answer.
// [factorial] is the name of our tool.
// [(int number)] is the input slot; it grabs the number we want to calculate.
int factorial(int number)
{

    // BASE CASE: If the number drops to 1 or 0, STOP the recursion and return 1.
    if (number == 1 || number == 0)
    {
        return 1;
    }
    // RECURSIVE STEP: Multiply the current number by the factorial of (number - 1).
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int num;
    printf("Enter the number you want factorail of:\n");
    scanf("%d", &num); // Takes the number you type and saves it in 'num'

       // WHAT THIS LINE DOES: Calls the function and prints the final answer.
    // HOW THEY LINK: 'factorial(num)' takes the value inside 'num' (like 5) 
    // and throws it up to the 'number' variable at the top. This connects them!
    printf("the factorial of %d is %d\n", num, factorial(num));

}
