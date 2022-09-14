#include <stdio.h>

int main() {
    int x = 1;
    int y = 2;
  
    printf("X: ");
    printf("%d", x);
    printf("\nY: ");
    printf("%d", y);
  
    x = x + y;
    y = x - y;
    x = x - y;
  
    printf("X: ");
    printf("%d", x);
    printf("\nY: ");
    printf("%d", y);
    return 0;
}
