#include <stdio.h>
int main()
{
  int a = 5; //  0101
  int b = 9; // 1001
  printf("a & b = %d\n", a & b);
  printf("a | b = %d\n", a | b);
  printf("a ^ b = %d\n", a ^ b);
  printf("~a = %d\n", ~a);
  return 0;
}