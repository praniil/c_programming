#include<stdio.h>

int main() {
    int character;
    printf("Enter a character: ");
    character = getchar();
    putchar(character);
    char ch = 'a';
    putchar(ch);
    return 0;
}