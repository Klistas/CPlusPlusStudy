


#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

	/*
	+구조체
	1. 절차적
	2. 구조적
	3. 객체지향적
		
	+추상화 : 실제 세계(현상)를 간략화, 기호화, 보편화하여 표현한 것.
	C언어에서 코드를 추상화하는 데 사용 : 배열, 구조체, 함수
	코드에서 추상화가 필요한 이유 : 결국 코드는 사람이 짜는 것이기 때문에.
	다른 사람이 코드를 해석하기 편리해야 하고, 
	다른 사람이 인수인계받아서 유지보수하기 편리해야 하고,
	다른 사람들과 함께 공동으로 코드를 만들기 편리해야 한다.
	
	- 배열 : 속성이 동일한 여러개의 데이터를 같은 이름과 순서를 지정한 연속된 번호로 
	서로 연관되어 있음을 표시함으로써 추상화함.

	- 구조체 : 데이터(자료형)을 실제로 쓰이는 데이터끼리 묶어서 추상화

	- 함수 : 프로세스(코드)를 특정 기능 단위로 묶어서 추상화
	
	최악의 추상화 -> 추상화 단계를 상승시키는 과정.

	string a, b, c; // 최악의 추상화.
	string a[3]; // 조금 나은 추상화.
	string name1, name2, name3; // 조금 더 나은 추상화.
	string studentName[3]; // 의도가 더 명료하게 드러남.


	*/

	/*
	+ 구조체 : 변수를 모아 놓은 집합체.
	- 특정 변수들이 무언가의 하위 개념으로 묶일 수 있을 때.
	- studentName[10], studentAge[10], studentKorScore[10], ...
	- '학생'의 무언가 
	- 이름, 나이, 국어점수, 석차 등등을 '학생'이라는 구조체로 묶어서 사용.
	

	1. 구조체를 정의하는 위치 : 구조체가 사용되는 함수의 앞에 정의한다.
	(해당 함수의 바깥쪽 앞(위))

	2. 구조체 정의의 방법.
	struct 구조체 변수명
	{
		구조체 안에 들어갈 하위 변수들.
		(위의 예시에 따르면 이름, 나이, 국어점수, 석차 등등이 하위변수이다.)
	};

	 구조체는 일종의 우리가 새롭게 만든 데이터형이다.

	구조체 안에 들어갈 수 있는 하위변수
	-> 
		int/bool, float 같은 기본 자료형들은 모두 사용 가능.
		string 같은 클래스도 사용 가능.
		배열도 사용 가능.
		앞에서 정의한 구조체도 넣을 수 있다.

	3. 구조체 선언과 초기화.
	기본적으로 구조체 변수의 개념은 배열 변수의 개념과 동일.
	int a[3] = {50,70,80};
	구조체 변수도 자음과 같이 선언 및 초기화 할 수 있다.

	player.HP = player.HP - monster[n].dmg;
	-> 주석 없이 코드를 배우지 않은 사람에게도 어느 정도의 가독성을 가짐.

	실습 : 미궁탈출 게임의 업데이트
	사용할 수 있는 모든 요소에 구조체를 활용하여 소스 코드를 개선해 보세요.
	tile : 지형 정보를 넣고 (숲, 늪, 평지)
	player : 피로도
	플레이어가 어느 지형에 있는지, 플레이어의 피로도가 얼마인지 (숲 -1, 늪 -3, 평지 0)

	*/

//struct student
//{
//	string name;
//	int age;
//	string homeTown;
//	int pride;
//	int monthlyScore[12];
//}seoyeon, jaehyuk; // 중괄호의 끝과 세미콜론 사이에다 student의 변수를 미리 선언 가능.
//
//struct score
//{
//	int kor;
//	int eng;
//	int math;
//	};
//
//
//
//// name, age, korscore, rank라는 하위 변수를 가지고 있는 student라는 구조체를 정의한다.
//// 구조체 정의 위치.


struct map
{
	int x;
	int y;
	int mapNum[10][10];
	int randomPosition[10][2];

}forest, swamp, land, escape, player;

struct player
{
	int stamina = 100;

} user;

struct button
{
	int upButton = 119;
	int downButton = 115;
	int leftButton = 97;
	int rightButton = 100;
	int button;

}button;





int main() // 현재 우리가 쓰고있는 유일한 함수
{



	land.mapNum[10][10];
	swamp.randomPosition[10][2];
	srand(time(NULL));


	player.x = 0;
	player.y = 0;
	swamp.x = (rand() % 10);
	swamp.y = (rand() % 10);
	forest.x = (rand() % 10);
	forest.y = (rand() % 10);



	while (escape.x == 0 && escape.y == 0)
	{
		escape.x = (rand() % 10);
		escape.y = (rand() % 10);
	}
	
	while (swamp.x == 0 && swamp.y == 0)
	{
		swamp.x = (rand() % 10);
		swamp.y = (rand() % 10);
	}
	while (forest.x == 0 && forest.y == 0)
	{
		forest.x = (rand() % 10);
		forest.y = (rand() % 10);
	}
	



		for ( int i = 0; i < 10; i++)
		{
		swamp.randomPosition[i][0] = (rand() % 10);
		swamp.randomPosition[i][1] = (rand() % 10);
		cout << swamp.randomPosition[i][0] << endl;
		cout << swamp.randomPosition[i][1] << endl;
		}

	
	for (int i = 0; i < 10; i++)
	{
		forest.x = (rand() % 10);
		forest.y = (rand() % 10);




	}

	

	while (1)
	{

	

		for (int x = 0; x < 10; x++)
		{

			

			for (int y = 0; y < 10; y++)
			{
				
				swamp.x = swamp.randomPosition[x][0];
				swamp.y = swamp.randomPosition[x][1];
				land.mapNum[x][y] = 35;
			
				land.mapNum[player.x][player.y] = 80;
				land.mapNum[escape.x][escape.y] = 69;
				
				land.mapNum[forest.x][forest.y] = 33;
				land.mapNum[swamp.x][swamp.y] = 64;
			

				cout << (char)land.mapNum[x][y];

				if (y == 9)
				{
					cout << endl;
				}
		}
			

		}
		if (land.mapNum[player.x][player.y] == land.mapNum[swamp.x][swamp.y])
		{
			user.stamina -= 3;
			cout << "\n\n\n" << "늪에 빠지셨습니다...!" << endl << "피로도 -3" << endl;
		}

		if (land.mapNum[player.x][player.y] == land.mapNum[forest.x][forest.y])
		{
			user.stamina -= 1;
			cout << "\n\n\n" << "숲은 무섭네요...!"<< endl << "피로도 -1" << endl;
		}

		cout << "\n\n\n" << "@ = 늪" << endl << "! = 숲" << endl;
		cout << "\n\n\n" << "플레이어 피로도 : " << user.stamina << endl;
		cout << "\n\n\n" << "WELCOME TO ESCAPE GAME";
		button.button = _getch();
		system("cls");
		
		
		
		

		if (button.button == button.upButton)
		{
			
			player.x -= 1;
			if (player.x < 0)
			{
				player.x = 0;
			}
			else
			{
				user.stamina -= 1;
				
			}
		}

		if (button.button == button.downButton)
		{
			player.x += 1;
			if (player.x > 9)
			{
				player.x = 9;
			}
			else
			{
				user.stamina -= 1;
				
			}
		}

		if (button.button == button.leftButton)
		{
			player.y -= 1;
			if (player.y < 0)
			{
				player.y = 0;
			}
			else
			{
				user.stamina -= 1;
				
			}
		}

		if (button.button == button.rightButton)
		{
			player.y += 1;
			if (player.y > 9)
			{
				player.y = 9;
			}
			else
			{
				user.stamina -= 1;
				
			}
		}
		if (user.stamina <= 0)
		{
			cout << "==GAME OVER==" << endl << endl << endl;
			break;
		}

		if (land.mapNum[player.x][player.y] == land.mapNum[escape.x][escape.y])
		{
			cout << "축하합니다! 승리하셨습니다!";
			break;
		}

	}




	//	student minseop; // 구조체 변수의 선언
//	minseop.name = "심민섭"; // minseop의 name은 "심민섭"이다.
//	minseop.age = 34; // minseop의 age는 34이다.
//	minseop.homeTown = "인천";
//	minseop.pride = 100;
//	 //초간단 실습 : student 구조체를 사용해서 자신의 정보를 입력해보자.
//	student yong;
//	yong.name = "용준헌";
//	yong.age = 28;
//	yong.homeTown = "홍천";
//	yong.pride = 100;
//	cout << yong.name << endl;
//	cout << yong.age << endl;
//	cout << yong.homeTown << endl;
//	cout << yong.pride << endl;
//	seoyeon.name = "";
//	score myScore[3] = { 50, 60, 70 };
//
//	cout << myScore->eng << endl;
// 








}

