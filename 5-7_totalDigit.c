#include <stdio.h> //Include a ‘stdio.h’ file to my code

int main(void) { //create a main function

  int i=0;//initialize a variable
  int num;

  
  printf("Enter any number: "); //printf function
  scanf("%d",&num); //store the input value of integer
  
do{ //do-while loop
  num = num / 10;
  
  i++; //i = i+1
  
  }while(num != 0);//when num is 0, stop

  printf("Total digits: %d",i); //printf function

    
  return 0; //way to exit the function
}
