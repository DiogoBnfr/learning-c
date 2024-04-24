#include <stdio.h>

int main(void)
{
  FILE *fp;
  int value;

  fp = fopen ("/home/vaeep/dev/study/c/an-introduction-to-c-and-gui-programming/input.txt", "rb");
  if (fp)
  {
    while (1)
    {
      value = fgetc (fp);
      if (value == EOF) break;
      else printf ("%c", value);
    }
    fclose (fp);
  }
}
