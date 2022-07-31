//Q2
#include <stdio.h> //Include a ‘stdio.h’ file to my code
#define MAX_SIZE 100
//Maximum array size

int main(void) { //create a main function
  
  int i, size, sum=0; //declare a variable of integer
  int arr[MAX_SIZE];//declare an array
  printf("Enter size of the array: "); //printf function
  scanf("%d",&size); //store the input value of integer
  printf("Enter %d elements in the array : ",size); //printf function
  for(i=0 ; i<size ; i++){//for loop
    scanf("%d",&arr[i]);
  }

  for(i=0 ; i<size ; i++){//for loop to add elements in the array
    sum += arr[i];
  }

  printf("Sum of all elements of array = %d",sum);
  
  return 0; //way to exit the function
}
