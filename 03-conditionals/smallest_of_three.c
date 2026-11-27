#include<stdio.h>

int main(void){

    int num1;
    int num2;
    int num3;

    printf("Enter 1st number : ");
    scanf("%d", &num1);

     printf("Enter 2nd number : ");
    scanf("%d", &num2);

     printf("Enter 3rd number : ");
    scanf("%d", &num3);

    if(num1 < num2  && num1 < num3){
        printf("num1 is smallest number.\n");
    }
    else if(num2 < num1 &&  num2  < num3){
        printf("num2 is smallest number.\n");
    }
    else {
    printf("num3 is smallest number.\n");
    }
return 0;
}