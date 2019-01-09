#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Declare the height as integer
    int height;
    
    // ask user for height
    do
    {
        height = get_int("What is the height?\n");
    }
    // while these conditions match
    while (height < 1 || height > 8);
    
    // loop through each row while row < height, increment
    for (int row = 0; row < height; row++ )
    {
        // print number of spaces for each row
        for (int space = height - row; space > 1; space--)
        {
            printf(" ");
        }
        // print number of hashes for each row
        for (int hash = 0; hash <= row; hash++)
        {
            printf("#");
        }
        // print a new line
        printf("\n");
    }
}
