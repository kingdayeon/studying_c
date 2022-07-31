#include <stdio.h> //Include a ‘stdio.h’ file to my code

int main(void) { //create a main function

  int i, k, num;//initialize a variable
  
  printf("Enter number of columns:"); //printf function
  scanf("%d",&num); //store the input value of integer.

  for(k=1 ; k<=num ; k++){ //for loop
   
    for(i=0 ; i<k ; i++){//for loop in for loop
    printf("*"); //print a star
  } 
    printf("\n"); //newline
}

  for(k=1 ; k<=num ; k++){//for loop
   
    for(i=0 ; i < num-k ; i++){//for loop in for loop
    printf("*"); //print a star
  } 
    printf("\n"); //newline
}



    
  return 0; //way to exit the function
}
