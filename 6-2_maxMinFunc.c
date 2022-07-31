#include <stdio.h>//Include a ‘stdio.h’ file to my code

int max(int,int); //function declarations
int min(int,int); //function declarations

int main(void) { //create a main function

  int num1, num2; //declaring
  
  printf("Enter two numbers: "); //printf function
  scanf("%d %d",&num1, &num2); //store the input value of integer
  printf("\n"); //printf function
  printf("Maximum = %d \n",max(num1,num2)); //printf function with a function call
  printf("Minimum = %d",min(num1,num2));
//printf function with a function call
  return 0; //way to exit the function
}

int max(int a, int b){ //function definition
  int maxnum = a>b? a:b; //Conditional Expressions
  return maxnum;
}

int min(int a, int b){ //function definition
  int minnum = a<b? a:b; //Conditional Expressions
  return minnum;
}
