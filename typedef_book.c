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
	strcpy(book.title, "C 语言教程");
	strcpy(book.author, "某个大牛");
	strcpy(book.subject, "C 语言教程内容");
	for (i=0; i<20; i++){
		book.book_page[i] = i+1;
	}
	
	book.book_id = 10001;
	
	printf("书标题: %s\n", book.title); 
	printf("书页码：%d\n", book.book_page[20]);
}















 
