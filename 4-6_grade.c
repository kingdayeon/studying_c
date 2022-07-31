#include <stdio.h> //Include a ‘stdio.h’ file to my code

int main(void) { //create a main function

  float num1,num2,num3,num4,num5,marks; //declare variables of float
  
  printf("Enter five subjects marks: "); //printf function
  
  scanf("%f %f %f %f %f",&num1,&num2,&num3,&num4,&num5); //store the input value of float

  marks = (num1+num2+num3+num4+num5)/5; //average of 5 numbers
  
  printf("Percentage = %.2f\n",marks); //printf function

  if (marks >= 90) //if...else statement
    printf("Grade A"); //print a grade according to the number's average
  else if (marks >= 80) 
    printf("Grade B");
  else if (marks >= 70)
    printf("Grade A");
  else if (marks >= 60)
    printf("Grade D");
  else if (marks >= 50)
    printf("Grade E");
  else
    printf("Grade F");
    
  return 0; //way to exit the function
}
