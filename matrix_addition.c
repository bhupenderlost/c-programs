#include <stdio.h>

int main()
{
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int i,j,k,l,m,n;
    
    for(i = 0; i < 2; i++) 
    {
        for(j = 0; j < 2; j++) 
        {
            printf("Enter Value For Matrix A:");
            scanf("%d", &a[i][j]);
        }
    }
    for(k = 0; k < 2; k++)
    {
        for(l = 0; l < 2; l++)
        {
            printf("Enter Value For Matrix B:");
            scanf("%d", &b[k][l]);
        }
    }
    for(m = 0; m < 2; m++) 
    {
        for(n = 0; n < 2; n++)
        {   
            c[m][n] = a[m][n] + b[m][n];
            printf("%d\n", c[m][n]);
        }
    }
    return 0;
}
