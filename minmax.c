#include <stdio.h>
// ָ���Ӧ�ó���1��
// ͨ��ָ�뽫������Ϊ������ػ��� 
void minmax(int a[], int len, int *pmin, int *pmax);
int main()
{
	int a[] = {10, 32, 4, 67, 76, 44, 88, 155, 23, 17, 34,};
	int min, max;
	
	minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);
	
	printf("min = %d, max = %d\n", min, max);
	
	return 0;
}
void minmax(int a[], int len, int *pmin, int *pmax)
{
	int i;
	*pmin = *pmax = a[0];
	for(i = 0; i< len; i++){
		if (a[i] < *pmin){
			*pmin = a[i];
		}
		if (a[i] > *pmax){
			*pmax = a[i];
		}
	}
}









