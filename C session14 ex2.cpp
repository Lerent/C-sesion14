#include <stdio.h>

int main() 
{
    char list[] = "Nguyen Tuan Minh";
    for (int i = 0; list[i] != '\0'; i++) {
        printf("%c ", list[i]);
    }

    return 0;
}

