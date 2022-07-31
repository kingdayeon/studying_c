//Q3
#include <stdio.h> //Include a ‘stdio.h’ file to my code
#include <stdlib.h>//Include a ‘stdlib.h’ file to my code

int main(void) { //create a main function
  int num, n; //declare a variable of integer
  
  int * ptr1 = (int* )malloc (n * sizeof(int)); //using malloc
  printf("Enter integer value: "); //printf function
  scanf("%d",&ptr1[0]); //store the input value

  char * ptr2 = (char* )malloc (n * sizeof(char)); //using malloc
  printf("Enter character value: ");
  scanf(" %c",&ptr2[0]); 

  float * ptr3 = (float* )malloc (n * sizeof(float)); //using malloc
  printf("Enter float value: ");
  scanf(" %f",&ptr3[0]);

  printf("Inputted value are: %d, %c, %.2f \n",ptr1[0],ptr2[0],ptr3[0]); //print all the inputted values

  free(ptr1); //deallocate the allocated memory
  free(ptr2); //deallocate the allocated memory
  free(ptr3); //deallocate the allocated memory
  
  return 0; //way to exit the function
}
