//Q8
#include <stdio.h> //Include a ‘stdio.h’ file to my code
#define MAX_SIZE 100
//Maximum array size
int getSum(int* parr,int); //function declaration

int main(void) { //create a main function
  
  int i, size, sizee, sum=0, res; //declare a variable of integer
  int arr[MAX_SIZE];//declare an array
  int* parr = arr; //pointer

  
  printf("Input size of array: "); //printf function
  scanf("%d",&size); //store the input value of integer
  printf("Input 5 number of elements in the array : \n",size); //printf function
  for(i=0 ; i<size ; i++){//for loop
    printf("element - %d : ",i);
    scanf("%d",&arr[i]); //scan elements in array
    }

  res = getSum(parr, size); //function call to store res
  printf("Sum of Array : %d\n",res); //printf function
  
  return 0; //way to exit the function
 }

  int getSum(int* parr, int size){ //function that uses pointer to caculate a sum
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        sum += parr[i];
    }
    return sum;
    }
 
