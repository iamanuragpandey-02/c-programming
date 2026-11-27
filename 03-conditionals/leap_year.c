#include<stdio.h>

int main(){

    int year;

    printf("Enter year(4 digits) : ");
    scanf("%d", &year);

    if(year % 400 == 0){
        printf("Enter year is leap year.");
    }
    else if(year % 100 == 0){
    printf("Entered  year is ot a leap  year.");
    }
    else if(year % 4 == 0){
        printf("Entered year is leap year.");
    }
    else{
        printf("Entered  year  is not a leap year.");
    }
    return 0;
}