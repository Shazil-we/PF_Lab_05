#include <stdio.h>
int main(){
  int age = 0;
  printf("Enter your age ");
  scanf("%d" , &age);
  if(age < 13){
    printf("You are a child ");
  }else if(age < 20){
    printf("You are a teenager ");
  }else if(age <60){
    printf("you are an adult");
  }else{
    printf("you are a senior ");
  }
  return 0;
}