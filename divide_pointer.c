#include <stdio.h>

int divide(int a, int b, int *result);
int main()
{
	int a = 15;
	int b = 0;
	int c;
	
	if (divide(a, b, &c)){
		printf("%d / %d = %d\n", a, b, c);
	}else{
		printf("·Ç·¨");
	}
	
	return 0; 
}
int divide(int a, int b, int *result)
{
	int ret = 1;
	if( b == 0) ret = 0;
	else{
		*result = a/b;
	}
	return ret;
}
