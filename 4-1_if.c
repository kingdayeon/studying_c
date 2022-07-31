#include <stdio.h> //Include a ‘stdio.h’ file to my code

int main(void) { //create a main function

  float num; //declare a variable of float
  
  printf("Enter any number: "); //printf function
  scanf("%f",&num); //store the input value of float
  if (num>0){ //using if...else statement to print whether the number is positive, negative or zero
    printf("Number is POSITIVE"); //printf function
  }

  else if (num<0){
    printf("Number is NEGATIVE"); //printf function
  }

  else {
    printf("Number is ZERO"); //printf function
  }
  
  return 0; //way to exit the function
}
