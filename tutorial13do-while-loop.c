#include <stdio.h>

int main()
{
    int num, index = 0; // Creates 'num' for user input, and 'index' to count from 0

    printf("Enter a number: \n");
    scanf("%d", &num); // Saves the user's input limit the value of num (e.g., 5)

    // 🔄 DO-WHILE LOOP: Runs the code first, checks the condition later
    do
    {
        printf("%d\n", index + 1); // Prints (index + 1) so counting starts visually at 1 like 0+1 then 2 then 3 until index become less than num 
        index++;                   // Adds 1 to the counter so the loop moves forward

    } while (index < num); // Checkpoint: Jumps back up to 'do' ONLY if index is smaller than num. 
 return 0;
}
