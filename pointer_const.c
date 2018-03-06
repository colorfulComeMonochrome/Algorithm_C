#include <stdio.h>

int mian()
{
	int i = 0;
	int *const q = &i;
	
	printf("%d\n", i);
	
	//
	int i;
	//前两种  const在*前  表示指针指向的值不能修改 
	const int* p1 = &i;
	int const* p2 = &i;
	//第三种  const在*后  表示指针本身不能修改 指针不能指向其他地址
	//  
	int *const p3 = &i;
	
	
	
	
	return 0;
}










 
