#include <stdio.h>
#include <string.h>

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};


void printBook(struct Books book)
{
	printf("Book title: %s\n", book.title);
	printf("Book auther: %s\n", book.author);
	printf("Book subject: %s\n", book.subject);
	printf("Book title: %d\n", book.book_id);
}
// 带*修饰的变量表示一个指针  如： *ptrl   
// ptrl 指的是所指元素的地址(16进制)   *ptrl 代表这个地址存储的具体数据 
void printBookPointer(struct Books *book)
{
	printf("Book title: %s\n", book->title);
	printf("Book auther: %s\n", book->author);
	printf("Book subject: %s\n", book->subject);
	printf("Book title: %d\n", book->book_id);
}




int main()
{
	struct Books Book1;
	struct Books Book2;
	
	strcpy(Book1.title, "C Programming");
	strcpy(Book1.author, "BIG BULL");
	strcpy(Book1.subject, "C Programming");
	Book1.book_id = 1001;
	
	strcpy(Book2.title, "Python web");
	strcpy(Book2.author, "BIG BULL2");
	strcpy(Book2.subject, "Python Flask");
	Book2.book_id = 1002;
	
	printf("Book 1 title: %s\n", Book1.title);
	
	printBook(Book1);
	printBook(Book2);
	
	
	printBookPointer(&Book1);
	printBookPointer(&Book2);
	
//	struct Books *struct_pointer;
	
//	struct_pointer = &Book1;
//	struct_pointer -> title;
	
	return 0;	
	
	
}

















