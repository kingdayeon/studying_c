#include <stdio.h> //Include a ‘stdio.h’ file to my code

int main(void) { //create a main function
  printf("Alphabets from a - z are:\n"); //printf function

int i = 97;  //initialize and declare a variable
  
  while(i <= 122){ //while loop
    printf("%c \n",i); //I used ASCII code to print alphabets

    i++; //i should be added 1 to print alphabets with ASCII code and while loop
  }
  
  return 0; //way to exit the function
}
