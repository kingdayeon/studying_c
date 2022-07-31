#include <stdio.h> //Include a ‘stdio.h’ file to my code

int main(void) {//create a main function

  float num1,num2,num3,num4,num5; //declare variables of float
  int marks; //declare a variable of integer
  
  printf("Enter five subjects marks: "); //printf function
  
  scanf("%f %f %f %f %f",&num1,&num2,&num3,&num4,&num5); //store the input value of float

  marks = (num1+num2+num3+num4+num5)/5; //average of 5 numbers
  
  printf("Percentage = %d\n",marks); //printf function

  switch (marks/10) { //I used marks/10 because it is hard to use switch...case statement with using scope. In case(), only integer and character can be entered that scope can't!
  case (9,10): //still using switch...case statement
    printf("Grade A"); //print a grade according to the number's average
    break; //get out of this case

  case (8):
    printf("Grade B");
    break;

  case (7):
    printf("Grade C");
    break;

  case (6):
    printf("Grade D");
    break;

  case (5):
    printf("Grade E");
    break;
    
  default: //when it doesn't matches any case, we use default:
    printf("Grade F");
    break;
    
  return 0; //way to exit the function
    }
  }
