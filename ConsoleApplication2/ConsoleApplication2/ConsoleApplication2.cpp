#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//strcpy()
//char strcpy(char* destination, const char* src)
//{
//	char word = *destination;
//	for (int i = 0;i != '\0'; i++)
//	{
//		destination[i] = src[i];
//		
//	}
//		return word;
//	
//}
//int main(void)
//{
//	char* destination[15] = {  };
//	char src[10] = "Hello";
//	
//	printf("%15s", strcpy(*destination, src));
//	return 0;
//
//}


//strcat()
//char* strcat(char* destination, const char* src)
//{
//    char* word = destination;
//    while (*destination) 
//    { 
//        destination++; 
//    }
//    while (*src)
//    {
//        *destination++ = *src++;
//    }
//    *destination = '\0';
//    return word;
//}
//int main()
//{
//   
//    char str1[20] = "Hello";
//    char str2[] = "World";
//    
//
//   
//    strcat(str1, str2);
//    printf("%s\n", str1);
//
//   
//
//    return 0;
//}

//strlen()
//
//int strlen(const char* string)
//{
//	int count = 0;
//	while (1)
//	{
//		count++;
//			if (string[count] == '\0')
//			{
//				break;
//			}
//	}
//	return count;
//}
//
//int main(void)
//{
//	char string[10] = "Helloe";
//	
//	printf("%d", strlen(string));
//	return 0;
//}
// 

//strcmp()
//int strcmp(const char* string1, const char* string2)
//{
//	int i = 0;
//	while(1)
//	{
//		
//		if (string1[i] == string2[i])
//		{
//			i++;
//			if (string1[i] == '\0')
//			{
//				return 0;
//				break;
//			}
//		}
//		else
//		{
//			
//			return 1;
//			break;
//		}
//	}
//}
//int main(void)
//{
//	char string1[10] = "add";
//	char string2[10] = "add";
//	char string3[10] = "ads";
//	printf("%d", strcmp(string1, string2));
//	printf("%d", strcmp(string2, string3));
//	return 0;
//
//}

//strchr()
//
//char strchr(const char* string, char character)
//{
//	int count = 1;
//	while (count != '\0')
//	{
//		count++;
//		if (string[count-1] == character)
//		{
//			return count;
//			break;
//		}
//		
//	}
//}
//int main(void)
//{
//	char string[30] = "Ijustwannadance";
//	printf("%d", strchr(string, 'j'));
//	return 0;
//}

//strrchr()
//
//int strlen(const char* string)
//{
//	int count = 0;
//	while (1)
//	{
//		count++;
//			if (string[count] == '\0')
//			{
//				break;
//			}
//	}
//	return count;
//}
// 
//
//char strrchr(const char* string, char character)
//{
//	int len = strlen(string);
//	
//	for (int count = len - 1; count > 0; count--)
//	{
//		
//		if (string[count - 1] == character)
//		{
//			return count;
//			break;
//		}
//
//	}
//}
//int main(void)
//{
//	char string[30] = "Ijustwannadance";
//	printf("%d", strrchr(string, 'j'));
//	return 0;
//}

//strstr()
//char strstr(const char* string, char* character)
//{
//	int count = 1;
//	while (count != '\0')
//	{
//		count++;
//		if (string == character)
//		{
//			return count;
//			break;
//		}
//		
//	}
//}
//int main(void)
//{
//	char string[30] = "Ijustwannadance";
//	char string2[10] = "dance";
//	printf("%d", strstr(string, string2));
//	return 0;
//}
































//int main(void)
//{
//	int N = 0;
//	scanf("%d", N);
//
//	int count[26] = { 0 };
//	int coNum = 0;
//	for (int i = 0; i < N; i++)
//	{
//		char groupWord[101] = { 0 };
//		scanf("%100s", groupWord);
//		char check = '0';
//		for (int j = 0; j != '\0'; j++)
//		{
//			if (check != groupWord[j])
//			{
//				check = groupWord[j];
//				count[groupWord[j] - 'a'] += 1;
//			
//			}
//			if (count[groupWord[j] - 'a'] == 2)
//			{
//				coNum -= 1;
//				break;
//			}
//		}
//	}
//	printf("%d", count);
//
//
//
//	return 0;
//}



