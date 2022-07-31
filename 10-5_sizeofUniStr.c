//Q5
#include <stdio.h> //Include a ‘stdio.h’ file to my code

int main() //create a main function
{
  union uni //declare union
{
  char arr[32];
  int a;
  int b;
};

  union uni uu;

  struct str //declare structure
{
  char arr[32];
  int a;
  int b;
};

  struct str ss;

//printf function using size of 
  printf("size of union = %ld bytes \n",sizeof(uu)); 
  printf("size of structure = %ld bytes ",sizeof(ss));
  
    return 0; //way to exit the function
}
