#include<stdio.h>//Include a ‘stdio.h’ file to my code

float power(float base, int expo); //function declarations

int main() //create a main function
{
    int exponent; //declare a variable of integer
    float base; //declare a variable of float
    
    printf("Enter base: "); //printf function
    scanf("%f", &base); //store the input value of float
    printf("Enter exponent: "); //printf function
    scanf("%d", &exponent); //store the input value of integer
    
    printf("%.2lf ^ %d = %f", base, exponent, power(base, exponent));
     //printf function with a function call
    return 0; //way to exit the function
}

//function definition
float power(float base2, int exponent2){
  if(exponent2 == 0)
    return 1;
  else 
    return base2 * power(base2, exponent2-1); //recursion
}
