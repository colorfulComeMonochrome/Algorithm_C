#include <stdio.h>

int main(void)
{
	char ac[] = {0,1,2,3,4,5,6,7,8,9,};
	// д���� char *p = &ac[0] ��ʾ����˼��ͬ 
	char *p = ac;
	printf("p  = %p\n", p);
	printf("p+1= %p\n", p+1);
	
	//*p -> ac[0]
	//*(p+1) -> ac[1]
	// *����һ����Ŀ�����  �����ȼ����� + �� 
	int ai[] = {0,1,2,3,4,5,6,7,8,9,};
	int *q = ai;
	printf("q  = %p\n", q);
	printf("q+1= %p\n", q+1);
	
	double aj[] = {0,1,2,3,4,5,6,7,8,9,};
	double *r = aj;
	printf("r  = %p\n", r);
	printf("r+1= %p\n", r+1);
	
	
	// ʹ��ָ���������
	char ad[] = {0,1,2,3,4,5,6,7,8,9,-1};
//	for ( p = ad; *p!=-1 ; p++){
//		printf("%d\n", *p);
//	}
	char *pr = ad;
	while(*pr != -1){
		printf("%d\n", *pr++);
	}
	return 0;
}

 
// *p++
// ++�����ȼ���*�� 
// ȡ��P��ָ���Ǹ�������  ֮��˳���p�Ƶ���һ��λ��ȥ 











