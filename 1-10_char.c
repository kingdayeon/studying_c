#include<stdio.h>//Include a ‘stdio.h’ file to my code 

char first_char;//declare a variable

int main(){//create a main function
	
	printf("Our university missed one character\nH_NYANG UNIVERSITY\nplease enter character to complete word:\n"); //print on the screen 
	scanf("%c", &first_char);//store the input value
	printf("Thank you for filling, this is your fulfill word\nH%cNYANG UNIVERSITY", first_char);//print on the screen 
	
	
	
return 0;//Way to exit the function
}  
