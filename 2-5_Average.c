#include<stdio.h>//Include a ‘stdio.h’ file to my code 

int main(){//create a main function

  int num1, num2, num3, total; //declare variables of integer

  float average;

  printf("Enter score of three subjects: "); //printf function

  scanf("%d %d %d",&num1,&num2,&num3); //store the input value of integer.

  total = num1+num2+num3; //store the value 
  average = total / 3.0; // We should use 3.0 rather that 3-> Because average is a form of float.
    
  printf("Total = %d\n", total); //print on the screen. 
  
  printf("Average = %f\n",average);//print the average


  
 
  
  
  return 0;//way to exit the function
}
