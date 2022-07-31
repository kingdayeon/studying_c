#include <stdio.h> //Include a ‘stdio.h’ file to my code

int main(void) {//create a main function

  char o; //operater
  float num1, num2; //declare variables of float

  printf("SIMPLE CALCULATOR\n"); //printf function
  printf("Enter [number 1] [+ - * /] [number 2]\n"); //printf function
  scanf("%f %c %f",&num1,&o,&num2); //store the input value of float and character

  switch (o) { //using switch...case statement
    case '+': // In the case of +
    printf("%.2f %c %.2f = %.2f",num1,o,num2,num1+num2); //print + calculator on the screen 
    break; //way to get out of this case
  
   case '-':// In the case of -
    printf("%.2f %c %.2f = %.2f",num1,o,num2,num1-num2);//print - calculator on the screen 
    break;//way to get out of this case
  
  case '*':// In the case of *
    printf("%.2f %c %.2f = %.2f",num1,o,num2,num1*num2);//print * calculator on the screen 
    break;//way to get out of this case
  
  case '/':// In the case of /
    printf("%.2f %c %.2f = %.2f",num1,o,num2,num1/num2);//print / calculator on the screen 
    break;//way to get out of this case
  
  } 
  return 0; //way to exit the function
}
