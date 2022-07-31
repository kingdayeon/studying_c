#include<stdio.h>
int main(){

  int a = 10, b=5;
  int num;

  num = a / b *2; // in this moment, num = 10 / 5 * 2 = 4
  printf("num= %d\n", num); // so num=4 is printed.

  num = ++a * 3; // in this moment, a could be 11, so num = 11*3 = 33
  printf("num= %d\n", num); // num = 33 is printed

  num = a > b && a != 5; // a>b is true (1)and a != 5 is true(1). so num is 1
  printf("num= %d\n", num); // 1 is printed

  num = a % 3 ==0; // a is 11, so a%3=2 that is different from 0, so a % 3 == 0 is a false(0), num becomes 0
  printf("num= %d\n", num); // so num = 0 is printed 

  return 0;
}
