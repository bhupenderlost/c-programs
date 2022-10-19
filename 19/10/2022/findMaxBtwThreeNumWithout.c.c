#include <stdio.h>

int main() {
    //Find maximum between three numbers
    int a, b, c;
    printf("Enter The Three Numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b) {
        if(a > c) {
            printf("A is the maximum value");
        }
    }else if(b > a) {
        if(b > c) {
            printf("B is the maximum value");
        }
    }else if(c > a) {
        if(c > b) {
            printf("C is the maximum vlaue");
        }
    }else {
        printf("Mujhe Kya Mai Toh Else Hu");
    }
    return 0;
}
