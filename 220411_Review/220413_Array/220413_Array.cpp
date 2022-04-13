


#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{   /*
	실습.
			int input_key = _getch();
	char input_key_char = _getch();
	cout << (int)input_key_char << endl;

	float test_float = 5.4f;
			1. A ~ Z 키 중에 하나를 정답으로 설정한다.
			유저는 한 개의 키를 입혁해서 설정된 값을 맞춘다.
			유저가 입력한 키와 설정된 값이 맞으면 승리, 프로그램 종료
			틀리면 남은 기회를 보여주고 5번 틀리면 정답을 알려주고 게임오버.

			+ 틀릴 때마다 정답 알파벳이 입력된 알파벳 앞인지 뒤인지 힌트를 준다.cout << (char)correct << endl;

			++ 입력된 값이 대소문자 구분없이 처리될 수 있도록 수정해보자. 65 - 90 97 - 122

			콘솔용 탈출게임.
			1. 10 * 10 크기의 맵을 구성한다. (2차원 배열)
				#O########
				##########
				##########
				##########
				##########
				##########
				##########
				#######E##
				##########
				##########
				
			2. 플레이어가 존재한다.(0,0)

			3. 탈출지점이 존재한다.(0,0) 제외 랜덤 설정

			4. WASD 키입력을 통해 플레이어를 이동시킨다.

			5. 플레이어가 탈출지점에 도달하면 "탈출에 성공했습니다!" 프로그램 종료.

			※ 화면갱신 명령어 : system("cls");

	*/

	/*srand(time(NULL));
	char answerNum;
	int correctNum = ((rand() % 26) + 65);
	
	cout << "알파벳 맞추기 게임에 오신것을 환영합니다!" << endl << endl << "정답을 입력해주세요!" << endl << endl;


	for (int i = 5; i > 0; i--)
	{
		cout << "미리보는 정답 : " << (char)correctNum << endl << endl;
		answerNum = _getch();
		
		cout << "정답 : " << answerNum << endl << endl;

		if (answerNum < 95)
		{
			if (correctNum == answerNum)
			{
				cout << "승리하셨습니다!" << endl;
				break;
			}

			else if (i == 1)
			{
				cout << "GAME OVER... 정답은 " << (char)correctNum << "였습니다." << endl << endl;
			}


			else if (correctNum != answerNum)
			{
				cout << "오답입니다..." << i - 1 << "번 기회 남으셨습니다." << endl << endl;

				if (answerNum > correctNum)
				{
					cout << "HINT! 정답은 " << answerNum << "보다 앞에 있습니다." << endl << endl;
				}

				else if (answerNum < correctNum)
				{
					cout << "HINT! 정답은 " << answerNum << "보다 뒤에 있습니다." << endl << endl;
				}
			}
		}
		else if (answerNum > 95)
		{
			if (correctNum == (answerNum - 32))
			{
				cout << "승리하셨습니다!" << endl;
				break;
			}

			else if (i == 1)
			{
				cout << "GAME OVER... 정답은 " << (char)correctNum << "였습니다." << endl << endl;
			}


			else if (correctNum != (answerNum - 32))
			{
				cout << "오답입니다..." << i - 1 << "번 기회 남으셨습니다." << endl << endl;

				if ((answerNum - 32) > correctNum)
				{
					cout << "HINT! 정답은 " << answerNum << "보다 앞에 있습니다." << endl << endl;
				}

				else if ((answerNum - 32) < correctNum)
				{
					cout << "HINT! 정답은 " << answerNum << "보다 뒤에 있습니다." << endl << endl;
				}
			}
			
			cout << endl;
			
		}
	}*/
			

int mapNum[10][10];
srand(time(NULL));
int x;
int y;

int playerX = (rand() % 10);
int playerY = (rand() % 10);
int escapeX = (rand() % 10);
int escapeY = (rand() % 10);





for (int x = 0; x < 10; x++)
{
	for (int y = 0; y < 10; y++)

	{  
		
     
		
		if (playerX == x)

		{
			mapNum[x][y] = 65;
			
		}
		

		else
		{
			mapNum[x][y] = 35;
			
		}
		 
		cout << (char)mapNum[x][y];

		

		 if (y == 9)

		{
			cout << endl;
			break;
		}

		 
		 
		


	}
	
	}








	
}

/*
	boolean타입
	bool is_alive = false; (true or false) -> 1Byte
	bool is_alive = 5 > 3; (true, 1)
*/
/*
	배열 (자료구조)
	같은 데이터타입의 여러 변수를 하나의 묶음으로 나타낸 것.

	배열의 데이터타입에 대한 동일한 크기로 메모리상에 연속된 공간이 할당된다.
	배열명이 메모리 시작 주소이다.

	int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12};

	cout << nums << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << &(nums[i]) << endl;
	}
	실습.

	1. string형 배열변수 5개짜리를 선언하고, 반복문을 통해 학생의 이름을 입력받는다.
	입력을 다 받고나서 1 ~ 5 사이의 값을 입력하면 해당학생의 이름이 출력된다.

	ex) 1번째 학생의 이름을 입력하세요 :
		2번째 학생의 이름을 입력하세요 :
		3번째 학생의 이름을 입력하세요 :
		4번째 학생의 이름을 입력하세요 :
		5번째 학생의 이름을 입력하세요 :

		1 ~ 5 사이의 번호를 입력하세요 : 3

		3번째 학생의 이름은 ... 입니다.
		
		string name[5] = { };
		int nameNum;

		for (int i = 0; i < 5; i++)
		{
		cout << i + 1 << "번째 학생의 이름을 입력하세요 : ";
		cin >> name[i];
		cout << endl;
		}
		cout << "1 ~ 5 사이의 번호를 입력하세요 : ";
		cin >> nameNum;
		cout << endl;
		cout << nameNum << "번째 학생의 이름은 " << name[nameNum - 1] << "입니다!" << endl;
		*/

		/*
		-2차원배열 및 다차원배열
		배열이 (*개념적으로 = 실제로는 1차원으로 배열됨.) 2중으로, 다중으로 구성되어 있는 것.

		1차원 배열 : int student_nums[5];		// 5개의 int
					-> 5명의 학생이 있다.
		
		2차원 배열 : int student_nums[3][5];		// 15개의 int
					-> 3개 반에 각각 5명의 학생이 있다.

		3차원 배열 : int student_nums[4][3][5];		// 60개의 int
					-> 4개 학년에 각각 3개 반이 존재, 각 반에 5명의 학생이 있다.
		
		int student_nums[3][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15} };

		cout << student_nums[0][7] << endl; // [1][2] -> 정상적인 사용방법은 아니나, 시작 주소로 부터 떨어져있는 거리를 계산하여 값을 출력.

		순서대로 출력하는 코드 (※ 변수이름이 같은 것이 메모리가 같다는 것을 의미하지는 않는다.)
		for (int j = 0; j < 3; j++)
		{
		for (int i = 0; i < 5; i++)
		{
			cout << student_nums[j][i] << endl;
			cout << &(student_nums[j][i]) << endl;
		}
		}

			실습.
			구구단의 결과를 저장하는 2차원 배열을 하나 선언하고, 
			이중 for문을 이용해서 배열 변수에 구구단의 결과값을 저장하고,
			두 수를 입력받아서 적합한 결과값을 출력해보자.

			ex)
				(결과 저장 완료)
				몇 단을 볼까요? : _
				몇을 곱할까요? : _

				0 * 0 = 28


		(엔터 없이) 문자 하나를 입력받는 방법.
		_getch();

		(데이터)형 변환 : 데이터 타입을 변환한다.
		
		묵시적 형변환
		명시적 형변환
		
			


		
		
		*/