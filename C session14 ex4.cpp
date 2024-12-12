#include <stdio.h>

int main() 
{
    char chuoi[] = "Nguyen Tuan Minh";
    char kyTu;
    int dem = 0;

    printf("Chuoi da khai bao: %s\n", chuoi);
    printf("Hay nhap vao mot ky tu de dem so lan xuat hien: ");
    scanf("%c", &kyTu);

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] == kyTu) {
            dem++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", kyTu, dem);

    return 0;
}
