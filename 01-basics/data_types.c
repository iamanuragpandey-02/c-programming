#include<stdio.h>

int main(){

     int Age = 19;
     char ch = 'A';
     float rad = 5.00;
     double pi = 3.14625;
     long Long_number = 657497400;
     short small_number = 24;
     unsigned Positive_number = 32;
     
     printf("BASIC DATA TYPE IN C \n");

     printf("THE AGE IS : %d\n", Age);
     printf("character is : %c\n", ch);
     printf("RADIUS IS : %.2f\n", rad);
     printf("DOUBLE NUMBER IS : %.2f\n", pi);
     printf("THE LONG IS : %ld\n", Long_number);
     printf("SHORT IS : %hd\n", small_number);
     printf("UNSIGNEDED : %u\n", Positive_number);

     return 0;
    }