#include <stdio.h>

// ʹ��%p�����ַ 
// C���Զ�ջ���ڴ�ռ�������Զ����µ� 
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


 
