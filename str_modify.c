#include <stdio.h>

int main(void)
{
	// "Hello"����ַ�������ʱ���ڴ���� ֻ�ɶ�����д
	// �൱�� const char * s
	char * s = "Hello";
	char * s2 = "Hello";
	// �����Ҫ�����޸ĵ��ַ�������Ҫ���¶���:
	char s3[]  = "Hello";
	
	s3[0] = 'B';
	printf("s =%p\n", s);
	printf("s2=%p\n", s2);
	printf("%c\n", s[0]);
	printf("s3[0] = %c\n", s3[0]);
	
	
	return 0;
}








 
