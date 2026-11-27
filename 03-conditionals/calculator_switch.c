#include <stdio.h>

int main(){

    float a;
    char op;
    float b;

    printf("Enter fist number : ");
    scanf("%f", &a);

    printf("Enter operator(+, -, *, /) : ");
    scanf(" %c", &op);

    printf("Enter second number : ");
    scanf("%f", &b);

    switch(op){
    case '+' :
    printf("The sum %.2f and %f is :%.2f\n", a, b, a + b);
    break;

    case '-' :
    printf("The difference of %.2f and %.2f is : %.2f\n", a, b, a - b);
    break;

    case '*' :
    printf("The product of %.2f and %.2f is : %.2f\n", a, b, a * b);
    break;

    case '/' :
    if(b != 0){
        printf("The divisible  of %.2f and %.2f is : %.2f\n", a, b, a / b);
    }
    else {
    printf("The  division cannot  be possible  because the denominator cant be zero \n");
    }
    break;
    default :
    printf("Wrong operator  entered ");
}
return 0;
}