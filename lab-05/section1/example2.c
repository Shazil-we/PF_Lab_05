#include <stdio.h>
int main()
{
  int temp = 0;
  printf("Enter temp in Celsius: ");
  scanf("%d", &temp);
  if (temp >= 30)
  {
    if (temp >= 40)
    {
      printf("It's very hot!\n");
    }
    else
    {
      printf("It's hot.\n");
    }
  }
  else if (temp >= 20)
  {
    printf("It's warm.\n");
  }
  else if (temp >= 10)
  {
    printf("It's cool.\n");
  }
  else
  {
    printf("It's cold.\n");
  }
  return 0;
}