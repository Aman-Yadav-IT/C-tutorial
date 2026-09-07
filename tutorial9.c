#include <stdio.h>
#define PI 3.14159
int main()
{
 int a = 75;
 float b = 15.555555;
//   const float b = 15.555555;
// //    b=9.7777;   will not work since we used const keyword to declare b as a constant variable
//    PI = 4.3943;  will not work since we used #define to declare PI as a constant variable
printf("the value of PI is the backslash is \\n = %f\n", PI);    
printf("the value of a is = %d\n", a);
printf("my name is : \t\t\tJohn Doe");
printf("the value of b is = %f\n", b);
printf ("there is error \a");
/*this is a multi line comment 
wher we can save my throughts */
    
    // printf("%23.4f" , b);
    // const mean that the value of the variable cannot be changed after it is initialized.
    // #define in simple word mean that we can define a constant value which cannot be changed in the program.
    // differnce between const and #define is that const is a keyword in C which is used to declare a constant variable and #define is a preprocessor directive which is used to define a constant value.
    

    










}


