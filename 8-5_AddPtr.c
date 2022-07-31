//Q5
#include <stdio.h>//Include a ‘stdio.h’ file to my code

#define MAX_SIZE 100 
//define the maximum size

int main(void) { //create a main function

  int arr[MAX_SIZE]; //declare an array
  int size, i=0, j; //declaring variables and initializing i

  int * ptr = arr; //declare and initialize an pointer
  
  printf("Enter size of array: "); //printf function
  scanf("%d",&size);

  printf ("Enter elements in array: \n"); //printf function

  for(j = 0 ; j < size ; j++){ //for loop
    scanf("%d", &*(arr + i)); //store the input value to array
    i++;
  }

  printf("Array elements: "); //print array elements using pointers
  for(j = 0 ; j < i ; j++){ //for loop
    printf("%d, ", *ptr); //printf function
    
    ptr++; //point to the next
  }

  
    
  return 0; //way to exit the function
}
