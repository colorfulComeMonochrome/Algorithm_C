#include <stdio.h>
//
//int main()
//{
//	int x;
//	int i;
//	printf("���������ָ���\n");
//	scanf("%d", &x);
//	int arr[x];
//	printf("������%d������\n", x);
//	for (i=0; i<x; i++){
//		scanf("%d", &arr[i]);
//	}
//	for (i=0; i<x; i++){
//		printf("%d\n", arr[i]);
//	}
//}

int main(void)
{
	// ����const�������в��ɱ��� 
	const int number = 10;
	int x;
	int count[number];
	int i;
	for (i=0; i<number; i++){
		count[i] = 0;
	}
	scanf("%d", &x);
	while (x != -1){
		if (x>=0 && x<=9 ){
			count[x] ++;
		}		
		scanf("%d", &x);
	}
	for (i=0; i<number; i++){
		printf("%d���ֵĴ���Ϊ%d��\n", i, count[i]);
	}
	return 0;
}














