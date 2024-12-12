#include <stdio.h>

int main() 
{
    char list[100];
    int dem = 0;
    int i = 0;

    printf("Hay nhap vao mot chuoi: ");
    fgets(list, sizeof(list), stdin);

    while (list[i] != '\0') {
        if ((list[i] >= 'a' && list[i] <= 'z') || (list[i] >= 'A' && list[i] <= 'Z')) {
            dem++;
        }
        i++;
    }

    printf("So ky tu la chu cai trong chuoi la: %d\n", dem);

    return 0;
}
