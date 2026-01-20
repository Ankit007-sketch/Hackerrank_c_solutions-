
#include <stdio.h>

int main() {   
    char ch;
    char s[100];
    char sen[100];

    // Read inputs
    scanf("%c", &ch);       // Read a single character
    scanf("%s", s);         // Read a string (no spaces)
    getchar();              // Consume the newline left by previous scanf
    fgets(sen, sizeof(sen), stdin); // Read a sentence (with spaces)
   
    // Print outputs
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);

    return 0;
}
