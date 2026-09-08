#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    /* here char is used to declare a character array to store the input string 
    where s is a placeholder for the string */

    
    printf("which subject you have pass maths science or both :\n");
    scanf("%19s",s);
printf("your subject is : %s\n",s);
// we use == for comparision operator and = for assignment operator example for == in simple word is equal to and = is used to assign a value to a variable
if (strcmp(s,"maths")==0)
/* here strcmp is used to compare two strings */
/* What you wrote:if ( strcmp(s, "maths") == 0 )Step 1 (The computer solves the function):If the words match,
 the computer calculates that strcmp(s, "maths") equals 0.
 Step 2 (The computer substitutes the result):The computer drops that 0 right into the spot where the function used to be. */
{printf("you won a fidjet spinner\n");}
else if (strcmp(s,"science")==0)
{printf("you won a science prize\n");}
else if (strcmp(s,"both" )==0)
{printf("you won a medal \n");}

// printf("you are not eligible for any prize\n");}




}