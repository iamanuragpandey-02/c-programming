#include <stdio.h>

int main(){

    int num1;
    int num2;
    int num3;

    printf("Enter your 1st number : ");
    scanf("%d", &num1);

    printf("Enter your 2nd number : ");
    scanf("%d", &num2);

    printf("Enter your 3rd number : ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){
        printf("Num1 is  greater than Num2 and Num3.");
    }
    else if (num2 > num1 && num2 > num3) {
    printf("Num2 is  greater than Num1 and Num3.");
    }
    else{
        printf("Num3 is greater is Both.");
    }
   return 0;
}