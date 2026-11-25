#include <stdio.h>

int main(){

    int age, marks, attendance, sport ;

    printf("Enter age : ");
    scanf("%d", &age);

    printf("Enter marks : ");
    scanf("%d", &marks);

    printf("Enter attendance : ");
    scanf("%d", &attendance);

    printf("Sport participation(1 = Yes, 0 = No) : ");
    scanf("%d", &sport);

    // Logical AND(&&)

    if(age >= 18 && marks > 50){
        printf("Eligibility criteria qualified. \n");
    }
    else{
        printf("Eligibility criteria not qualified. \n");
    }

    // Logical OR ( || )

    if(marks >= 90 || sport == 1){
        printf("Student is eligible for scholarship. \n");
    }
    else{
        printf("Not eligible for scholarship,\n");
    }

    // Logical NOT (!)

    if(!(attendance >= 75)){
    printf("Low attendance, improvement needed.\n");
    }

    return 0;
}