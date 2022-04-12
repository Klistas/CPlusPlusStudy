/* C++문법 (복습)
    //주석 : 실행(컴파일) 되지 않고, 설명만을 위해서 사용되는 문법.
    #include : 라이브러리 호출
    C++ 문법을 사용할 때 주의해야 할 점.
    1.대/소문자를 구분해야한다.
    2.띄어쓰기를 통해 요소를 구분한다.
    3.실행문의 마무리는 세미콜론(;)으로 한다.


    변수 : 데이터를 저장할 메모리 공간을 할당 받는다.
    데이터타입 변수명;
    데이터타입 변수명 = 10; ->초기화
    데이터타입 변수명 = 'a';
    데이터타입 변수명 = "Hello";

    데이터타입
    1. 정수형 (0, 1, 2, 3, 4, ...)
     int
     short
     long
     long long
     __int8, __int16, __int32, __int64 ...
    2. 실수형
    float
    double
    long double
    3. 문자형
    char
    4. 문자열
    string

    변수명 이름짓기 규칙 (표기법)
    1. 헝가리안 표기법
     - 데이터 타입 약자를 접두어로 붙인다.
     ex) int nMaxCount = 10;

    2. 카멜 표기법
     ex) int maxCount = 10;

    3. 파스칼 표기법
     ex) int MaxCount = 10;

        int token_max_count = 10;

        1. 대소문자 구분
        2. 알파벳, 숫자, _(언더바)만 사용한다.
         2-1. 숫자는 가장 앞에 올 수 없다.

        변수의 4가지 속성
        1. 이름 2. 크기 3. 값 4. 메모리 주소



       연산자.
       데이터를 가공(연산)하는 모든 명령에 필요한 것들.
       1) 어떤 종류의 연산자인지.
       2) 우선순위 : 어떤 순서로 연산이 되는가
       3) 결합순서 : 좌측부터 연산 or 우측부터 연산

       1. 사칙연산 : 산술연산자 (좌측부터 연산된다)
       + : 더하기
       - : 빼기
       * : 곱하기
       / : 나누기 11 / 3 -> 3
       % : 나머지 11 / 3 -> 2

       *, /, % > +, -
        
       2. 대입연산자 (우측부터 연산된다)
       = : 왼쪽 항에 오른쪽 항의 값을 대입(복사)한다.

       3. 복합대입연산자
       += : a += b; -> a = a + b;
       -= : a -= b; -> a = a - b; 
       *= : a *= b; -> a = a * b;
       /= : a /= b; -> a = a / b; (b == 0, 런타임 에러 발생)
       %= : a %= b; -> a = a % b; (데이터타입이 정수형이 아닐 때)

       4. 증감연산자
       특정 변수의 값을 1씩 증가시키거나 감소시킬 때 사용하는 연산자.
       변수명 앞이나 뒤에 ++, -- 를 붙여 사용.

       5. 관계연산자
       두 항의 값을 비교한 결과가 참(0을 제외한 모든 수 or true) 또는 거짓(0 or false)으로 반환되는 연산자.

       a < b : 왼쪽 항이 오른쪽 항보다 작으면 참
       a > b : 왼쪽 항이 오른쪽 항보다 크면 참
       a <= b : 왼쪽 항이 오른쪽 항보다 작거나 같으면 참
       a >= b : 왼쪽 항이 오른쪽 항보다 크거나 같으면 참
       a == b : 왼쪽 항이 오른쪽 항과 같으면 참
       a != b : 왼쪽 항이 오른쪽 항과 같지 않으면 참

       6. 논리연산자
       왼쪽 항과 오른쪽 항의 값을 각각 참과 거짓으로 연산해서
       두 값을 비교해서 참과 거짓을 반환하는 연산자.

       && : 논리곱(AND)
       a && b : a의 결과값이 참이고, b의 결과값이 참이면 1을 반환.
       
       || : 논리합(OR)
       a || b : a의 결과값이 참이거나, b의 결과값이 참이면 1을 반환.

       ! : 논리부정(NOT)
       !a : a의 결과값이 참이면 거짓을 반환, 거짓이면 참을 반환.

       7. 삼항연산자
       a ? b : c;
       a의 결과값이 참이면 b실행문이 동작, 거짓이면 c실행문이 동작.

       난수 (랜덤값)
       rand(); // 0 ~ 32767 사이의 랜덤한 값이 반환된다.(rand의 데이터타입 크기 : 4Byte)
       함수 내부에 seed값이 존재함. 이 값에 의해서 리턴값이 정해진다.
       기본적으로 seed : 1로 세팅되어 있다.

       srand(time(NULL));

       실습.
       1. 3 ~ 7 사이의 랜덤한 숫자를 출력하는 프로그램을 작성하자.(3, 7 포함)

       2. 가장 작은 값과 큰 값을 입력 받아서, 그 사이의 임의의 값을 출력하는 프로그램을 작성하자.

       3. 프로그램을 실행하면 내부적으로 1 ~ 10 사이의 숫자가 정답으로 정해진다. 유저가 1 ~ 10 사이의 숫자를 입력하고, 맞으면 true, 틀리면 false를 출력한다.

              */

#include <iostream>
#include <string>

using namespace std;

int main()
{
//#pragma region 실습1
//    srand(time(NULL));
//        cout << ((rand() % 5) + 3) << endl; // 1.
//#pragma endregion   
//   
//#pragma region 실습2
//        int minNum;
//        int maxNum;
//        cout << "가장 작은 값을 입력해주세요." << endl;
//       cin >> minNum;
//        cout << "가장 큰 값을 입력해주세요." << endl;
//        cin >> maxNum;
//        srand(time(NULL));
//        cout << ((rand() % (maxNum - minNum + 1)) + minNum) << endl; // 2. % 최대값 - 최소값 + 1
//#pragma endregion
//
//#pragma region 실습3
//        srand(time(NULL));
//        int answerNum;
//        cin >> answerNum;
//        ((rand() % 10) + 1 == answerNum) ? cout << "정답입니다!" : cout << "오답입니다.." << endl;
//#pragma endregion

        // 입력 - 처리 - 출력 세가지로 나누어서 문제해결.

        /*
        
        제어문   데이터(타입)  / 연산자 / (제어구조)

        1. 조건문 : 특정 조건에 따라서 실행문을 실행할지 안할지 제어. : if / switch

        2. 반복문 : 특정 조건에 따라서 실행문을 일정 횟수만큼 반복 실행 제어 : while / for
        
        조건문

        1-1. if 문

        if (조건식)
        {
             실행문1; 
        }
        
        else if (조건식2)

        {
              실행문3;
        }

        else

        {
             실행문2;
        }

      
        1-2. switch 문

        switch (정수형 변수)
        {
              case 정수1:
                     실행문1;
              break;
              case 정수2:
                     실행문2;
              break;
              case 정수3:
                     실행문3;
              break;
              default :     //해당하는 정수값이 없을 때.
                     실행문4;
              break;
        }
          
                     
         2-1. while 문

         while (조건식)
         {
             실행문;
             조건식을 바꾸는 실행문;  // while문을 중단시키는 첫번째 방법.

             if (조건식)
             {
                   break;           // while문을 중단시키는 두번째 방법 
             }

             break; // 실행문이 한번 실행되고 while문이 종료됨.

         }

         - do-while 문
          
          do
          {
                 실행문;
          }
          while (조건식);
               
         2-2. for 문
            
            for (1. 초기식; 2. 조건식; 3. 증감식)
            {
                  4. 실행문;
            }
            1. -> 2. -> 4. -> 3. -> 2. -> 4. -> 3. -> ... (조건식의 결과값이 0이 나올 때까지 반복!)
             

              
              
              */
         



        /*for (int i = 0; i < 5; i++)
         {
            cout << "HelloWorld!" << endl;
         }
         
         for문 실습1.
         10부터 1까지 차례대로 출력되는 코드를 작성해보자.

         for (int i = 10; i > 0; i--)
         {
         cout << i << endl;
         }
            
         실습2.
         100미만의 3의 배수를 차례대로 출력되는 코드를 작성해보자.

         for (int i = 3; i < 100; i += 3)
         {
         cout << i << endl;
         }

         실습3.
         1000미만의 2의 승수를 차례대로 출력되는 코드를 작성해보자.
         
         for (int i = 1; i < 1000; i *= 2)
         {
         cout << i << endl;
         }
         */

         

        
        /*
         //실습 4.
         //구구단을 출력해보자.
         //4-1. 구구단 2단을 차례대로 출력해보자.
        
        cout << "구구단 2단 출력!" << endl << endl;
        
        for (int i = 1; i < 10; i++)
        {
        cout << "2 * " << i << " = " << (i * 2) << endl;
        }
        cout << endl;

         //4-2. 구구단 2 ~ 9단 출력.

        cout << "구구단 2단 ~ 9단 출력!" << endl << endl;

        for (int gugu_dan = 2; gugu_dan < 10; gugu_dan++)
        {
            for (int gugu_su = 1; gugu_su < 10; gugu_su++)
            {
                cout << gugu_dan << " * " << gugu_su << " = " << gugu_dan * gugu_su << endl;
            }
            cout << endl;
        }


       /* for (int i = 1; i < 10; i++)
        {
        cout << "2 * " << i << " = " << (i * 2) << endl;
        }

        for (int i = 1; i < 10; i++)
        {
        cout << "3 * " << i << " = " << (i * 3) << endl;
        }

        for (int i = 1; i < 10; i++)
        {
        cout << "4 * " << i << " = " << (i * 4) << endl;
        }

        for (int i = 1; i < 10; i++)
        {
        cout << "5 * " << i << " = " << (i * 5) << endl;
        }

        for (int i = 1; i < 10; i++)
        {
        cout << "6 * " << i << " = " << (i * 6) << endl;
        }

        for (int i = 1; i < 10; i++)
        {
        cout << "7 * " << i << " = " << (i * 7) << endl;
        }

        for (int i = 1; i < 10; i++)
        {
        cout << "8 * " << i << " = " << (i * 8) << endl;
        }

        for (int i = 1; i < 10; i++)
        {
        cout << "9 * " << i << " = " << (i * 9) << endl;
        }
         
         //4-3. 구구단 2단 ~ 9단을 다음과 같은 형태로 출력해보자.

        cout << " - po구구단wer -" << endl << endl;
        
        cout << "[2단] " << "\t" << "\t" << "[3단] " << "\t" << "\t" << "[4단] " << "\t" << endl;
        for (int i = 1; i < 10; i++)
        {
        cout << "2 * " << i << " = " << (i * 2) <<  "\t" << "3 * " << i << " = " << (i * 3) << "\t" << "4 * " << i << " = " << (i * 4) << endl;
        }
        
        cout << "[5단] " << "\t" << "\t" << "[6단] " << "\t" << "\t" << "[7단] " << "\t" << endl;
        for (int i = 1; i < 10; i++)
        {
        cout << "5 * " << i << " = " << (i * 5) << "\t" << "6 * " << i << " = " << (i * 6) << "\t" << "7 * " << i << " = " << (i * 7) << endl;
        }
        
        cout << "[8단] " << "\t" << "\t" << "[9단] " << endl;
        for (int i = 1; i < 10; i++)
        {
        cout << "8 * " << i << " = " << (i * 8) << "\t" << "9 * " << i << " = " << (i * 9) << endl;
        }
         
      */   
         
        /*
        별찍기
        1)
        *
        * *
        * **
        * ***
        * ****
        
        2)
               *
              ** 
             *** 
        
        3)



        4)

        5)

        6)

        7)
        */
        
        
        for (int i = 1; i < 10; i++)
        {
            
            while (1)
            {
                cout << "*";
                if (i < 10)
                {
                    break;
                }
            }
            cout << endl;
        }


/* if문 실습.

정수를 하나 입력 받아서 입력 받은 숫자가 10보다 크면 "입력된 숫자가 10보다 큽니다." 출력.
10 이하 9초과 이면 "9보다 큽니다." 출력.
9 이하 6 초과 이면 "6보다 큽니다." 출력.
그 이외에는 "6보다 작거나 같습니다." 출력.

int inputNum;
        cout << "숫자를 입력해주세요." << endl;
        cin >> inputNum;
        
        if (inputNum > 10)
        {
            cout << "입력된 숫자가 10보다 큽니다." << endl;
        }

        else if (inputNum > 9)
        {
            cout << "입력된 숫자가 9보다 큽니다." << endl;
        }

        else if (inputNum > 6)
        {
            cout << "입력된 숫자가 6보다 큽니다." << endl;
        }

        else
        {
            cout << "6보다 작거나 같습니다." << endl;
        }

    //입력
    int input_num;
    cin >> input_num;
   
    //출력
    if (input_num > 10)
    {
        cout << "입력된 숫자가 10보다 큽니다." << endl;
    }

    else if (input_num > 9) // (10 >= input_num > 9) -> (10 >= input_num && input_num > 9)
    {
        cout << "입력된 숫자가 9보다 큽니다." << endl;
    }

    else if (input_num > 6)
    {
        cout << "입력된 숫자가 6보다 큽니다." << endl;
    }

    else
    {
        cout << "입력된 숫자가 6보다 작거나 같습니다." << endl;
    }
    */

/*switch문 실습.
당신의 고향은 어디입니까 ?
1. 서울 2. 양평 3. 광주 4. 대전 5. 제주도
_1
default 5개중에 선택해 주세요.
안녕하세요.당신의 고향은 서울이군요.


int yourHometown;
cout << "당신의 고향을 선택해주세요." << endl;
cout << "1. 서울 2. 양평 3. 광주 4. 대전 5. 제주도" << endl;
cin >> yourHometown;

switch (yourHometown)
{
case 1:
    cout << "안녕하세요. 당신의 고향은 서울이군요." << endl;
break;

case 2:
    cout << "안녕하세요. 당신의 고향은 양평이군요." << endl;
    break;

case 3:
    cout << "허벌나게 반갑구마잉. 광주사람을 여기서 만나네잉." << endl;
    break;

case 4:
    cout << "안녕하셔유. 대전 좋쥬~" << endl;
    break;

case 5:
    cout << "안녕하수광. 제주에서 왔멘?" << endl;
    break;

default :
    cout << "5개 중에 선택해주세요!" << endl;
        break;
            }
            -> if문으로 변환
if (yourHometown == 1)
{
    cout << "안녕하세요. 당신의 고향은 서울이군요." << endl;
}

else if (yourHometown == 2)
{
    cout << "안녕하세요. 당신의 고향은 양평이군요." << endl;
}

else if (yourHometown == 3)
{
    cout << "안녕하세요. 당신의 고향은 광주이군요." << endl;
}

else if (yourHometown == 4)
{
    cout << "안녕하세요. 당신의 고향은 대전이군요." << endl;
}

else if (yourHometown == 5)
{
    cout << "안녕하세요. 당신의 고향은 제주이군요." << endl;
}

else
{
    cout << "5개 중에 선택해주세요." << endl;
}
*/

/*HelloWorld를 5번 출력하는 프로그램.
int repeat_count = 0;


while (repeat_count < 5)
{
    cout << "HelloWorld!" << endl;
    repeat_count++;
}
// 조건문을 바꾸는 실행문을 이용하여 중단시키는 방법

while (1)
{
    cout << "HelloWorld!" << endl;
    repeat_count++;

    if (repeat_count >= 5)
    {
        break;
    }
}
// if문을 이용해 중단시키는 방법

do
{
    cout << "HelloWorld" << endl;
    repeat_count++;
}

while (repeat_count++ < 4);
//do-while 문
*/

//// while문 실습
//// 정답을 맞출 때까지 반복되는 프로그램으로 수정.
//
//srand(time(NULL));
//        int correctNum = rand() % 9 + 1;
//        int answerNum = -1;
//        
//        cout << "미리보는 정답 : " << correctNum << endl;
//
//        while (answerNum != correctNum) // 1. 조건식 수정하는 방법. -> while (answerNum != correctNum) ※ answerNum 값을 초기화 해주어야함.
//        {
//            cout << "정답을 입력해주세요." << endl;
//            cin >> answerNum;
//            
//            (answerNum == correctNum) ? cout << "정답입니다! ^^" << endl : cout << "오답입니다 ㅠㅠ..." << endl;
//            
//            // 2. break 조건 추가하는 방법.
//            /*if (answerNum == correctNum)
//            {
//                 break;
//            }*/
//             
//        }


    //    srand(time(NULL));
    //    cout << rand() << endl;
    //
    //
    //
    //    (10 < 5) ? cout << "10이 5보다 크다." : cout << "10이 5보다 작다";
    //    cout << endl;
    //
    //
    //    cout << !-300 << endl; //0
    //
    //
    //    int input_key;
    //    char test_key = 'a';
    //    float testFloat = 5.3f;
    //    float testFloat1 = 5.3;
    //    cout << testFloat << endl;
    //    cout << testFloat1 << endl;
    //    std::string testWord = "Hello";
    //    std::cout << "Hello World!\n";
    //    std::cin >> input_key;
    //
    //    cout << boolalpha;
    //    cout << ((123 >= 4231) == 0) << endl;
    //
    //
}