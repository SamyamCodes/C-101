#include <stdio.h>

int main() {
  int n, sum = 0;
  float average;
  int i = 1;
  printf("Enter the number you want to sum upto: ");
  scanf("%d", &n);
  do {
    sum += i;
    i++;
  } while (i<=n);
  average = (float) sum / n;
  printf("The sum upto %d is %d.\n",n ,sum);
  printf("The average is %0.2f.\n", average);
} 