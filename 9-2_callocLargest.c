//Q2
#include <stdio.h> //Include a ‘stdio.h’ file to my code
#include <stdlib.h>//Include a ‘stdlib.h’ file to my code

int main(void) { //create a main function
  int num, n; //declare a variable of integer
  float * dynamic = (float*)calloc (n, sizeof(float)); //using calloc
  float max=0; //declare a variable of float
  
  printf("Enter the total number of elements: "); //printf function
  scanf("%d",&num); //store the input value of integer
  printf("Enter Number 1: ");//printf function
  scanf("%f", &dynamic[0]); //store the input value
  printf("Enter Number 2: ");
  scanf("%f", &dynamic[1]);
  printf("Enter Number 3: ");
  scanf("%f", &dynamic[2]);

  for(int i=0 ; i<num ; i++){ //finding largest number
    if(dynamic[i]>max) 
      max = dynamic[i];
  }

  printf("Largest number = %.2f", max);//printf function

  free(dynamic); //deallocate the allocated memory
  
  return 0; //way to exit the function
}
