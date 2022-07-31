#include<stdio.h>//Include a ‘stdio.h’ file to my code 

float float_var = 123.456; //declare and initialize a variable of float
int int_var = 89;//declare and initialize a variable of integer
float float_int_var = 10987.583984; //declare and initialize a variable 

int main(){//create a main function
	
printf("float value = %f\n", float_var);//print on the screen using %f
printf("int value = %d\n", int_var);//print on the screen using %d
printf("Product between float and int: %f", float_var*int_var);//print on the screen

return 0;//Way to exit the function
}
