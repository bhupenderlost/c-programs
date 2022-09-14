#include <stdio.h>

/*

Description : Simple Calculator
Author: Bhupender Singh

*/

int inputForCommand; //Command Variable
int continueProgram; // Weather to continue the program
float a; //Init The a
float b; //Init The b

//HomeScreen Function
int homeScreen() {
    continueProgram = 0;
    printf("Calucaltor!\n");
    printf("Type: \n");
    printf("1 For Addition,\n 2 For Subtraction,\n 3 For Multiplication,\n 4 For Division\n");
    scanf("%d", &inputForCommand); // Takes the input
    continueProgram = 1; //Tells It To Continue The Program Futher
}
//Addition Functon
int addition() {
    printf("Input The First Value: ");
    scanf("%f", &a);
    printf("Input The Second Value: ");
    scanf("%f", &b);
    float result = a + b; // Adds The Numbers
    printf("Addition Result: ");
    printf("%f\n", result); //Prints The Result
    printf("<------------------------------------------------->\n");
    homeScreen(); //Takes Back to homescreen
    
}

int multiplication() {
    printf("Input The First Value: ");
    scanf("%f", &a);
    printf("Input The Second Value: ");
    scanf("%f", &b);
    float result = a * b; //Multiply The Numbers
    printf("Addition Result: ");
    printf("%f\n", result); //Show the Result
    printf("<------------------------------------------------->\n");
    homeScreen(); //Takes back to homescreen
    
}

//Division function
int division() {
    
    printf("Input The First Value: ");
    scanf("%f", &a);
    printf("Input The Second Value: ");
    scanf("%f", &b);
    float result = a / b; //Divides the numbers
    printf("Addition Result: ");
    printf("%f\n", result); //shows the result
    printf("<------------------------------------------------->\n");
    homeScreen(); //back to homescreen
}

//subtracion function
int subtraction() {
    
    printf("Input The First Value: ");
    scanf("%f", &a);
    printf("Input The Second Value: ");
    scanf("%f", &b);
    float result = a - b; //subtracts the numbers
    printf("Addition Result: ");
    printf("%f\n", result); //shows the result
    printf("<------------------------------------------------->\n");
    homeScreen(); //back to homescreen
}

int main() {
    //shows the homescreen for the first run
    homeScreen();
    //if input taken continue to check the commmand
    if(continueProgram == 1) 
    {   
        //if for addition checks for 1
        if(inputForCommand == 1)
        {
            //runs the addtion function
            addition();
        }else if(inputForCommand == 2){ //if for subtraction checks for 2
            subtraction(); //runs the subtraction function
        }else if(inputForCommand == 3) //if for multiplication checks for 3
        {
            multiplication(); // runs the multiplication function
        }else if(inputForCommand == 4) //if for division checks for 4
        {
            division(); // runs the division funciton
        }else { //if any other option given
            printf("Please Give Me A Correct Command!\n"); //gives warning
        }
    }
    return 0;
}