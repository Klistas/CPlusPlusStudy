#include <stdio.h>
#include <assert.h>

//int notSelfNum(int n)
//{
//	int selfNum = (n + (n / 1000) + ((n % 1000) / 100)
//		+ ((n % 100) / 10) + (n % 10));
//	return selfNum;
//}




int main(void)
{
	FILE* fp = NULL;
	/*if (0 != fopen_s(&fp, "Metaverse.txt", "w"))

	{
		printf("오류 발생함.");
			return 1;
	}*/
	if (0 != fopen_s(&fp, "Metaverse1", "wb"))
	{
		printf("오류 발생함.");

		return 1;
	}
		

	struct Student
	{
		int Age;
		enum { A, B, O, AB } BloodType;
		char Name[24];
	};

	struct Student s = { 28, A, "YongJoonHeon" };
	
	if (1 != fwrite(&s, sizeof(s), 1, fp))
	{
		printf("오류 발생함.");
		fclose(fp);
		return 1;
	}
	

	fclose(fp);

	if (0 != fopen_s(&fp, "Metaverse1", "rb"))
	{
		printf("오류 발생함.");

		fclose(fp);

		return 1;
	}

	struct Student s2 = { 0 };
	if (1 != fread(&s2, sizeof(s2), 1, fp))
	{
		printf("오류 발생함.");

		fclose(fp);

		return 1;
	}

	printf("나이 : %d, 혈액형 : %d, 이름 : %s\n", s2.Age, s2.BloodType, s2.Name);

	fclose(fp);





	return 0;
}
