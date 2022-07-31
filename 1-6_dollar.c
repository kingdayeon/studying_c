#include<stdio.h> //Include a ‘stdio.h’ file to my code 

int dollar; //declare a variable

int main(){ //create a main function
	printf("Enter a dollar amount: "); //print on the screen 
	scanf("%d",&dollar); //store the input value
	
	printf("$20 bills: %d\n",dollar / 20); //print on the screen using an operator
	printf("$10 bills: %d\n",dollar%20 / 10);//print on the screen using operators
	printf("$5 bills: %d\n",dollar%20%10 / 5);//print on the screen using operators
	printf("$1 bills: %d",dollar%20%10%5 / 1);//print on the screen using operators
	
return 0; //Way to exit the function
}             
