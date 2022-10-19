#include <stdio.h>

int main() {
    int age;
    int degreeInCS;
    int nationality;
    
    printf("Enter Your Age:");
    scanf("%d", &age);
    printf("\n Type 1 For Having Degree In CS:");
    scanf("%d", &degreeInCS);
    printf("\n Type 1 For Indian Nationality:");
    scanf("%d", &nationality);
    //IF age is greater then or equal to 18 and age is smaller then 50

    if(age >= 18 & age < 50) {
        //if degree in CS
        if(degreeInCS == 1) {
            //if nationality is indian
            if(nationality == 1) {
                printf("\n You Are Eligible To Fill The Application Form!");
            }else {
                printf("\n You don't have Indian nationality!");
            }
        }else {
            printf("\n You don't have degree in Computer Science!");
        }
    }else {
        printf("\n Your age is not eligible for the interview!");
    }
}
