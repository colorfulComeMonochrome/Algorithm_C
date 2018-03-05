#include <stdio.h>

// 定义一个指针   指针的值是所指变量的地址
// 指针也有自己的地址 
int main()
{
	int i = 60;
	int* p = &i;
	
	printf("%p\n", p);
	printf("%p\n", &p); 
	
	func(*p);
	return 0;
}
void func(int *p)
{
	printf("%d\n", p);
}







