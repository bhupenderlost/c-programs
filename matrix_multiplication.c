#include <stdio.h>

int main()
{
    int a[10][10];
    int b[10][10];
    int m[10][10];
    int i,j,k,r,c;
    
    printf("Enter the number of rows:");
    scanf("%d", &r);
    printf("\n Enter the number of columns:");
    scanf("%d", &c);
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            printf("Enter Value For Matrix A:");
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Enter Value For Matrix B:");
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++)
        {   
            m[i][j] = 0;
            for(k = 0; k < c; k++){
                m[i][j] = m[i][j] + a[i][k] * b[k][j]; 
            }
        }
    }
    printf("Result Of Multiplication: \n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
