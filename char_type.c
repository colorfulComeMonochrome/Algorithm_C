#include <stdio.h>
#include <string.h>

//char greeting[6] = {'H', 'e', 'l','1','o', '\0'};

char greeting[5] = {'H', 'e', 'l','1','o'};
// 上述两种情况都可以   c在编译时会自动在字符串常量末尾加上'\0' 

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
	/*方法：strcpy(s1, s2)复制s2到s1
			strcat(s1, s2)将s2拼接到s1的末尾 
			strlen(s1)返回s1的长度 
			strcmp(s1, s2) 如果s1=s2 返回0   s1<s2  返回<0  s1>s2 返回>0
			strchr(s1, ch) 返回一个指针  指向s1中字符ch第一次出现的位置 
			strstr(s1, s2) 返回一个指针  指向s1中s2第一次出现的位置 
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















