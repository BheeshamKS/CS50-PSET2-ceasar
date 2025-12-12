#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char plain_to_cipher(char p, int k);

int main(int argc, string argv[])
{
    // checks if key is entered
    if (argc != 2)
    {
        printf("Usage: ./ceasar Key\n");
        return 1;
    }
    else
    {
        int key_length = strlen(argv[1]);
        // check if key is int
        for (int i = 0; i < key_length; i++)
        {
            if (!isdigit(argv[1][i]))
            {
                printf("Usage: ./ceasar Key\n");
                return 1;
            }
        }
        // Gets plaintext
        int key = atoi(argv[1]);
        string plaintext = get_string("Plaintext: ");

        printf("ciphertext: ");
        // converts plain to cipher one by one using char
        for (int i = 0; i < strlen(plaintext); i++)
        {
            char ciphertext = plain_to_cipher(plaintext[i], key);
            printf("%c", ciphertext);
        }
        printf("\n");
        return 0;
    }
}

char plain_to_cipher(char p, int k)
{
    char c = '\0';
    if (isalpha(p))
    {
        if (isupper(p))
        {
            c = (((p -= 'A') + k) % 26) + 'A';
        }
        else if (islower(p))
        {
            c = (((p -= 'a') + k) % 26) + 'a';
        }
    }
    else
    {
        c = p;
    }
    return c;
}
