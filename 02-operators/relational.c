#include<stdio.h>

int main(void){

    int A = 12;
    int B = 10;

    int C = 15;
    int D = 18;

    printf("Greater between A = 1 and B = 0 : %d\n", A > B);
    printf("Greater between C = 1 and D = 0 %d\n", D > C);
    printf("Greater between A, B and C %d\n", (C > A) > B);
    printf("which is smaller B or D %d\n", D < B);
    return 0;
}