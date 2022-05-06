#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//배열을 받으려면 포인터 사용 
//배열을 매개변수로받는 함수는 배열의 크기를 같이 받음

char* strchr(const char* str, const char ch)
{
	while(*str == '\0')
	{
		if (*str == ch)
		{
			return (char*)str;
		}
		++str;
	}
	return NULL;
}

int main(void)
{
	const char* str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam auctor elementum nulla, ut euismod dui lacinia et. Etiam a hendrerit lacus. Pellentesque semper dapibus enim, ut luctus tortor egestas ut. Etiam elementum quam sit amet metus pellentesque, sit amet pulvinar sem lacinia. Mauris in scelerisque tortor, vitae blandit mauris. Ut non eros ultrices, eleifend urna laoreet, aliquet augue. Cras vitae lacus at urna tincidunt suscipit in ut nisl. Donec feugiat condimentum diam quis tempor. Integer mauris tellus, pulvinar malesuada lacus eget, scelerisque tincidunt enim. Suspendisse dictum nunc leo, nec condimentum sem porttitor ac. Fusce rhoncus orci elit, eget gravida felis venenatis at. Nulla quis est ultricies, interdum ex eget, elementum neque.";
	const char ch = "w";
	
	printf("%c", strchr(str,ch));


	return 0;

}















//
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main(void)
//{
//	int a = 10, b = 20;
//	Swap(&a, &b);
//
//	printf("%d %d", a, b);
//	return 0;
//}

//int islower(char ch)
//{
//	if ('a' <= ch && ch <= 'z')
//	{
//		return 1;
//	}
//
//	else
//	{
//		return 0;
//	}
//}
//
//int isupper(char ch)
//{
//	if ('A' <= ch && ch <= 'Z')
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//char tolower(char ch)
//{
//	if ('A' <= ch && ch <= 'Z')
//	{
//		
//		return ch += 32;
//	}
//
//	else
//	{
//		return ch;
//	}
//}
//char toupper(char ch)
//{
//	if ('a' <= ch && ch <= 'z')
//	{
//		
//		return ch -= 32;
//	}
//	else
//	{
//		return ch;
//	}
//}
//
