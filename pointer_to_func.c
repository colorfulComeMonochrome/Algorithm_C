#include <stdio.h>

int max(int x, int y)
{
	return x > y ? x : y;
}
int main(void)
{
	int (*ptr)(int, int) = &max; // max前的 & 可以省略 

	int a, b, c, d;
	printf("input 3 int please:");
	
	// sancf() 声明在stdio.h中  按用户指定的格式从键盘上把数据输入到指定的变量之中 
	// 如果%d中间没有符号分割 则输入时用空格/tab/enter分割   如果有分隔符 则输入分隔符分割 
	scanf("%d %d %d", &a, &b, &c);
	
	printf("请输入测试scanf返回值的数字:");
	int x, y, z;
	x = scanf("%d%d", &y, &z);
	printf("scanf返回值为：%d\n", x);
	
	d = ptr(ptr(a, b), c);
	printf("最大数字是：%d\n", d);
	
	
	return 0;
}



















