#include <stdio.h>
#include <string.h>

int main(void) {
  char string1[10] = "first";
  char string2[10] = "second";

  if (strcmp(string1, string2) == 0)
    printf("The strings are equal\n");
  else
    printf("The strings are not equal\n");

  return 0;
}
