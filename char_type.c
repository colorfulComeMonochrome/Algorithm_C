#include <stdio.h>
#include <string.h>

//char greeting[6] = {'H', 'e', 'l','1','o', '\0'};

char greeting[5] = {'H', 'e', 'l','1','o'};
// �����������������   c�ڱ���ʱ���Զ����ַ�������ĩβ����'\0' 

int main(void)
{
	printf(greeting);
	
	printf("\n");
	
	printf("the lenth of the string: %d\n", strlen(greeting));
	
	printf("------------------------------------------------------\n");
	
	char str1[20] = "Python";
	char str2[20] = "Flask";
	char str3[20];
	int len;
	char *ptr;
	/*������strcpy(s1, s2)����s2��s1
			strcat(s1, s2)��s2ƴ�ӵ�s1��ĩβ 
			strlen(s1)����s1�ĳ��� 
			strcmp(s1, s2) ���s1=s2 ����0   s1<s2  ����<0  s1>s2 ����>0
			strchr(s1, ch) ����һ��ָ��  ָ��s1���ַ�ch��һ�γ��ֵ�λ�� 
			strstr(s1, s2) ����һ��ָ��  ָ��s1��s2��һ�γ��ֵ�λ�� 
	*/
	/*strcpy(str3, str1);
	printf("str3: %s\n", str3);
	strcat(str3, str2);
	printf("cat str3: %s\n", str3);
	len = strlen(str3);
	printf("the lenth of str3: %d\n", len);
	len = strcmp(str1, str2);
	printf("if s1 = s2 : %d\n", len);
	*/
	/*len = strcmp(str2, str2);
	printf("if s1 = s2 : %d\n", len);
	*/
	// printf(str1);
	//len = strchr(str1, 'th');
	//printf("strchr: %d\n", len);
	
	str2[20] = 'on';
	ptr = strstr(str1, str2);
	printf("%s\n", ptr);
	
	return 0;
	
	
	
	
	
}















