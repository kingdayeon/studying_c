//Q4
#include <stdio.h> //Include a ‘stdio.h’ file to my code
#define MAX_SIZE 100
//Maximum array size

int main(void) { //create a main function
  
  int i, size, odd=0, even=0; //declare a variable of integer
  int arr[MAX_SIZE];//declare an array
  printf("Enter size of the array: "); //printf function
  scanf("%d",&size); //store the input value of integer
  printf("Enter %d elements in the array : ",size); //printf function
  for(i=0 ; i<size ; i++){//for loop
    scanf("%d",&arr[i]); //scan elements in array

    if (arr[i]%2 == 1) //check whether the number is odd or not
      odd++;

    else
      even++;
  }

  printf("Total even elements: %d\n",even); //printf function
  printf("Total odd elements: %d",odd); //printf function
  
  return 0; //way to exit the function
}
