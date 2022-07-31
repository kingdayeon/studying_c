#include<stdio.h>//Include a ‘stdio.h’ file to my code 

int main(){//create a main function

  int var1, var2;//declare variables of integer

  printf("Enter two input data (hexademical only): ");//print on the screen
  scanf("%x %x",&var1,&var2); //hexademical data can be input using scanf("%x",&var)

  printf("bitwise AND operation of %x(hex) and %x(hex): %x\n", var1, var2, var1 & var2);//print on the screen using a bitwise operator
  
  printf("bitwise OR operation of %x(hex) and %x(hex): %x\n", var1, var2, var1 | var2);//print on the screen using a bitwise operator
    
  printf("bitwise XOR operation of %x(hex) and %x(hex): %x\n", var1, var2, var1 ^ var2);//print on the screen using a bitwise operator
  
  return 0;//way to exit the function
}
