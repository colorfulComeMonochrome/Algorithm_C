#include <stdio.h>

void sum(int begin, int end)
{
	int i;
	int sum = 0;
	for (i=begin; i<= end; i++){
		sum += i;
	}
	printf("%d��%d�ĺ�Ϊ%d\n", begin, end, sum);
}
void aab(); 

int main()
{
	sum(1, 10);
	sum(20, 30);
	sum(35, 45);
	//  ����д��   aab�� 
	aab();
	printf("������aab");
	return 0;
}
void aab(void)
{
	printf("hello C\n");
}












