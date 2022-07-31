//Q5
#include <stdio.h> //Include a ‘stdio.h’ file to my code
#define MAX_SIZE 1000

int main(void) { //create a main function

  int num, sum=0;  //declaring and initializing sum
  int arr[MAX_SIZE];  //declaring array

  printf("Enter total number of elements: "); //printf function
  scanf("%d", &num); //store the input value

  printf("Enter %d elements: \n",num); //printf function

  for (int i=0 ; i<num ; i++){ //for loop to store the input value and to make a value of sum
    printf("Enter element   %d: ",i+1); //printf function
    scanf("%d",&arr[i]);
    sum += arr[i];
  }

  printf("Array elements are: "); //printf function
  
  for (int i=0 ; i<num ; i++) //for loop to show elements
    printf("%d ",arr[i]); //printf function

  printf("\nSum of all elements: %d \n",sum); //printf function
    

  
  
  return 0; //way to exit the function
}
