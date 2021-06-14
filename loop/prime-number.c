#include <stdio.h>

int main() {
  int num;
  int prime = 1;
  int factor;
  printf("Enter the number: ");
  scanf("%d", &num);

  for (int i=2; i < num; i++) {
    if (num%i == 0) {
      prime = 0;
      factor = i;
      break;
    }
  }

  if (prime == 1) {
    printf("%d is a prime number.\n", num);
  } else {
    printf("%d is not a prime number. It is divisible by %d.\n", num, factor);
  }
}