#include <stdio.h>

int main(){

    int a;
    int b;

    printf("Enter your numbers : ");
    scanf("%d", &a);

     printf("Enter your numbers : ");
    scanf("%d", &b);

    if(a > b){
        printf("A is  greater than B.");
    }
    else{
        printf("B is always greater than A.");
    }
    return 0;
}