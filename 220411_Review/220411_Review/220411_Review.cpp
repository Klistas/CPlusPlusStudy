﻿/* C++문법
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
       rand(); // 0 ~ 32767 사이의 랜덤한 값이 반환된다.(rand의 데이터타입은 몇 바이트?)
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
    
    srand(time(NULL));
        cout << ((rand() % 5) + 3) << endl; // 1.
    
        int minNum;
        int maxNum;
        cout << "가장 작은 값을 입력해주세요." << endl;
       cin >> minNum;
        cout << "가장 큰 값을 입력해주세요." << endl;
        cin >> maxNum;
        srand(time(NULL));
        cout << ((rand() % maxNum) + minNum) << endl; // 2.

        srand(time(NULL));
        int answer;
        cin >> answer;
        ((rand() % 10) + 1 == answer) ? cout << "정답입니다!" : cout << "오답입니다.." << endl;






















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