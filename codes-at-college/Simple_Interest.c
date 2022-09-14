#include <stdio.h>

/*
Description: Calcualte The Simple Interest
*/
float amountOfLoan; //Init The amoundOfLoan Var
float timeOfLoan; //Init The timeOfLoan Var
float interestOnLoan; //Init The interestOnLoan Var
float simpleInterest; //Init The simpleInterest Var
float amountToBeReturned; //Init The amountToBeReturned Var

int main() {
    
    printf("Calcualte Simple Interst! \n");
    
    printf("Enter Amount Of Loan Taken: ");
    scanf("%f", &amountOfLoan); //Takes In The Amount Of Loan Taken
    
    printf("Enter Tenure Of Loan Taken: ");
    scanf("%f", &timeOfLoan); //Takes The Time Of Loan
    
    printf("Enter Interest Of Loan Taken ( In Percent ) : ");
    scanf("%f", &interestOnLoan); //Takes The Interest On Loan
    
    // Calculates The Interest Principal Amount * Time Of Loan * Interest On Loan / 100
    simpleInterest = (amountOfLoan * timeOfLoan) * ( interestOnLoan / 100 ); 
    printf("Simple Interest Is: ");
    printf("%f\n", simpleInterest); //Prints The Simple Interest
    amountToBeReturned = simpleInterest + amountOfLoan; // Amount To Be Returned
    printf("Amount To Be Returned: ");
    printf("%f", amountToBeReturned);
    return 0;
}