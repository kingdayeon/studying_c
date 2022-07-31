#include <stdio.h> //Include a ‘stdio.h’ file to my code

int main(void) { //create a main function

  int i, num; //initialize variables 
  
  printf("Print all even numbers till: "); //printf function
  scanf("%d",&num); //store the input value of integer
  printf("All even numbers from 1 to %d are: \n",num);
  //printf function
  
  for (i = 2 ; i <= num ; i = i+2){ //for loop,i should be added 2 to print even numbers
    printf("%d\n",i);
    
  }
  
  return 0; //way to exit the function
}
