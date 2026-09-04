#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    int subject;
    printf("which subject you have pass maths science or both :\n");
    scanf("%19s",s);
printf("your subject is : %s\n",s);
// we use == for comparision operator and = for assignment operator example for == in simple word is equal to and = is used to assign a value to a variable
if (strcmp(s,"maths")==0)
{printf("you won a fidjet spinner\n");}
else if (strcmp(s,"science")==0)
{printf("you won a science prize\n");}
else if (strcmp(s,"both" )==0)
{printf("you won a medal \n");}

// printf("you are not eligible for any prize\n");}




}