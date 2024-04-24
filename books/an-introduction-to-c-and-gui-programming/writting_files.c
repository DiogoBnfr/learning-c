#include <stdio.h>

int main(void)
{
  FILE *fp;
  int value;
  fp =
    fopen ("/home/vaeep/dev/study/c/an-introduction-to-c-and-gui-programming/input.txt", "wb");

  if (fp)
  {
    for (value = 48; value < 58; ++value)
    {
      /* this actually write the correspondent ascii char
	 to the numeric code to the file
      */ 
      fputc (value, fp);
    }
    fclose (fp);
  }
}
