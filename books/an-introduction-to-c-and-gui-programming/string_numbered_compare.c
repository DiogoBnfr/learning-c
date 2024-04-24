#include <stdio.h>
#include <string.h>

int main(void) {
  char string1[10] = "first";
  char string2[10] = "fire";

  int foo =
      strncmp(string1, string2, 3); // 3 first letter are equal, so return 0
  printf("%d\n", foo);

  return 0;
}
