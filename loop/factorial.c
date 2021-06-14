#include <stdio.h>

int main() {
  int n;
  int i, f = 1;
  printf("Enter the number: ");
  scanf("%d", &n);
  for (i = 1;i <= n; i++){
    f *= i;
  }

  printf("The factorial of %d is %d.\n", n, f);
}