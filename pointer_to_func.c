#include <stdio.h>

int max(int x, int y)
{
	return x > y ? x : y;
}
int main(void)
{
	int (*ptr)(int, int) = &max; // maxǰ�� & ����ʡ�� 

	int a, b, c, d;
	printf("input 3 int please:");
	
	// sancf() ������stdio.h��  ���û�ָ���ĸ�ʽ�Ӽ����ϰ��������뵽ָ���ı���֮�� 
	// ���%d�м�û�з��ŷָ� ������ʱ�ÿո�/tab/enter�ָ�   ����зָ��� ������ָ����ָ� 
	scanf("%d %d %d", &a, &b, &c);
	
	printf("���������scanf����ֵ������:");
	int x, y, z;
	x = scanf("%d%d", &y, &z);
	printf("scanf����ֵΪ��%d\n", x);
	
	d = ptr(ptr(a, b), c);
	printf("��������ǣ�%d\n", d);
	
	
	return 0;
}



















