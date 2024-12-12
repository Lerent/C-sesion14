#include <stdio.h>
#include <string.h>

int main() 
{
    char list[] = "Nguyen Tuan Minh";
    int len = strlen(list);  
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", list[i]);
    }

    return 0;
}
