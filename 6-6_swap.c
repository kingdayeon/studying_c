#include<stdio.h> //Include a ‘stdio.h’ file to my code

void Swap(int,int); //function declarations

int main(){ //create a main function
  int x, y; //declaring
  printf("Enter Value of x\n"); //printf function
  scanf(" %d",&x); //store the input value of integer
  printf("Enter Value of y\n"); //printf function
  scanf(" %d",&y); //store the input value of integer
  Swap(x, y);//function call
  
  
  return 0; //way to exit the function
}

void Swap(int a,int b){//function definition
  int c; //declaring
  c = a;
  a = b;
  b = c; //Swapping
  printf("After Swapping: x = %d, y = %d", a, b); //printf function
}
