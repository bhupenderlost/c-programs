#include <stdio.h>

double addition(double x, double y)
{
    return x + y;
}
double subtraction(double x, double y) 
{
    return x - y;
}
double multiplication(double x, double y) 
{
    return x * y;
}
double division(double x, double y)
{
    return x / y;
}

int operation;
double x, y;
int main() {
    printf("Type: \n 1 For Addition \n 2 For Subtraction \n 3 For Multiplication \n 4 For Division\n");
    scanf("%d", &operation);
    printf("Type 2 Numbers:\n");
    scanf("%lf %lf", &x, &y);
    if(operation == 1)
    {
        printf("%lf is the answer.", addition(x, y));
    }else if(operation == 2)
    {
        printf("%lf is the answer.", subtraction(x, y));

    }else if(operation == 3)
    {
        printf("%lf is the answer.", multiplication(x, y));

    }else if(operation == 4)
    {
        printf("%lf is the answer.", division(x, y));

    }else {
        printf("Please Provide An Input! \n Re-Run The Code!");
    }
    return 0;
}
