#include <stdio.h>

int main() {
  char ch = 'A';
  char lowercase_ch = 'a';

  printf("Character : %c\n", ch);
  printf("Lowercase character : %c\n", lowercase_ch);

  ch = 'B';
  printf("updated character : %c\n", ch);
  return 0;
}