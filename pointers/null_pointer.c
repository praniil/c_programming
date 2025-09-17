#include<stdio.h>

int main() {
    int value;
    while(1) {
        printf("enter the value: \n");
        scanf("%d", &value);
        int *pointer = &value;
        printf("%p\n", (void *)pointer);
        if(pointer == NULL) {
            printf("Pointer doesnot point to anythying");
        } else if (*pointer < 0) {
            break;
        } else {
            printf("Value pointed by pointer: %d\n", *pointer);
        }
    }
    return 0;
}