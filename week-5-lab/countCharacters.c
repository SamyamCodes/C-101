#include <stdio.h>
#include <string.h>

int main ()
{
  char str[100];
  int i = 0;
  int totalCharacters = 0;
  printf("\n Please Enter any String:");
  // gets(str);
  fgets(str, sizeof(str), stdin);

  while (str[i] != '\0')
    {
      if (str[i] == ' ')
        {
          i++;
          continue;
        }
        totalCharacters++;
        i++;
    }
    printf ("The total number of characters in this String %s = %d.\n", str, totalCharacters );
}
