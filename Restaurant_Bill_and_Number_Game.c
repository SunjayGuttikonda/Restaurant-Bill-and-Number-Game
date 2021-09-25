#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/*I will create two functions: one for the restaurant bill and one for the
number guessing game. In the main function, I will ask the user what they
want to do. If they choose the restaurant bill, the user will be prompted 
to enter the tax and tip. A meal will randomly be chosen for them. Based 
the user-inputted data and the data assigned in the program, the end result
will be a display of the meal cost, tax amount, tip amount, and total bill 
on the screen. If the user chooses the number guessing game, they have three
options. If option 1 is selected the program should prompt the user to enter 
a number. If they guess it right, they won the game. If not, they can try 
again. If option 2 is chosen, then tell them the max value they can set the 
number. If option 3 is chosen thank the user for playing and end the game.*/
double Restaurant_Bill(double, double);
double Restaurant_Bill(double tax, double tip){
    double salad = 9.95;
    double soup = 4.55;
    double sandwich = 13.25;
    double pizza = 22.35;
    double mealCost;
    double taxAmount;
    double tipAmount;
    double totalBill;
    int randNum;
    int i, n;
    time_t t;
    srand((unsigned) time(&t));
    randNum = rand()%4;
    if(randNum == 0){
        mealCost = salad;
    }if(randNum == 1){
        mealCost = soup;
    }if(randNum == 2){
        mealCost == sandwich;
    }if(randNum == 3){
        mealCost == pizza;
    }
    taxAmount = (tax/100)*mealCost;
    tipAmount = (tip/100)*mealCost;
    totalBill = mealCost+taxAmount+tipAmount;
    printf("The cost of your meal is %lf\n", mealCost);
    printf("The tax on your meal is %lf\n", taxAmount);
    printf("The tip you owe is %lf\n", tipAmount);
    printf("Your total bill is: ");
    return(totalBill);
}

double Number_Game(){
    int user_game_option = 0;
    int max_game_number = 10;
    int randNum;
    printf("Press 1 to play a game\n");
    printf("Press 2 to change the max number\n");
    printf("Press 3 to quit\n");
    time_t t;
    srand((unsigned) time(&t));
    randNum = rand()%max_game_number + 1;
    scanf("%d", &user_game_option);
    if(user_game_option == 1){
        int user_guess;
        printf("Please enter a number");
        scanf("%d", &user_guess);
        do{
            printf("You're guess was too low. Try again.");
            //printf("%d")
            scanf("%d", &user_guess);

        } while(user_guess < randNum);
        do{
            printf("You're guess was too high. Try again.");
            scanf("%d", &user_guess);
        } while(user_guess > randNum);
        if(user_guess == randNum){
            printf("Congratulations! You won the game... and a brand new Mercedes SLS AMG.");
        }

    }
        

    if(user_game_option == 2){
        printf("You chose to change the max number. The maximum number you can set to is 2147483647. Do not enter a negative number or go above the maximum value.");
        scanf("%d", max_game_number);
        do{
            printf("You're number is invalid. Please try again.");
            scanf("%d", max_game_number);
        } while(max_game_number > 2147483647 || max_game_number < 0);
    }
    if(user_game_option == 3){
        printf("Thank you for playing the game. Good day.");        

    }
    
}


int main(){
     
     int user_initial_option;
     printf("Press 1 if you would like your Restaurant Bill or press 2 if you would like to play a game\n");
     scanf("%d", &user_initial_option);
     if(user_initial_option == 1){
        double user_tax;
        double user_tip;
        printf("Please enter tax rate (in percentage)");
        scanf("%lf", &user_tax);
        printf("Please enter your preferred tip (in percentage)");
        scanf("%lf", &user_tip);
        printf("%lf\n", Restaurant_Bill(user_tax, user_tip));
        return 0;
     }
     if(user_initial_option == 2){
         Number_Game();
     }

}




