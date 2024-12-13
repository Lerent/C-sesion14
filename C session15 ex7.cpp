#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
	char text[] = "Hello my gmail is test123@gmail.com";
	int letter;
	int digits;
	int specials;
	for(int i = 0; text[i] != '\0'; i++) {
		if(isalpha(text[i])) {
			letter++;
		} else if(isdigit(text[i])) {
			digits++;
		} else if(!isspace(text[i])) {
			specials++;
		}
	}
	printf("So ky tu la chu cai: %d\n", letter);
    printf("So ky tu la chu so: %d\n", digits);
    printf("So ky tu dac biet: %d\n", specials);
    
    return 0;
}
