#include <stdio.h>

int main() {
  int n;
  printf("Enter the number:");
  scanf("%d", &n);

  if (n%2 == 0) 
    goto even;
  else 
    goto odd;
  even: 
    printf("The given number is even.");
    goto end;
  odd: 
    printf("The given number is odd.");
    goto end;
  end:
    printf("\n");
}