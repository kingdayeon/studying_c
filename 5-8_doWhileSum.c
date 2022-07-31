#include <stdio.h> //Include a ‘stdio.h’ file to my code

int main(void) { //create a main function

  int i=0;//initialize a variable
  float num, sum; //initialize variables
  
do{ //do-while loop
  printf("Enter a number: "); //printf function
  scanf("%f",&num); //store the input value of float

  sum += num;
  
  }while(num != 0); //When num becomes 0, stop it
  
  printf("Sum = %.2f",sum); //printf function

    
  return 0; //way to exit the function
}
