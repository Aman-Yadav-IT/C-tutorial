#include <stdio.h>
int main()
{int subject;
  printf("which subject you have pass maths science or both :\n");
    scanf("%d",&subject);
    printf("your subject is : %d\n",subject);
    if (subject==1)
    {printf("you won a fidjet spinner\n");}
    else if (subject==2)    
    printf("you won a science prize\n");
    else if (subject==3)
    printf("you won a medal \n");
    else
    printf("you are not eligible for any prize\n");}
