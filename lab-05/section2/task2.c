#include <stdio.h>
int main(){
  int age = 0 ;
  char iscitizen;
  printf("Enter your age");
  scanf("%d" , &age);
  printf("are you a citizen of pakistan? Y for yes N for no");
  scanf("%s" , &iscitizen);
  if(age>= 18 && (iscitizen == 'y' || iscitizen == 'Y')){
    printf("You are eligible to vote");
  }else{
    printf("You are not eligible to vote");
  }
}