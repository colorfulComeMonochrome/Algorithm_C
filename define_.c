#include <stdio.h>

int main()
{
	int s = 16;
	int x = 80;
	// ����ָ�����ȷд���� 
	int *a;
	a = &s;
	//  ֻ��ͬʱ���岢��ֵʱһ��д������ȷ 
	int *b = &s;
	
	int **c = &x;
	
	//printf("%d\n", *a);
	printf("%p\n", a);
//	printf("%p\n", b);
//	printf("%d\n", *b);
	
	//printf("%d\n", **c);
	
	printf("%p\n", &*a);
	
	int *p;
	p = &*a;
	
	printf("%p\n", p);
	printf("%d\n", *p);
}











 
