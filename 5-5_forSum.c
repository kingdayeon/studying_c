#include <stdio.h> //Include a ‘stdio.h’ file to my code

int main(void) { //create a main function

  int i, num, sum=0; //initialize variables and I declared sum
  
  printf("Enter upper limit: "); //printf function
  scanf("%d",&num); //store the input value of integer
  
  for (i = 2 ; i <= num ; i = i+2){ //for loop
    sum += i; //store the value of sum adding i which is added 2 until reaching num
  }

  printf("Sum of all even number between 1 to %d = %d",num,sum); //printf function
  
  return 0; //way to exit the function
}
