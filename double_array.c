#include <stdio.h>

int main()
{
	int n[5];
	int i,j;
	
	for (i=0;i<5;i++)
	{
		n[i] = i + 28;
	}
	
	for (j=0;j<5;j++)
	{
		printf("element[%d] = %d\n", j, n[j]);
	}
	
	double double_array[3] = {10.5, 2.6, 90.06};
	int x;
	for (x=0;x<3;x++)
	{
		/* %f��Ӧ����Ϊdouble���ͣ����%�������ĸ���ԣ�������д���*/
		printf("double:[%f]\n", double_array[x]);
	}
	
	
	return 0;
	
}















 
