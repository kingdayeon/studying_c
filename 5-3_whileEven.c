#include <stdio.h> //Include a ‘stdio.h’ file to my code

int main(void) { //create a main function

  int i=2, num; //initialize variables + I declared i
  
  printf("Print all even numbers till: "); //printf function
  scanf("%d",&num); //store the input value of integer
  printf("All even numbers from 1 to %d are: \n",num);
  //printf function
  
  while (i <= num){ //while loop
    printf("%d\n",i);

    i = i+2;//i should be added 2 to print even numbers
  }
  
  return 0; //way to exit the function
}
