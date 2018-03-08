#include <stdio.h>

int main(void)
{
	int i = 0;
	char word[] = {'H', 'e', 'l', 'l', 'o', '!'};
	for (i=0; i < sizeof(word)/sizeof(char);i++){
		printf("%c", word[i]);
	}
	printf("\n");
	char str[] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
//	char str[] = {'H', 'e', 'l', 'l', 'o', '!', 0};
	for (i=0; i < sizeof(str)/sizeof(char);i++){
		printf("%c", str[i]);
	}
	printf("\n");
	
	return 0;
} 





