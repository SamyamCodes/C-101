#include <stdio.h>

int main()
{
  int num, sum, rem, cube = 0;
  printf("Enter the number: ");
  scanf("%d", &num);

  int temp = num;

  while (temp % 10 != 0)
  {
    rem = temp % 10;
    sum += rem;
    temp = temp / 10;
  }
  
  cube = sum * sum * sum;

  if (cube == num) 
  {
    printf("The number is dudeney number.\n");
  }
  else 
  {
    printf("The number is not dudeney number.\n");
  }
}