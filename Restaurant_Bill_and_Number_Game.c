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
double Restaurant_Bill(int tax, int tip){
    double salad = 9.95;
    double soup = 4.55;
    double sandwich = 13.25;
    double pizza = 22.35;
    int randNum;
    int i, n;
    time_t t;
    n = 5;
    srand((unsigned) time(&t));
    for(i=0; i<n; i++){
        printf("%d\n", rand()%6);
    }
    return 0;
}
int main(){
     int randNum;
    int i, n;
    time_t t;
    n = 5;
    srand((unsigned) time(&t));
    for(i=0; i<n; i++){
        printf("%d\n", rand()%6);
    }
    return 0;
}


/*Salad: $9.95Soup: $4.55Sandwich: $13.25Pizza: $22.35*/
