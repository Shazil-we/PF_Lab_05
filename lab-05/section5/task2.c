#include <stdio.h>
int main(){
  int number,d1,d2,d3,d4,d5,sum = 0;
  printf("Enter a 5 digit number: ");
  scanf("%d" , &number);
  d1 = number%10;
  number /= 10;
  d2 = number%10;
  number /= 10;
  d3 = number%10;
  number /= 10;
  d4 = number%10;
  number /= 10;
  d5 = number%10;
  printf("\n %d" , d5);
  sum = d1+d2+d3+d4+d5;
  printf("the sum of %d is %d", number , sum);
  return 0;
}