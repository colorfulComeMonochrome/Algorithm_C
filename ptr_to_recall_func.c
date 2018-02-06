#include <stdio.h>
#include <stdlib.h>
/* 传入3个参数： 
	1： 数组(要传数组的指针，不能直接传数组)   
	2： 数组大小 
	3:  函数指针 
size_t 是一种数据类型，近似于无符号整型，但容量范围一般大于 int 和 unsigned。这里使用 size_t 是为了保证 arraysize
变量能够有足够大的容量来储存可能大的数组。
但凡不涉及负值范围的表示size取值的，都可以用size_t；比如array[size_t]。
*/
/*函数传参：
	数组名是一个地址，是数组的首地址，因此用数组名作为函数的参数
	进行数据传递时，执行的是地址传递方式。
	所谓地址传递，顾名思义实参传递的不是数据本身，而是数据存在的地址。 

*/
void insert_to_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
	int i;
	for (i=0;i<arraySize;i++)
		array[i] = getNextValue();
}
int getRandomValue(void)
{
	return rand();  // rand() 函数需要调用stdlib.h包 
}

int main(void)
{
	int myarray[10];
	insert_to_array(myarray, 10, getRandomValue);
	int i;
	for (i=0;i<10;i++){
		printf("%d  ", myarray[i]);
	}
	printf("\n");
	return 0;
}















