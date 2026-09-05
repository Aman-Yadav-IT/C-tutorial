#include <stdio.h>
int main()
{
    int i,j;


    for (i=0, j=0; i<20 || j<20; i++, j++)
    // in expression2 the complier wiil give prority to the last expression and will check the condition of j<20 first then i<10
    {
        printf("%d %d\n",i,j);


    }







}