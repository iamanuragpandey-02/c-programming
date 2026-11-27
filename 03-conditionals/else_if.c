#include <stdio.h>

int main(){

    int a;
    int b;
    int c;

    printf("Enter your numbers : ");
    scanf("%d", &a);

     printf("Enter your numbers : ");
    scanf("%d", &b);

    printf("Enter your numbers : ");
    scanf("%d", &c);

    if(a > b && a > c){
        printf("A is  greater than B and C.");
    }
    else if (b > a && b > c) {
    printf("B is  greater than A and C.");
    }
    else{
        printf("C  is greater is Both.");
    }
    return 0;
}