#include<stdio.h>//Include a ‘stdio.h’ file to my code 

char first_char, last_char; //declare a variable,type of character

int main(){//create a main function
   
   printf("_ A R _\nEnter any character to make a word that have meaning\nenter first and last character:");//print on the screen 
   scanf("%c %c", &first_char, &last_char);//store the input value which has a form of character
   printf("This is your word %c A R %c", first_char, last_char);//print on the screen
   
   
   
return 0;//Way to exit the function
}
