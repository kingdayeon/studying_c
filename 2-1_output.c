#include<stdio.h> //Include a ‘stdio.h’ file to my code 

int main(void){ //create a main function

  char input_char; //declare a variable of character
  int input_int; //declare a variable of integer
  float input_float; //declare a variable of float
  
  printf("Enter input data(only 1 character): ");//print on the screen 
  scanf("%c", &input_char);//store the input value. we use %c to scan the character
  printf("output : %c\n\n",input_char);//print on the screen 

  
  printf("Enter input data(only integer value): ");//print on the screen 
  scanf("%d",&input_int);//store the input value
  
  printf("output as demical : %d\n",input_int);//print on the screen
  printf("output as octal : %o\n",input_int);//print on the screen. we use %o in printf to print octal.
  printf("output as hexademical : %x\n\n",input_int);//print on the screen we use %x in printf to print hexademical.

  printf("Enter input data(only floating point number): ");//print on the screen 
  scanf("%f", &input_float);//store the input value
  printf("output : %f\n",input_float);//print on the screen 
  printf("output as scientific notation : %e\n",input_float);//print on the screen. we use %e in printf to print scientific notation.
  
  return 0;//Way to exit the function
} 
