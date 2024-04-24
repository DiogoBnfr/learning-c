#include <stdio.h>

void main (void) 
{ 
  char input[256], name[256]; 
  int age;    
  printf ("What is your name, user?\n"); 
  fgets (input, 256, stdin); 
  sscanf (input, "%s", name);    
  printf ("Hello, %s. How old are you?\n", name); 
  while (1) 
  {
    // will write to input, max of 256 chars and will read from the console 
    fgets (input, 256, stdin); 
    if (sscanf (input, "%d", &age) == 1) break; 
    printf ("I don't recognise that as an age - try again!\n"); 
  }    
  printf ("Well, %s, you look young for %d...\n", name, age); 
}
