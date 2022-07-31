#include <stdio.h> //Include a ‘stdio.h’ file to my code

int main(void) { //create a main function
  printf("Alphabets from a - z are:\n"); //printf function

  for(int i = 97 ; i <= 122 ; i++){ //for loop
    printf("%c \n",i); //I used ASCII code to print alphabets
  }
  
  return 0; //way to exit the function
}
