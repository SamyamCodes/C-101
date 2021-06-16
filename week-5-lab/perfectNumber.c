#include <stdio.h>

int main() {
  int num, sum = 0;
  printf("Enter the number: ");
  scanf("%d", &num);

  for (int i = 1; i <= num/2; i++) {
    if (num%i == 0) {
      sum += i;
    }
  }
  if (sum == num) {
    printf("The given number is perfect number.\n");
  } else {
    printf("The given number is not perfect number.\n");
  }
}