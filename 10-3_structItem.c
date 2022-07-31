//Q3
#include <stdio.h> //Include a ‘stdio.h’ file to my code 

int main(void) { //create a main function
  
  struct item{ //declare structure
    char name[20];
    float price;
    int quantity;
    float amount;
  };

  struct item *ptr, p;
  ptr = &p; //pointing

 

  printf("Enter product name: "); //printf function
  scanf("%s",(*ptr).name); //store the input value

  printf("Enter price:");
  scanf("%f",&(*ptr).price); //store the input value

  printf("Enter quantity: ");
  scanf("%d",&(*ptr).quantity); //store the input value

  printf("\n");
  
  printf("Name: %s \n",(*ptr).name); //printf function
  printf("Price: %f \n", (*ptr).price);
  printf("Quantity: %d \n",(*ptr).quantity);

  p.amount = (*ptr).price * (*ptr).quantity; //initialize p.amount
  
  printf("Total Amount: %f", (float)(*ptr).amount); //printf function
   
  
  return 0; //way to exit the function
}
