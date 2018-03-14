#include <stdio.h>

int main(void)
{
	// "Hello"这个字符串定义时放在代码段 只可读不可写
	// 相当于 const char * s
	char * s = "Hello";
	char * s2 = "Hello";
	// 如果想要可以修改的字符串，需要如下定义:
	char s3[]  = "Hello";
	
	s3[0] = 'B';
	printf("s =%p\n", s);
	printf("s2=%p\n", s2);
	printf("%c\n", s[0]);
	printf("s3[0] = %c\n", s3[0]);
	
	
	return 0;
}








 
