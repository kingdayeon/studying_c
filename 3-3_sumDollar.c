#include <stdio.h>//Include a ‘stdio.h’ file to my code 

int main(void) {//create a main function

  int apples = 1800, oranges = 450, bananas = 8500; //declare and initialize variables
  float sum; //declare a variable
  
  float won_in_dollar; //declare a variable

  won_in_dollar = 0.00090; //initialize a variable
  
  sum = apples + oranges + bananas;
  
  
  printf("total = %.2f dollars",sum*won_in_dollar); //printf function
  
  return 0; //way to exit the function
  }
