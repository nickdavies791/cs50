#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for change owed
    float getChange;
    do 
    {
        getChange = get_float("Change owed: ");
    }
    while (getChange <= 0);
    
    // Convert change to int and round up
    int change = round(getChange * 100);
    
    // Available coins
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    
    // Initialise coins
    int coins = 0;
    
    // Get number of quarters    
    while (change >= quarter)
    {
        change = change - quarter;
        coins++;
    }
    // Get number of dimes
    while (change >= dime)
    {
        change = change - dime;
        coins++;
    }
    // Get number of nickels     
    while (change >= nickel)
    {
        change = change - nickel;
        coins++;
    }
    // Get number of pennies
    while (change >= penny)
    {
        change = change - penny;
        coins++;
    }

    // Print total number of coins
    printf("%i\n", coins);
    
}
