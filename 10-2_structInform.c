//Q2
#include <stdio.h> //Include a ‘stdio.h’ file to my code 

int main(void) { //create a main function
  
  struct nrd{ //declare structure
    int dd;
    int mm;
    int yy;
  };

  struct person{ //declare structure
    char name[20];
    int roll;
    struct nrd d; //Nested structure
  };

  struct person p1;

  printf("Enter name: ");
  scanf("%s",p1.name); //store the input value

  printf("Enter roll number: ");
  scanf("%d",&p1.roll); //store the input value

  printf("Enter Date of Birth [DD MM YY] format: ");
  scanf("%d %d %d",&p1.d.dd, &p1.d.mm, &p1.d.yy); //store the input value

  printf("\n");
  
  printf("Name : %s \n",p1.name); //printf function
  printf("RollNo : %d \n",p1.roll);
  printf("Date of birth : %02d/%02d/%d \n",p1.d.dd,p1.d.mm, p1.d.yy);
  
  return 0; //way to exit the function
}
