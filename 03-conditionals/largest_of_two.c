#include<stdio.h>

int main(){

    int num1;
    int num2;

    printf("Enter 1st number : ");
    scanf("%d", &num1);

    printf("Enter 2nd number : ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("Num1 is greater is Num2.\n");
    }
    else{
        printf("Num2 is greater than Num1.\n");
    }
}