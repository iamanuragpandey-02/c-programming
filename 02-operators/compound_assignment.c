#include <stdio.h>

int main() {

  int a = 14;
  int b = 20;
  int c = 5;
  int d = 8;

  printf("The a was : %d\n", a);
  printf("The b was : %d\n", b);
  printf("The c was : %d\n", c);
  printf("The d was : %d\n\n", d);

  printf("Assignment operaters are performed here \n\n");

  a += 5;
  b -= 10;
  c *= 4;
  d /= 4;

  printf("The a becomes : %d\n", a);
  printf("The b bocomes : %d\n", b);
  printf("The c becomes : %d\n", c);
  printf("The d becomes : %d\n", d);

  a %= 3;
  printf("The a becomes : %d\n", a);

  return 0;
}