#include<stdio.h>

int main(void){

    int a;
    int b;
    int c;

    printf("Enter sides of triangle : ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > 0 && b > 0 && c > 0 &&
      a + b > c &&  a + c > b && b + c > a){
        printf("This is valid Triange.");
      }else{
        printf("Not a valid triangle.");
      }
    return 0;
}