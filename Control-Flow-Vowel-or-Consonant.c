#include <stdio.h>
int main()
{
    char ch = 'A';
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {

        printf("The character %c is a vowel.\n", ch);
    }
    else {
        printf("The character %c is a consonant.\n", ch);
    }

    return 0;
}

// using strchr() Function

// #include <stdio.h>
// #include <string.h>

// int isVowel(char ch)
// {
//     // Make the list of vowels
//     char vowels[] = "aeiouAEIOU";
//     return (strchr(vowels, ch) != NULL);
// }

// int main()
// {
//     if (isVowel('a'))
//         printf("a is vowel\n");
//     else
//         printf("a is consonant\n");
//     return 0;
// }