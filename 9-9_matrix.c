//Q9
#include <stdio.h> //Include a ‘stdio.h’ file to my code


int main(void) { //create a main function

  int check; //declare a variable to check two arrays are equal or not
  
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

 
  
  for(int i = 0 ; i<3 ; i++){//for loop to check two arrays are equal or not
    for(int j = 0 ; j<3 ; j++){
      if(arr1[i][j] != arr2[i][j])
        check = 1;
      else
        check = 0;
    }
  }

  if(check==1) //if statement
    printf("Matrix A is not equal to Matrix B");//printf function

  else if(check==0)
    printf("Matrix A is equal to Matrix B");//printf function
 
  return 0; //way to exit the function
}
