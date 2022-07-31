#include<stdio.h>//Include a ‘stdio.h’ file to my code 

int year, month, birth;//declare a variable

int main(){//create a main function
	
	printf("enter year (XXXX): ");//print on the screen 
	scanf("%d", &year);//store the input value
	printf("enter month (in number): ");//print on the screen 
	scanf("%d", &month);//store the input value
	printf("enter birth date: ");//print on the screen 
	scanf("%d", &birth);//store the input value
	
	printf("I was born in %d %d %d", year, month, birth); //print the values at once,sequentially
	
	
return 0;//Way to exit the function
}       
