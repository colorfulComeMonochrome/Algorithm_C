#include <stdio.h>
int main()
{
	int a[] = {2,3,5,7,11,15,17,42,1645};

//	int a[9] = {2};

// �ʺ�����Ƚ�ϡ�� 
//	int a[9] = {[1]=2, [4]=6,8};
	
//	int a[] = {[1]=2, [4]=6,8};
	int i;
	int x;
	int loc;
	for (i=0; i<sizeof(a)/sizeof(a[0]); i++){
		printf("%d\t", a[i]); 
	}
	printf("\n");
	// %d �з���10��������   %u  �޷���10��������   %lu �޷��ų��������� 
	printf("%lu\n", sizeof(a));
	printf("%lu\n", sizeof(a[0]));
	printf("������һ�����֣�\n");
	scanf("%d", &x);
	
	loc = search(x, a, sizeof(a)/sizeof(a[0]));
	if (loc != -1){
		printf("%d�ڵ�%d��λ����\n", x, loc);
	} else {
		printf("%d������\n", x);
	}
}
int search(int key, int a[], int lenth){
	int result = -1;
	int i;
	for (i=0; i<lenth; i++){
		if (key == a[i]){
			result = i + 1;
			return result;
		}
	}
	return result;
}

















 
