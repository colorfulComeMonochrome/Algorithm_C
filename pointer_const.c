#include <stdio.h>

int mian()
{
	int i = 0;
	int *const q = &i;
	
	printf("%d\n", i);
	
	//
	int i;
	//ǰ����  const��*ǰ  ��ʾָ��ָ���ֵ�����޸� 
	const int* p1 = &i;
	int const* p2 = &i;
	//������  const��*��  ��ʾָ�뱾�����޸� ָ�벻��ָ��������ַ
	//  
	int *const p3 = &i;
	
	
	
	
	return 0;
}










 
