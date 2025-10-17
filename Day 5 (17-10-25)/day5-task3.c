//TO count number of digits, alphabet(V+C),special,Spaces
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int digits = 0, vowels = 0, consonants = 0, spaces = 0, special = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        ch = str[i];

        if (isdigit(ch))
            digits++;
        else if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        } 
        else if (isspace(ch))
            spaces++;
        else
            special++;
    }
    printf("\nDigits: %d", digits);
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nSpaces: %d", spaces);
    printf("\nSpecial characters: %d\n", special);

    return 0;
}
