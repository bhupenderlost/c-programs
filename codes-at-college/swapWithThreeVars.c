#include <stdio.h>

//Write A Program To Swap Two Numbers Using Third Variable

int main() {
  
    int x = 10;
    int y = 20;
  
    printf("X: ");
    printf("%d", x);
    printf("\nY: ");
    printf("%d", y);
  
    int newVar = x;
    x = y;
    y = newVar;
  
    printf("\nX: ");
    printf("%d", x);
    printf("\nY: ");
    printf("%d", y);
    return 0;
}
