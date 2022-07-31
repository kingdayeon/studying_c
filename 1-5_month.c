#include<stdio.h>//Include a ‘stdio.h’ file to my code 


int main(){//create a main function

  int item, month, date, year;//declare variables of integer
  float price;//declare a variable of float

   printf("Enter item number: ");//print on the screen 
   scanf("%d", &item);//store the input value
   printf("Enter unit price: ");//print on the screen 
   scanf("%f", &price);//store the input value
   printf("Enter purchase date (mm/dd/yyyy): ");//print on the screen
   scanf("%d/%d/%d", &month, &date, &year);//store the input value sequentially
   
   printf("Item\tUnitprice\tPurchase date\n");//print on the screen
   printf("%d      ", item);//print on the screen
   printf("%.2f       ",price);//print on the screen. using %.2f which makes printing to two decimal places
   printf("%d/%d/%d", month, date, year);//print on the screen,sequentially


return 0;//Way to exit the function
}         
