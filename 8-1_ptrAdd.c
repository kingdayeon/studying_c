//Q1
#include <stdio.h>//Include a ‘stdio.h’ file to my code

int main(void) { //create a main function
  
  int arr[5]={1,2,3,4,5}; //declare and initialize an array

  int * ptr = arr; //declare and initialize an pointer

  for(int i=0 ; i < 5 ; i++){ //for loop

    * ptr += 2; //The value pointed to by the pointer is incremented by 2
    printf("%d value in the ith array : %d \n", i, arr[i]); //print the array

    ptr++; //point to the next
  }
  
  return 0; //way to exit the function
}
