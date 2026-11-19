#include <stdio.h>

int main(){

    int A = 10;
    float B = 20.00;

    float C = (float) A;

    printf("the A number is : %d\n", A);
    printf("the b number is : %.2f\n", B);
    printf("the typecasted A number is : %.2f\n", C);
    return 0;
}