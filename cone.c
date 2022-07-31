#include<stdio.h>//Include a ‘stdio.h’ file to my code 

int main(){//create a main function
   
   int radius, height; //declare variables which are integers
   float PI, cone; //declare variables

   PI = 3.14; //initialize a variable of float
   
   printf("Enter radius of rectangle: ");//print on the screen 
   scanf("%d", &radius); //store the input value
   printf("Enter height of rectangle: ");//print on the screen 
   scanf("%d", &height); //store the input value
   
  cone = PI * height * radius * radius * 0.3333333; //storing data
   printf("Volume of cone = %f",cone);//print on the screen
   
   return 0;//Way to exit the function
}
