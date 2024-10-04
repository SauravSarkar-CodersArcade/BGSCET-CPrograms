#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter the character:\n");
    scanf("%c", &ch);
    if(!isalpha(ch)){
        printf("The character is not an alphabet.\n");
        return 0;
    }
    // AEIOU aeiou
    switch (ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a Vowel.", ch);
            break;
        default:
            printf("%c is a consonant.", ch);

    }
    return 0;
}
