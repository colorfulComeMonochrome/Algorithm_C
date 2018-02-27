#include <stdio.h>

int main()
{
	int s = 16;
	int x = 80;
	// 定义指针的正确写法： 
	int *a;
	a = &s;
	//  只有同时定义并赋值时一下写法才正确 
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











 
