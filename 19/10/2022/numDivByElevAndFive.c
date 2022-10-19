#include <stdio.h>

int main() {
    int a;
    printf("Enter The Number:");
    scanf("%d", &a);
    if(a % 5 != 0) {
        printf("Number is not divisible by 5\n");
    }else {
        printf("Number is divisible by 5 \n");
    }
    if(a % 11 != 0) {
        printf("Number is not divisible by 11");
    }else{
        printf("Number is divisible by 11");
    }
    return 0;
}
