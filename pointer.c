#include <stdio.h>

int main()
{
	int var1;
	double var2[12];
	
	/* &变量  返回该变量的地址   对应格式化为%p */
	printf("var1 address: %p\n", &var1);
	printf("var2 address: %p\n", &var2);
	
	
	
	int var = 20;
	int *ptr;
	
	ptr = &var;
	
	printf("address of var %p\n", &var);
	
	printf("address pointer pointed %p\n", ptr);
	
	printf("value of *ptr : %d\n", *ptr);
	
	int *ptr2 = NULL;
	
	printf("ptr2 的值为: %p\n", ptr2);
	return 0;
}


















