//Q6
#include <stdio.h> //Include a ‘stdio.h’ file to my code

int main() //create a main function
{
  
typedef struct str //declare structure
{
  int id;
  float gpa;
}STR;

STR *ptr; //declare a pointer
  
STR s1 = {1, 2.9}; //initialize structure
STR s2 = {2, 3.7};

ptr=&s1; //initialize a pointer
  
printf("Student1: ID =%d \n",(*ptr).id); //printf function using structure
printf("Student1: GPA =%f \n",(*ptr).gpa);

ptr=&s2; //initialize a pointer

printf("Student2: ID =%d \n",(*ptr).id);
printf("Student2: GPA =%f",(*ptr).gpa);
  
  
  return 0; //way to exit the function
}
