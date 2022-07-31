#include<stdio.h> //Include a ‘stdio.h’ file to my code

void TestOddOrEven(int); //function declarations

int main(){ //create a main function

  int num; //declaring

  printf("Enter any number: "); //printf function
  scanf("%d",&num); //store the input value of integer
  TestOddOrEven(num);//function call
  
  return 0; //way to exit the function
}

void TestOddOrEven(int a){//function definition
  if(a%2==0) //if statement
    printf("The number is even."); //printf function

  if(a%2==1) //if statement
    printf("The number is odd."); //printf function
}
