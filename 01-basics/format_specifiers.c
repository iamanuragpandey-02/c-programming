#include <stdio.h>

int main() {

  /* Here are few format specifiers are written below */

  int A = 8;
  char CH = 'P';
  float F = 6.00;
  double FF = 12.0000;
  long Long_number = 23423400;
  short small_number = 85;
  unsigned Positive_number = 9;

  printf("These are format specifiers");

  printf("THE A IS : %d\n", A);
  printf("character is : %c\n", CH);
  printf("RADIUS IS : %.2f\n", F);
  printf("DOUBLE NUMBER IS : %.2f\n", FF);
  printf("THE LONG IS : %ld\n", Long_number);
  printf("SHORT IS : %hd\n", small_number);
  printf("UNSIGNEDED : %u\n", Positive_number);

  printf("The size of Format specifier : \n");

  

  return 0;
}