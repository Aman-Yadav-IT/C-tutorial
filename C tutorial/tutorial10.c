#include <stdio.h>
int main()
{
  int age;
  printf("Enter your age :");

  scanf("%d",&age);
 printf("your age is : %d\n",age);
if (age>=18)
{
    printf("you are eligible for voting\n");

}
else if (age>=8 )
{
    printf("you are between 8 to 18 years you can vote for kids \n");
}
else {printf("you are not eligible for voting\n");}




















}
