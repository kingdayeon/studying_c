#include <stdio.h> //Include a ‘stdio.h’ file to my code
#define MAX_SIZE 1000 
//Maximum array size

int main(void) { //create a main function
  
  int i, size; //declare a variable of integer
  int arr[MAX_SIZE];//declare an array
  printf("Enter size of array: "); //printf function
  scanf("%d",&size); //store the input value of integer
  printf("Enter 10 elements in the array : "); //printf function
  for(i=0 ; i<size ; i++){//for loop
    scanf("%d",&arr[i]);
  }

  printf("\nElements in array are: "); //printf function
  for(i=0 ; i<size ; i++){//for loop to print an array
    printf("%d, ",arr[i]);
  }
  
  return 0; //way to exit the function
}
