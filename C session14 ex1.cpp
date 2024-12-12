#include <stdio.h>

int main() 
{
    char list[100];
    printf("Hay nhap mot chuoi bat ki: ");
    fgets(list, sizeof(list), stdin);
    int i = 0;
    while (list[i] != '\0') {
        if (list[i] == '\n') {
            list[i] = '\0';
            break;
        }
        i++;
    }
    int length = 0;
    while (list[length] != '\0') {
        length++;
    }
    printf("Chuoi ban vua nhap la: %s\n", list);
    printf("Do dai cua chuoi la: %d\n", length);

    return 0;
}

