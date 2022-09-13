#include<stdio.h>
#include<math.h>

/*
*Filename: trianlge.c
*Description: Finds The Area Of Trianlge With Three Different Sides Using Heron's Formula
*Author: Bhupender Singh
*Github: https://github.com/bhupenderlost
*Twitter: https://twitter.com/BhupenderLost

*/

//Global Declration
double firstSide; //First Side Of Triagnle
double secondSide; //Second Side Of Triangle
double thirdSide; //Third Side Of Trianlge
double semiPerimeter; //Semiperimeter Of Triangle
double result; //Result Of Triangle 


// Find The Square
int findSquare(double areaOfTrianlge) 
{
    return sqrt(areaOfTrianlge); //Uses Default SQRT Function From Math Library
}

//Find Area Of Triangle
int findAreaOfTriangle(double a, double b, double c)
{
    double areaOfTrianlge; //Area Of Trianlge

    semiPerimeter = (a + b + c) / 2; //Finding The Semi-Perimeter
    areaOfTrianlge = semiPerimeter * ( semiPerimeter - a ) * (semiPerimeter - b) * (semiPerimeter - c);
    areaOfTrianlge = findSquare(areaOfTrianlge);
    return areaOfTrianlge;

}

int main()
{
    printf("Calculate The Area Of Trianlge Using Heron's Formula\n");
    printf("Enter First Side: ");
    scanf("%lf", &firstSide); //Takes First Side
    printf("Enter Second Side: ");
    scanf("%lf", &secondSide); //Takes Second Side
    printf("Enter Third Side: ");
    scanf("%lf", &thirdSide); //Takes Third Side
    //Result
    result = findAreaOfTriangle(firstSide, secondSide, thirdSide); //Uses The findAreaOfTrianlge Function
    printf("Result: ");
    printf("%f", result); //Print Result
    return 0;
}