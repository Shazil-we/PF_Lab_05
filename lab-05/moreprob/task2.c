#include <stdio.h>
int main(){
  float as_marks = 0 ,exam_marks = 0,attendance = 0,final_score = 0;
  printf("Enter your attendance in percentage: ");
  scanf("%f " , &attendance);
  if(attendance > 75){  
    printf("Enter your assignment marks: ");
    scanf("%f" , &as_marks);
    printf("Enter your exam marks: ");
    scanf("%f" , &exam_marks);
    final_score = ((as_marks*0.2) + (exam_marks*0.8));
    if(final_score >= 85){
      printf("Your final score is %f and your final grade is A" , final_score);
    }else if(final_score >=70){
      printf("Your final score is %f and your final grade is B" , final_score);
    }else if(final_score>=55){
      printf("Your final score is %f and your final grade is C" , final_score);
    }else if(final_score>=40){
      printf("Your final score is %f and your final grade is D" , final_score);
    }else{
      printf("Your final score is %f and your final grade is U and you have failed this class" , final_score);
    }
    
  }else{
    printf("You have failed due to short attendance ");
  }
  return 0;
}