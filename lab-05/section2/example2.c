#include <stdio.h>
int main() {
int marks1, marks2, marks3;
printf("Enter three test markss: ");
scanf("%d %d %d", &marks1, &marks2, &marks3);
if (marks1 > 50 && marks2 > 50 && marks3 > 50) {
  printf("You passed the tests.\n");
} else {
  printf("You did not pass the tests.\n");
}
return 0;
}