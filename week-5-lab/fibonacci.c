#include <stdio.h>

int n;
int i = 0;
int first = 0;
int second = 1;
int third = 0;
int num = 0;

int main() {
  printf("Enter the number upto which you want fibo series: ");
  scanf("%d", &n);
  printf("%d\n", first);
  printf("%d\n", second);
  do {
    third = first + second;
    printf("%d\n", third);
    first = second;
    second = third;
    i++;
  } while (i <= n);
}