#include <stdio.h>
#include <string.h>

typedef struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
	int book_page[20];
}Book;


int main()
{
	Book book;
	int i;
	strcpy(book.title, "C ���Խ̳�");
	strcpy(book.author, "ĳ����ţ");
	strcpy(book.subject, "C ���Խ̳�����");
	for (i=0; i<20; i++){
		book.book_page[i] = i+1;
	}
	
	book.book_id = 10001;
	
	printf("�����: %s\n", book.title); 
	printf("��ҳ�룺%d\n", book.book_page[20]);
}















 
