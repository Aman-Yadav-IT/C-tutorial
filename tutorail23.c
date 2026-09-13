#include <stdio.h>

int main()
{
    // ARRAY: One variable name that holds multiple slots of the same data type.
    // PTR(point to remember): Counting always starts at 0, so 5 slots are numbered 0 to 4.

    int marks[5] = {95, 88, 76, 90, 82};
    for (int i=1 ; i<5 ; i++)
    printf("The slot %d store marks %d\n", i , marks[i]);
//  WHEN TO USE 'i' vs A FIXED NUMBER:
// • Use 'marks[i]' ONLY inside a loop! The loop changes 'i' into 0, 1, 2, 3, 4 automatically.
// • Use a fixed number like 'marks[0]' or 'marks[1]' if you don't have a loop and just want one specific slot.

    return 0;
}
