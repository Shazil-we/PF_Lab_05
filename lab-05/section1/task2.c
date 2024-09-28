#include <stdio.h>
int main(){
  int number = 0;
  printf("Enter a number ");
  scanf("%d" , &number);
  if(number == 0 ){
    printf("the number is zero");
  }else if(number < 0){
    printf("The number is negative");
  }else if(number > 0){
    printf("The number is positive");
    if(number%2 ==0 ){
      printf(" \nthe number is also an even number");
    }else {
      printf("\nThe number is an odd number ");
    }
  }else{

  }
}