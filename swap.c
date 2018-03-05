#include <stdio.h>
void swap(int *pa, int *pb);
int main()
{
	int a = 5;
	int b = 20;
	
	swap(&a, &b);
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	
	
	return 0;
}
void swap(int *pa, int *pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
	
}









