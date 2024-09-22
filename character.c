#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 100  // Define MAX_LEN to be 100

int main() {
    char ch;            // To store the character
    char str[MAX_LEN];  // To store the string
    char sen[MAX_LEN];  // To store the sentence

    // Reading input
    scanf("%c", &ch);            // Reading the character
    scanf("%s", str);            // Reading the string
    getchar();                   // To consume the newline character left by scanf
    scanf("%[^\n]%*c", sen);     // Reading the sentence until newline is encountered

    // Printing the outputs
    printf("%c\n", ch);          // Printing the character
    printf("%s\n", str);         // Printing the string
    printf("%s\n", sen);         // Printing the sentence

    return 0;
}
