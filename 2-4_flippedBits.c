#include<stdio.h>//Include a ‘stdio.h’ file to my code 

int main(){//create a main function

  int num; //declare a variable of integer

  printf("Enter any number: "); //print on the screen
  
  scanf("%d",&num);//store the input value of integer.
  
  printf("Original number = %d (in demical)\n",num);//print on the screen.
  
  printf("Number after bits are flipped = %d (in demical)",~num); //To flip all bits of a binary number, we can use ~num rather than num
  
  
  return 0;//way to exit the function
}
