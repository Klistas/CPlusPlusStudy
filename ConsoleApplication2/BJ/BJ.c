﻿#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void stars(int x, int y, int inNum)
{


	if ((x / 3 ^ (inNum - 1)) % 3 == 1 && (y / 3 ^ (inNum - 1)))
	{
		printf(" ");
	}
	else
	{
		printf("*");
	}






	return;
}

int main(void)
{
	int inNum;
	scanf_s("%d", &inNum);
	stars(inNum);

	return;
}





//void stars(int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("***");
//	}
//
//	if (n % 3 == 0)
//	{
//		printf("***\n");
//
//	}
//
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("* *");
//	}
//
//	if (n % 3 == 0)
//	{
//		printf("* *\n");
//
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("***");
//	}
//
//	if (n % 3 == 0)
//	{
//		printf("***\n");
//		return;
//
//	}
//
//	stars(n);
//
//	return;
//}








//honoi(int countOfDisk, int startPos, int viaPos, int targetPos)
//{
//
//
//
//
//
//
//
//}














//void tabCount(int n)
//{
//	for (int i = 0; i <= n; i++)
//	{
//		printf("____");
//	}
//	return;
//}
//
//
//
//
//void answer(int n)
//{
//	int count = 0;
//	if (n == count)
//	{
//		
//		
//		printf("\"재귀함수가 뭔가요 ?\"\n");
//		printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
//		printf("라고 답변하였지.\n");
//		return;
//	}
//
//
//	
//	printf("\"재귀함수가 뭔가요?\"");
//	printf("\"잘 들어보게.옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\"\n");
//	printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
//	printf("그의 답은 대부분 옳았다고 하네.그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\n");
//
//	count++;
//	
//	answer(n);
//	
//	printf("라고 답변하였지.\n");
//	
//
//	return ;
//}
//
//
//
//int main(void)
//{
//	int n;
//	scanf_s("%d", &n);
//	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
//	answer(n);
//	
//	
//	return 0;
//
//}






//
//어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.
//"재귀함수가 뭔가요?"
//"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.
//마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.
//그의 답은 대부분 옳았다고 하네.그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어."

//____"재귀함수가 뭔가요?"
//____"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.
//____마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.
//____그의 답은 대부분 옳았다고 하네.그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어."

//________"재귀함수가 뭔가요?"
//________"재귀함수는 자기 자신을 호출하는 함수라네"
//________라고 답변하였지.

//____라고 답변하였지.

//라고 답변하였지.



















//int main(void)
//{
//	int staticPay = 0;
//	int dynamicPay = 0;
//	int sellingPay = 0;
//	int sell = 0;
//	
//	scanf_s("%d %d %d", staticPay, dynamicPay, sellingPay);
//	
//	sell = staticPay / (sellingPay - dynamicPay);
//	if (sell > 0)
//	{
//		printf("%d", sell + 1);
//	}
//	else
//	{
//		printf(-1);
//	}
//	return 0;
//
//}














//int selfNum(int n)
//{
//	int selfNum = (n + (n / 1000) + ((n % 1000) / 100)
//		+ ((n % 100) / 10) + (n % 10));
//	return selfNum;
//}
//
//
//int main(void)
//{
//	int selfNum1 = 0;
//	
//	for (int i = 0; i < 10000; i++)
//	{
//		
//		for (int j = 0; j < 10000; j++)
//		{
//			if (selfNum(j) != i)
//			{
//				printf("%d\n", i);
//				
//			}
//
//			
//		}
//		
//
//	}
//
//
//
//	return 0;
//
//
//
//
//
//}


//int main(void)
//{
//	FILE* fp = NULL;
//	/*if (0 != fopen_s(&fp, "Metaverse.txt", "w"))
//
//	{
//		printf("오류 발생함.");
//			return 1;
//	}*/
//	if (0 != fopen_s(&fp, "Metaverse1", "wb"))
//	{
//		printf("오류 발생함.");
//
//		return 1;
//	}
//		
//
//	struct Student
//	{
//		int Age;
//		enum { A, B, O, AB } BloodType;
//		char Name[24];
//	};
//
//	struct Student s = { 28, A, "YongJoonHeon" };
//	
//	if (1 != fwrite(&s, sizeof(s), 1, fp))
//	{
//		printf("오류 발생함.");
//		fclose(fp);
//		return 1;
//	}
//	
//
//	fclose(fp);
//
//	if (0 != fopen_s(&fp, "Metaverse1", "rb"))
//	{
//		printf("오류 발생함.");
//
//		fclose(fp);
//
//		return 1;
//	}
//
//	struct Student s2 = { 0 };
//	if (1 != fread(&s2, sizeof(s2), 1, fp))
//	{
//		printf("오류 발생함.");
//
//		fclose(fp);
//
//		return 1;
//	}
//
//	printf("나이 : %d, 혈액형 : %d, 이름 : %s\n", s2.Age, s2.BloodType, s2.Name);
//
//	fclose(fp);
//
//
//
//
//
//	return 0;
//}