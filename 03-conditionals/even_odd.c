#include <stdio.h>

int main(){

    int num1 ;
    int num2 ;

    printf("Enter your 1st number : ");
    scanf("%d", &num1);

    printf("Enter your 2nd number : ");
    scanf("%d", &num2);

    if(num1 % 2 == 0){
     printf("The number is Even.\n");
    }else{
        printf("The number is Odd.\n");
    }
    return 0;
}