#include <stdio.h>

/*
*Filename: calculator.c
*Description: Calculator Which Does Simple Addition, Subtraction, Muliplication, Division ( Note : Only Integer Values Accpeted Not Float)
*Author: Bhupender Singh
*Github: https://github.com/bhupenderlost
*Twitter: https://twitter.com/BhupenderLost

*/

int inputForCalculator;
int continueProgram = 0;
float a;
float b;
float result;

int homeScreen() {
    printf("Welcome To Calculator\n");
    printf("Author: Bhupender Singh\n");
    printf("Follow The Instructions Below:\n");
    printf("Type:\n 1 For Addition,\n 2 For Subtraction,\n 3 For Multiplication,\n 4 For Division\n");
    scanf("%d", &inputForCalculator);
    continueProgram = 1;

}

int addNumbers() {
    printf("Input The First Number: ");
    scanf("%f", &a);
    printf("Input The Second Number: ");
    scanf("%f", &b);
    printf("Result: ");
    printf("%f\n", a + b);
    printf("<--------------------------------------------------------------------------------->\n");
    homeScreen();
    continueProgram = 0;    
}

int subNumbers() {
    printf("Input The First Number: ");
    scanf("%f", &a);
    printf("Input The Second Number: ");
    scanf("%f", &b);
    printf("Result: ");
    printf("%f\n", a - b);
    printf("<--------------------------------------------------------------------------------->\n");
    homeScreen();
    continueProgram = 0;  

}

int mulNumbers() {
    printf("Input The First Number: ");
    scanf("%f", &a);
    printf("Input The Second Number: ");
    scanf("%f", &b);
    printf("Result: ");
    printf("%f\n", a * b);
    printf("<--------------------------------------------------------------------------------->\n");
    homeScreen();
    continueProgram = 0;  

}

int divNumbers() {
    printf("Input The First Number: ");
    scanf("%f", &a);
    printf("Input The Second Number: ");
    scanf("%f", &b);
    printf("Result: ");
    printf("%f\n", a / b);
    printf("<--------------------------------------------------------------------------------->\n");
    homeScreen();
    continueProgram = 0;  

}

int main() {
    homeScreen();
    if(continueProgram == 1) 
    
    {
        if(inputForCalculator == 1) 
        {
            addNumbers();
        }else if (inputForCalculator == 2)
        {
           subNumbers();

        }else if(inputForCalculator == 3)
        {
            mulNumbers();

        }else if(inputForCalculator == 4)
        {
            divNumbers();

        }else {
            printf("Please Select Any Option Below\n");
            homeScreen();
            continueProgram = 0;

        }
    }
    
}