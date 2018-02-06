#include <stdio.h>
#include <stdlib.h>
/* ����3�������� 
	1�� ����(Ҫ�������ָ�룬����ֱ�Ӵ�����)   
	2�� �����С 
	3:  ����ָ�� 
size_t ��һ���������ͣ��������޷������ͣ���������Χһ����� int �� unsigned������ʹ�� size_t ��Ϊ�˱�֤ arraysize
�����ܹ����㹻���������������ܴ�����顣
�������漰��ֵ��Χ�ı�ʾsizeȡֵ�ģ���������size_t������array[size_t]��
*/
/*�������Σ�
	��������һ����ַ����������׵�ַ���������������Ϊ�����Ĳ���
	�������ݴ���ʱ��ִ�е��ǵ�ַ���ݷ�ʽ��
	��ν��ַ���ݣ�����˼��ʵ�δ��ݵĲ������ݱ����������ݴ��ڵĵ�ַ�� 

*/
void insert_to_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
	int i;
	for (i=0;i<arraySize;i++)
		array[i] = getNextValue();
}
int getRandomValue(void)
{
	return rand();  // rand() ������Ҫ����stdlib.h�� 
}

int main(void)
{
	int myarray[10];
	insert_to_array(myarray, 10, getRandomValue);
	int i;
	for (i=0;i<10;i++){
		printf("%d  ", myarray[i]);
	}
	printf("\n");
	return 0;
}















