#include <stdio.h>
//
//int main()
//{
//	int x;
//	int i;
//	printf("请输入数字个数\n");
//	scanf("%d", &x);
//	int arr[x];
//	printf("请输入%d个数字\n", x);
//	for (i=0; i<x; i++){
//		scanf("%d", &arr[i]);
//	}
//	for (i=0; i<x; i++){
//		printf("%d\n", arr[i]);
//	}
//}

int main(void)
{
	// 定义const常量具有不可变性 
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
		printf("%d出现的次数为%d次\n", i, count[i]);
	}
	return 0;
}














