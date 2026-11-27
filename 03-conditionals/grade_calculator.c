#include <stdio.h>

int main() {

  int marks;
  ;

  printf("Enter your marks : ");
  scanf("%d", &marks);

  if (marks >= 91 && marks <= 100) {
    printf("O Grade obtained.\n");
  }
   else if (marks >= 81 && marks <= 90) {
    printf("A Grade obtained.\n");
  }
   else if (marks >= 71 && marks <= 80) {
    printf("B Grade oobtained.\n");
  }
   else if (marks >= 51 && marks <= 70) {
    printf("C Grade obtained.\n");
  }
   else if (marks >= 35 && marks <= 50) {
    printf("D Grade obtained.\n");
  }
   else {
    printf("Failed.");
  }

  return 0;
}