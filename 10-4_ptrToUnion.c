//Q4
#include <stdio.h> //Include a ‘stdio.h’ file to my code

union uni //declare union
{
char *name;
};

int main() //create a main function
{
  //printf function
 	printf("\n\n Pointer : Show a pointer to union :\n"); 
	printf("----------------------------------------\n");
    union uni namename,*ptr;
    namename.name="Henry Wong";

    ptr=&namename; //initialize an pointer


    printf(" %s %s\n\n",ptr->name,(*ptr).name); //using pointer to union

    return 0; //way to exit the function
}
