//Q3
#include <stdio.h>//Include a ‘stdio.h’ file to my code

void swap(int*, int*); //declare a function

int main(void) { //create a main function

  int num1, num2;//declare a variable of integer 

  printf("Enter any two numbers: "); //printf function
  scanf("%d %d",&num1, &num2); //store the input value
  printf("Before swapping in main nValue of num1 = %d \n",num1); //printf function
  printf("Value of num2 = %d \n",num2);

  swap(&num1, &num2); //call function to swap

  printf("\nAfter swapping in main nValue of num1 = %d \n",num1);//printf function
  printf("Value of num2 = %d \n",num2);


  printf("\n");
  
  return 0; //way to exit the function
}

void swap(int*a, int*b){ //a function to swap
  int temp;
  
  temp = *a; //swapping
  *a = *b;
  *b = temp;

  printf("\nAfter swapping in swap function nValue of num1 = %d \n",*a); //printf function
  printf("Value of num2 = %d \n",*b);
}
