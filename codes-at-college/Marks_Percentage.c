#include <stdio.h>

/*
Calculate the percentage of marks scored in different subjects
*/

float englishMarks;
float hindiMarks;
float mathsMarks;
float scienceMarks;
float sscMarks;
float totalMarks;
float percentageMarks;

int main() {
    
    printf("Enter The Marks Below For Different Subjects!\n");
    printf("Make Sure That The Makrs Are Out Of 100\n");
    printf("Enter Marks Below: \n");
    
    printf("English: ");
    scanf("%f", &englishMarks);
    
    printf("Hindi: ");
    scanf("%f", &hindiMarks);
    
    printf("Maths: ");
    scanf("%f", &mathsMarks);
    
    printf("Science: ");
    scanf("%f", &scienceMarks);
    
    printf("Social Science: ");
    scanf("%f", &sscMarks);
    
    totalMarks = englishMarks + hindiMarks + mathsMarks + scienceMarks + sscMarks;
    
    percentageMarks = ( totalMarks / 500 ) * 100;
    printf("Percentage: ");
    printf("%f", percentageMarks);

    return 0;
}