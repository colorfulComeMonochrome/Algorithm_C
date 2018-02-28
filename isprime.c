#include  <stdio.h>
// 求素数： 第一步  循环从2到x 找有没有能够整除的数
//  第二步   剔除偶数
//  第三步   循环到平方根就可以
//  第四步   用素数循环到平方根 


// 构造 素数表：  令x为2   将2x  3x  4x .. 直至ax<n  都标记为非素数
//  令x = 下一个没被标记为 非素数的 值 重复上一步  直至所有数尝试完毕 
int main()
{
	int x;
	int s;
	scanf("%d", &x);
	s = isPrime(x);
	if (s == 1){
		printf("%d是素数\n", x);
	} else {
		printf("%d不是素数\n", x);
	}
	return 0;
}
int isPrime(int x)
{
	int result = 1;
	int i;
	if ( x == 1 || (x % 2 == 0 && x != 2)){
		result = 0;
	}
	for ( i=3; i< sqrt(x); i+=2){
		if (x % i == 0){
			result = 0;
			break;
		}
	}
	return result;
}














 
