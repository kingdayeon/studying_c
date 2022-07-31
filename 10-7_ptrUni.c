//Q7
#include <stdio.h> //Include a ‘stdio.h’ file to my code

int main() //create a main function
{
  
typedef union //declare union
{
  int id;
}UNI_ID; 

typedef union //declare union
{
  float gpa;
}UNI_GPA;

UNI_ID *ptr; //declare a pointer
UNI_GPA *ptr2;

UNI_ID u1;
UNI_GPA u2;
  
u1.id = 1; //initialize union
u2.gpa = 2.9;

ptr=&u1; //initialize a pointer
ptr2=&u2;

printf("First Student ID =%d and GPA = %f \n",(*ptr).id,(*ptr2).gpa); //printf function using pointer

u1.id = 2; //initialize union
u2.gpa = 3.7;
  
ptr=&u1; //initialize a pointer
ptr2=&u2;
  
printf("Second Student ID =%d and GPA = %f ",(*ptr).id,(*ptr2).gpa); //printf function using pointer

  return 0; //way to exit the function
}
