#include <stdio.h> 
#include <stdlib.h>
	typedef struct {
	int Data[x];
	int Last = Data[x];
		
	}List;


List *MakeEmpty()
{

	
	
	List *PtrL;
	PtrL = (List *)malloc(sizeof(List));
	PtrL->Last = -1;
	return PtrL;
}

int main()
{
	int i;
	int x = 50;
	List list1(x);
	for (i=0; i<x;i++){
		list1.Data[i] = rand();
	}
	
	for (i=0; i<x;i++){
		printf("list1[%d]: %d\n", i, list1.Data[i]);
	}
	
} 
















