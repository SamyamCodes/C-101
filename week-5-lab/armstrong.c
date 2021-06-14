#include <stdio.h>

int num, sum, rem, check = 0;


int main() {
  printf("Enter the number: ");
  scanf("%d", &num);

  check = num;  //say 153

  while (check != 0) {
    rem = check % 10;     //3 on first and 5 on second and 1 on third ite.
    sum += rem * rem * rem;   //adds 3^3 to sum.
    check = check / 10;   //15 on first iteration and 1 on second ite.
  }

  if (sum == num) {
    printf("The given number is an armstrong number.\n");
  } else {
    printf("The given number is not an armstrong number.\n");
  }

}