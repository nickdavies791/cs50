// Caesar's Algorithm in C
// Accepts key as runtime argument
// User enters plaintext and is returned ciphered text
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Store the argument in key variable
    char *key = argv[1];

    // Check there are only two command-line arguments passed
    if (argc == 2)
    {
        // Loop through to the end of the key array
        for (int i = 0; i < strlen(key); i++)
        {
            int keylength = strlen(key);

            // If the current key is not a digit then end the program
            if (!isdigit(key[i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }

        // Convert the key from a string to an integer
        int convertedKey = atoi(key);

        // Get the plaintext from the user to convert
        char *plaintext = get_string("plaintext: ");

        printf("ciphertext: ");

        // Loop through each letter and cipher
        for (int i = 0, len = strlen(plaintext); i < len; i++)
        {
            // Store letter in variable for iterative use
            char letter = plaintext[i];
            // Add key to letter subtract ASCII for 'A' MOD 26 add ASCII value back
            char lower = (((letter + convertedKey) - 97) % 26) + 97;
            // Add key to letter, subtract ASCII for 'a' MOD 26 add ASCII value back
            char upper = (((letter + convertedKey) - 65) % 26) + 65;

            if (islower(letter))
            {
                printf("%c", lower);
            }
            else if (isupper(letter))
            {
                printf("%c", upper);
            }
            else
            {
                // If anything other than letter, print the character
                printf("%c", letter);
            }
        }

        // Print a new line and return 0 exit code
        printf("\n");
        return 0;
    }
    else
    {
        // Alert user if there are more or less than 2 arguments
        printf("Usage: ./caesar key \n");
        return 1;
    }
}
