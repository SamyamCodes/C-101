#include <stdio.h>

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 3) {
      printf("I understood the continue keyword.\n");
      continue;
    }
    printf("%d\n", i);
  }
  printf("Out of loop"); 
}