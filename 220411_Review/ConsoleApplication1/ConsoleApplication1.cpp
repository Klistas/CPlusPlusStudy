
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;



int main()
{
    //int firstNum;
    //int secondNum;

    //cout << "첫번째 값을 입력해주세요. : ";
    //cin >> firstNum;
    //cout << "두번째 값을 입력해주세요. : ";
    //cin >> secondNum;
    //cout << firstNum << " + " << secondNum << " = " << (firstNum + secondNum) << endl;
    //cout << firstNum << " - " << secondNum << " = " << (firstNum - secondNum) << endl;
    //cout << firstNum << " * " << secondNum << " = " << (firstNum * secondNum) << endl;
    //cout << firstNum << " / " << secondNum << " = " << (firstNum / secondNum) << endl;
    //cout << firstNum << " % " << secondNum << " = " << (firstNum % secondNum) << endl;
    //// 1번.
    //srand(time(NULL));

    //int minNum;
    //int maxNum;

    //cout << "최소값을 입력해주세요 : ";
    //cin >> minNum;
    //cout << "최대값을 입력해주세요 : ";
    //cin >> maxNum;
    //cout << "랜덤값 출력 : " << ((rand() % (maxNum - minNum)) + minNum) << endl; // 2번
    //

    //int answerNum;
   
    //cout << "원하는 인삿말 : " << endl;
    //cin >> answerNum;

    //switch (answerNum)
    //{
    //case 1 :
    //    cout << "안녕하십니까, 오늘도 좋은 하루입니다." << endl;
    //    break;
    //
    //case 2 : 
    //    cout << "안녕? 오늘 날씨 좋네!" << endl;
    //    break;

    //case 3 :
    //    cout << "ㅎㅇ!" << endl;
    //    break;

    //}
    //// 3번.

   
    //srand(time(NULL));
    //int correctNum = ((rand() % 100) + 1);
    //    int answerNum;

    //    for (int i = 5; i > 0; i--)
    //    {
    //        cout << "정답 입력 : ";
    //        cin >> answerNum;
    //            
    //        if (correctNum == answerNum)
    //        {
    //            cout << "정답입니다!" << endl;
    //            break;
    //        }

    //        else
    //        {
    //            cout << "오답입니다..." << endl;

    //            if (correctNum < answerNum)
    //            {
    //                cout << "정답이 제시하신 수 보다 작습니다." << endl;
    //            }

    //            else if (correctNum > answerNum)
    //            {
    //                cout << "정답이 제시하신 수 보다 큽니다." << endl;
    //            }
    //        }
    //        if (i == 1)
    //        {
    //            cout << "GAME OVER...정답은" << correctNum << "이었습니다." << endl;
    //        }

    //    } // 5번.




    srand(time(NULL));
    int correctNum = ((rand() % 25) + 65);
    int answerNum;

    for (int i = 5; i > 0; i--)
    {
        cout << "정답 입력 : ";
        answerNum = _getch();
        system("cls");
        cout << (char)correctNum;
        if (correctNum < 95)
        {
            if (correctNum == answerNum)
            {
                cout << "정답입니다!" << endl;
                break;
            }

            else
            {
                cout << "오답입니다..." << endl;

                if (correctNum < answerNum)
                {
                    cout << "정답이 제시하신 앞에있습니다." << endl;
                }

                else if (correctNum > answerNum)
                {
                    cout << "정답이 제시하신 수 보다 뒤에있습니다." << endl;
                }
            }
        }

        if (correctNum > 95)
        {
            if ((correctNum - 32) == (answerNum - 32))
            {
                cout << "정답입니다!" << endl;
                break;
            }

            else
            {
                cout << "오답입니다..." << endl;

                if ((correctNum - 32) < (answerNum - 32))
                {
                    cout << "정답이 제시하신 앞에있습니다." << endl;
                }

                else if ((correctNum - 32) > (answerNum - 32))
                {
                    cout << "정답이 제시하신 수 보다 뒤에있습니다." << endl;
                }
            }
        }




        if (i == 1)
        {

            cout << "GAME OVER...정답은" << (char)correctNum << "이었습니다." << endl;
        }

    }










}

/*
   1. 두 정수를 입력받은 후 두 정수의 사칙연산 + 나머지(%) 결과를 출력하기
2. 최소값과 최대값을 입력받은 후 두 수 사이의 랜덤한 숫자 1개 출력하기
3. 1~3사이의 숫자를 입력받은 후 입력받은 숫자에 따라 다른 인삿말이 나오도록 하기
(출력 예시 : 숫자를 입력하시오(1~3) : 3
좋은 하루입니다. )
4. 1부터 100까지의 숫자를 차례대로 출력하기
출력되는 숫자의 옆에 홀수이면 홀수, 짝수이면 짝수라고 표시하기
출력되는 숫자의 옆에 3의 배수이면 3의 배수라고, 5의 배수는 5의 배수라고 표시하기
(출력 예시
1 홀수
2 짝수
3 홀수 3의 배수
4 짝수
5 홀수 5의 배수
6 짝수
.
.
.
100 짝수 5의 배수 )

5. 1~100 사이의 임의의 숫자를 맞추는 게임
오답을 입력하면 컴퓨터가 정답이 오답보다 큰지 작은지 알려주고
다섯 번 안에 못맞추면 게임 오버

6. 숫자 대신 알파벳 중 하나를 입력받고 컴퓨터가 생각하는 알파벳과 같은 값을 찾는
게임 만들기. 기본 규칙은 5번과 비슷 
( 틀렸을 때 입력한 문자보다 앞에 있는지, 뒤에 있는지 알려주고 5번까지 기회를 준다 )

7. 몬스터라는 구조체를 만들고 5개를 선언하시오. 5개의 이름은 cin으로 입력받게 하고
몬스터의 공격력, 방어력은 랜덤으로 설정되도록 하시오.
그 후 1~5 사이의 숫자를 입력하면 번호에 해당하는 몬스터의 이름, 공격력, 방어력을
출력하시오.
*/