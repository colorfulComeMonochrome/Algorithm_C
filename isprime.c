#include  <stdio.h>
// �������� ��һ��  ѭ����2��x ����û���ܹ���������
//  �ڶ���   �޳�ż��
//  ������   ѭ����ƽ�����Ϳ���
//  ���Ĳ�   ������ѭ����ƽ���� 


// ���� ������  ��xΪ2   ��2x  3x  4x .. ֱ��ax<n  �����Ϊ������
//  ��x = ��һ��û�����Ϊ �������� ֵ �ظ���һ��  ֱ��������������� 
int main()
{
	int x;
	int s;
	scanf("%d", &x);
	s = isPrime(x);
	if (s == 1){
		printf("%d������\n", x);
	} else {
		printf("%d��������\n", x);
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














 
