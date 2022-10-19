#include <stdio.h>

int main() {
    
    //Write a C program to relate to integers using =, <, > operators ( IF ELSE STATEMENT )
    int a, b;
    printf("Enter Two Integers:");
    scanf("%d %d", &a, &b);
    if(a != NULL & b != NULL) {
        if(a = b) {
            printf("A is equal to B");
        }else if(a < b) {
            printf("A is smaller then b");
        }else if(a > b) {
            printf("A is greater then b");
        }else {
            printf("Re-run the code");
        }
    }else {
        printf("Please enter the two numbers first.");
    }

    return 0;
}
