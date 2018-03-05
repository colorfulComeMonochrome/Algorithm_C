#include <stdio.h>

// 使用%p输出地址 
// C语言堆栈的内存空间分配是自顶向下的 
int main()
{
	int i = 0;
//	printf("0x%x\n", &i);
	int p;
//	p = &i;
	p = (int)&i;

	printf("%p\n", &i);
	printf("0x%x\n", p);
	
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(&i));
	return 0;
}


 
