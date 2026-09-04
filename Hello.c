
#include <stdio.h>
int main()
 {
   printf("Hello, World!\n");
// flow of c program is preprocessing, compilation, assmenbly linking and loading.
// variables mean a name given to memory location that stores data which can be changed during program execution.
// rules for defining variables in C:
// 1. Variable name should start with a letter or underscore.
// 2. Variable name can contain letters, digits and underscores.    
// 3. Variable name should not be a keyword. example:  float, char, long etc.            
// 4. Variable name should not contain any special characters like @, $, %, etc.              
// 5. Variable name should not contain any spaces.
// 6. Variable name should not be a reserved word in C language. example: int, return, if, else etc.              
//can not start with a digit. example: 1variable, 2variable etc.                                                   
                                                                                                                
// data types in C: there area 4 types of data types in c language basic data types, derived data types, enumeration data types and void data type.

//basic data types in c are int, float, char and double.

// 1. int: used to store integer values. example: int a = 10;
// 2. float: used to store decimal values. example: float b = 10.5;
// 3. char: used to store single character values. example: char c = 'A';
// 4. double: used to store double precision decimal values. example: double d = 10.5;
// defference in floar and double is float takes 4 bytes of memory and double takes 8 bytes of memory.

//derived data types in c are array, pointer, structure and union.

//array: used to store multiple values of same data type. example: int arr[5] = {1, 2, 3, 4, 5};
// array in simple words is a collection of similar types of data items stored in contiguous memory locations. example: int arr[5] = {1, 2, 3, 4, 5}; here arr is an array of integers which can store 5 integer values.
// pointer: used to store the address of a variable. example: int *ptr = &a; here ptr is a pointer variable which stores the address of variable a.
//we use $ to declare a pointer variable. example: int *ptr; here ptr is a pointer variable which can store the address of an integer variable.
//structure: used to store multiple values of different data types. example: struct student { int roll_no; char name[20]; float marks; }; here student is a structure which can store roll number, name and marks of a student.
//union: used to store multiple values of different data types but only one value can be stored at a time. example: union data { int i; float f; char str[20]; }; here data is a union which can store either an integer, a float or a string but only one value can be stored at a time.

//enuumeration data types 

// emumeration data types in c are used to define a set of named integer constants. example: enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday }; here week is an enumeration which can store the days of the week as integer constants starting from 0 for Sunday to 6 for Saturday.

// voide data type 

//void data type in c is used to indicate that a function does not return any value. example: void display() { printf("Hello, World!\n"); } here display is a function which does not return any value.

// printf() function in C is used to print the output on the screen. example: printf("Hello, World!\n"); here printf() function is used to print "Hello, World!" on the screen.
// scanf() function in C is used to take input from the user. example: scanf("%d", &a); here scanf() function is used to take an integer input from the user and store it in variable a.
// sizeof() operator in C is used to determine the size of a data type or variable in bytes. example: sizeof(int) will return 4 bytes on most systems, sizeof(float) will return 4 bytes, sizeof(double) will return 8 bytes, and sizeof(char) will return 1 byte.

    int a , b; 
    a = 75;
    b = 15;

   printf("a+b = %d\n", a+b);
   printf("a-b = %d\n", a-b);
   printf("a*b = %d\n", a*b);
   printf("a/b = %d\n", a/b);

  
   

   
    


   
 }