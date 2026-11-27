#include<stdio.h>

int main(void){

    int num1 ;

    printf("Enter number : ");
    scanf("%d", &num1);

    if(num1 > 0){
        printf("Positive number.\n");
    }
    else if(num1 < 0){
        printf("Negative number.\n");
    }
    else{
        printf("Zero entered.");
    }
    return 0;
}