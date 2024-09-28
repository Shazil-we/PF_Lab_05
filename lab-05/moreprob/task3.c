#include <stdio.h>
int main() {
    char character;
    printf("Enter a single character: ");
    scanf("%s" ,  &character);
    int key = 12563;
    char e_character = character ^ key ;
    char d_character = e_character ^ key;
    printf("Original character: %s\n", character);
    printf("Encrypted character: %s\n", e_character);
    printf("Decrypted character: %s\n", d_character);
    return 0;
}
