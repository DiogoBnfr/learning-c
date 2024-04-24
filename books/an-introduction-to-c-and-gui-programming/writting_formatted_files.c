#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *fp;

  fp = fopen ("/home/vaeep/dev/study/c/an-introduction-to-c-and-gui-programming/input.txt", "wb");

  if (fp) {
   fprintf (fp, "This is some text.\n");
   fclose (fp);
  }

  return 0;
}
