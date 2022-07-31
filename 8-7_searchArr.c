//Q7
#include <stdio.h>//Include a ‘stdio.h’ file to my code

#define MAX_SIZE 100 
//define the maximum size

int main(void) { //create a main function

  int arr[MAX_SIZE]; //declare an array
  int size, i=0, j, search; //declaring variables and initializing i

  int * ptr = arr; //declare and initialize an pointer
  
  printf("Enter size of array: "); //printf function
  scanf("%d",&size); //scanf function

  printf ("Enter elements in array: "); //printf function

  for(j = 0 ; j < size ; j++){ //for loop with pointer and index
    scanf("%d", &*(arr + i)); //store the input value to array 
    i++;
  }

  printf("Enter element to search: ");
  scanf("%d",&search);
  
  for(i = 0 ; i < size ; i++){ //for loop
    if(search == *(arr + i)){ //search an element in array using a pointer
      printf("%d is found at %d position.", search, (i+1)); //printf function
    }
    
  }

  
    
  return 0; //way to exit the function
}
