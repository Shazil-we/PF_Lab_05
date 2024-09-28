#include <stdio.h>
int main(){
  int age,income,creditScore;
  printf("Enter Your age: ");
  scanf("%d" , &age);
  printf("Enter Your income: ");
  scanf("%d" , &income);
  printf("Enter Your Credit Score: ");
  scanf("%d" , &creditScore);
  if(age >= 18 && income >= 30000 && creditScore >= 500){
    printf("You are eligible for a loan");
  }else{
    printf("You do not meet the criteria");
  }
}