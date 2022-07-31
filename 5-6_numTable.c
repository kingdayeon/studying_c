#include <stdio.h> //Include a ‘stdio.h’ file to my code

int main(void) { //create a main function

  int num, right; //initialize variables
  
  printf("Enter number to print table: "); //printf function
  scanf("%d",&num); //store the input value of integer
  
  for (right=1 ; right <= 10 ; right++){ //for loop
    printf("%d * %d = %d \n",num,right,num*right);
  } //print multiplication table
  
  return 0; //way to exit the function
}
