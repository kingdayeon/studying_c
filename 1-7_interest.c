#include<stdio.h>//Include a ‘stdio.h’ file to my code 

float loan, interest_rate, monthly_payment, monthly_interest, after_first_payment, monthly_interest_2nd; //declare a variable

int main(){ //create a main function
  
	printf("Enter amount of loan: ");//print on the screen 
	scanf("%f",&loan);//store the input value
	printf("Enter interest rate: ");//print on the screen 
	scanf("%f",&interest_rate);//store the input value
	printf("Enter monthly payment: ");//print on the screen 
	scanf("%f",&monthly_payment);//store the input value
	
	monthly_interest = loan * interest_rate / 12 /100;//initialize a variable. We can derive monthly interest with this way of calculating.
	after_first_payment = loan - monthly_payment + monthly_interest; //initialize a variable
	monthly_interest_2nd = after_first_payment * interest_rate / 12 /100;//initialize a variable. It is different from monthly_interest. Because monthly interest must be different from first month and second month. 
	
	printf("balance remaining after first payment: %.2f\n", after_first_payment);//print on the screen.I used %.2lf to print to two decimal places
	printf("balance remaining after second payment: %.2f", after_first_payment - monthly_payment + monthly_interest_2nd);//print on the screen 

return 0;//Way to exit the function
}    
