#include <stdio.h> //Include a ‘stdio.h’ file to my code

int main(void) {//create a main function

  int angle1, angle2, angle3; //declare variables of integer
  
  printf("Enter three angles of triangle: "); //printf function
  scanf("%d %d %d",&angle1, &angle2, &angle3);
//store the input value of integer
  
  if (angle1 + angle2 + angle3 == 180) //using if...else statement
    printf("Triangle is valid."); //printf function

  else
    printf("Triangle is not valid.");
  
  return 0; //way to exit the function
  }
