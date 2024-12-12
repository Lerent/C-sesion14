#include <stdio.h>

int main() 
{
    char list[100];
    int dem = 0;
    int i = 0;
    printf("Hay nhap vao chuoi: ");
    fgets(list, sizeof(list), stdin);
    while (list[i] != '\0') {
        if ((i == 0 || list[i - 1] == ' ') && list[i] != ' ') {
            dem++;
        }
        i++;
    }
    printf("So tu trong chuoi la: %d\n", dem);

    return 0;
}
