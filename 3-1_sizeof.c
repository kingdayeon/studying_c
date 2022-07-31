#include <stdio.h>//Include a ‘stdio.h’ file to my code 

int main(void) {//create a main function

  int num1 = 1; ; //declare a variable of integer
  long num2 = 2; //declare a variable of long
  long long num3 = 3; //declare a variable of long long
  double num4 = 4.428; //declare a variable of double
  long double num5 = 4.42343424; //declare a variable of long double

  printf("Demonstrate the working of keyword long\n"); //printf function
  printf("-----------------------------------------\n");//printf function
  printf("The size of int = %d bytes\n",sizeof(num1)); //print on the screen using sizeof() operator
  printf("The size of long = %d bytes\n",sizeof(num2)); //print on the screen using sizeof() operator
  printf("The size of long long = %d bytes\n",sizeof(num3)); //print on the screen using sizeof() operator
  printf("The size of double = %d bytes\n",sizeof(num4)); //print on the screen using sizeof() operator
  printf("The size of long double = %d bytes\n\n",sizeof(num5)); //print on the screen using sizeof() operator
  
  return 0; //way to exit the function

}
