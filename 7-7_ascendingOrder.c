//Q7
#include <stdio.h> //Include a ‘stdio.h’ file to my code
#define MAX_SIZE 100
//Maximum array size

int main(void) { //create a main function
  
  int i, size, j, temp; //declare a variable of integer
  int arr[MAX_SIZE];//declare an array
  printf("Enter size of the array: "); //printf function
  scanf("%d",&size); //store the input value of integer
  printf("Enter %d elements in the array : ",size); //printf function
  for(i=0 ; i<size ; i++){//for loop
    scanf("%d",&arr[i]); //scan elements in array
    }
  
  for(i=0 ; i<5 ; i++){ //making ascending order
    for(j=0 ; j<5 ; j++){
      if(arr[i]<arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  
  printf("\nElements of array in ascending order: "); //printf function
  
  for(i=0 ; i<5 ; i++){ //printf function using for loop
    printf("%d ",arr[i]);
  }
  
  return 0; //way to exit the function
}
