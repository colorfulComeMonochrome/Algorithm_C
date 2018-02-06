#include <stdio.h>
#include <string.h>
int main()
{
	char str[10] = "I Love C";
	char *ptrl_start;
	ptrl_start = &str[0];
	
	printf("%c\n", *ptrl_start);
	int index;
	printf("%d\n", &str[0]);
	printf("%d\n\n", ptrl_start);
	for (index=0;index<strlen(str);index++)
	{
		printf("µÚ%d¸ö×Ö·ûÊÇ£º %c \n", index + 1, *(ptrl_start + index));
	}
}
















