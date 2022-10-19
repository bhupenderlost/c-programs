#include <stdio.h>

int main() {
    int year;
    printf("Enter The Year:");
    scanf("%d", &year);
    if(year % 4 == 0){
        printf("The Year %d is a leap year", year);
    }
    return 0;
}
