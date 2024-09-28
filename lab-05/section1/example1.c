#include <stdio.h>
int main() {
int marks;
printf("Enter Marks: ");
scanf("%d", &marks);
if (marks >= 90) {
  if (marks >= 95) {
    printf("Grade: A+\n");
  } 
else {
  printf("Grade: A\n");
      }
} 
else if (marks >= 80) {
  if (marks >= 85) {
    printf("Grade: B+\n");
  } else {
  printf("Grade: B\n");
        }
}
else {
  printf("Grade: C or lower\n");
}
return 0;
}
