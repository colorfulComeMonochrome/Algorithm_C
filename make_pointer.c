#include <stdio.h>

// ����һ��ָ��   ָ���ֵ����ָ�����ĵ�ַ
// ָ��Ҳ���Լ��ĵ�ַ 
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







