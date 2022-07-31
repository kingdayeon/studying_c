//Q1
#include <stdio.h> //Include a ‘stdio.h’ file to my code 

int main(void) { //create a main function
  
  typedef struct person{ //declare structure
    char name[20];
    int id;
    float salary;
  }PER;

  PER s1 = {"Henry",1112,95743};//initialize structure

  printf("\n");
  printf("Name: %s\n",s1.name); //printf function 
  printf("Id: %d\n",s1.id);
  printf("Salary: %f\n",s1.salary);
  
  
  return 0; //way to exit the function
}
