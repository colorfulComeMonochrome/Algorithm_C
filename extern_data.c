#include <stdio.h>

extern int a, b;
extern int c;
extern float f;

int main()
{
	int a = 10; 
	int b = 20;
	int c;
	float f;
	
	c = a + b;
	printf("value of c : %d \n", c);
	
	f = 70.0 / 3.0;
	printf("value of f: %f\n", f);
}



