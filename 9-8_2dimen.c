//Q8
#include <stdio.h> //Include a ‘stdio.h’ file to my code


int main(void) { //create a main function

  int arr1[3][3]; //declare a two-dimensional array
  int arr2[3][3];

  printf("Enter elements in matrix A of size 3x3: \n");
  for(int i = 0 ; i<3 ; i++){ //for loop to store 3x3 array
    for(int j = 0 ; j<3 ; j++){
      scanf("%d", &arr1[i][j]); //scanf function
    }
  }

  printf("\n"); //printf function

  printf("Enter elements in matrix B of size 3x3: \n");
  for(int i = 0 ; i<3 ; i++){//for loop to store 3x3 array
    for(int j = 0 ; j<3 ; j++){
      scanf("%d", &arr2[i][j]); //scanf function
    }
  }

  printf("\n"); //printf function

  printf("Sum of matrices A+B = \n"); //printf function
 
  
  for(int i = 0 ; i<3 ; i++){//for loop to printf the sum of 3x3 arrays
    for(int j = 0 ; j<3 ; j++){
      printf("%d ", arr1[i][j] + arr2[i][j]); //printf function
    }
    printf("\n");
  }
  
  return 0; //way to exit the function
}
