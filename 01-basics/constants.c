#include <stdio.h>

#define pi 3.14
#define max_score 100

int main() {
  const int day_in_week = 7;
  const float gravity = 9.8f;

  int age = 25;
  char grade = 'A';
  float radius = 5.0f;
  float area = pi * radius * radius;

  printf("integer constant: %d\n", 42);
  printf("character constant : %c\n", 'z');
  printf("floating constant : %f\n", 3.14);
  printf("marco constant pi : %.5f\n", pi);
  printf("const int  day_in_week : %d\n", day_in_week);
  printf("const float gravity : %.1f\n", gravity);
  printf(" mac_score : %d\n", max_score);

  printf("age : %d, grade : %c", age, grade);
  return 0;
}