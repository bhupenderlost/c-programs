#include<stdio.h>

float add()
{
    float a,b;
    printf("enter two numbers to be added\n");
    scanf("%f %f", &a,&b);
    printf("the result is %.2f", a+b);
}
float sub()
{
    float a,b;
printf("enter two numbers to be subtracted\n");
    scanf("%f %f", &a,&b);
    printf("the result is %.2f", a-b);
}
  float mul()
{
    float a,b;
printf("enter two numbers to be multiplied\n");
    scanf("%f %f", &a,&b);
    printf("the result is %.2f", a*b);
}  
float div()
{
    float a,b;
printf("enter two numbers to be divided\n");
    scanf("%f %f", &a,&b);
    printf("the result is %.2f", a/b);
}

int main ()
{
    int count;
    printf("this is a calculator program for 2 numbers\n");
    printf("Choose 1 for addition\n choose 2 for subtraction\n choose 3 for multiplication \n choose 4 for division\n");
    scanf("%d",&count);
    if(count==1)
    {
        add();
    }
    else if(count==2)
    {
        sub();
    }
    else if(count==3)
    {
        mul();
    }
    else if(count==4)
    {
        div();
    }
else
{
    printf("wrong input\n");
}
    return 0;
}
