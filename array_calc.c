#include <stdio.h>
int main()
{
	int a[] = {2,3,5,7,11,15,17,42,1645};

//	int a[9] = {2};

// 适合数组比较稀疏 
//	int a[9] = {[1]=2, [4]=6,8};
	
//	int a[] = {[1]=2, [4]=6,8};
	int i;
	int x;
	int loc;
	for (i=0; i<sizeof(a)/sizeof(a[0]); i++){
		printf("%d\t", a[i]); 
	}
	printf("\n");
	// %d 有符号10进制整型   %u  无符号10进制整型   %lu 无符号长整型整数 
	printf("%lu\n", sizeof(a));
	printf("%lu\n", sizeof(a[0]));
	printf("请输入一个数字：\n");
	scanf("%d", &x);
	
	loc = search(x, a, sizeof(a)/sizeof(a[0]));
	if (loc != -1){
		printf("%d在第%d个位置上\n", x, loc);
	} else {
		printf("%d不存在\n", x);
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

















 
