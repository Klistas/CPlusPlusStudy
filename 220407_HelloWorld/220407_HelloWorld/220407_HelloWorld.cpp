// 220407_HelloWorld.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


using namespace std;

int main()
{
   

 /*
     연산자
     데이터를 가공(연산)하는 모든 명령에 필요한 것들
     1) 어떤 종류의 연산자들이 있는지?
     2) 우선 순위 : 어떤 순서로 연산이 진행되는지?
     3) 결합 순서 : 좌측부터 연산하는 연산자, 우측부터 연산하는 연산자

     1. 사칙연산 : 산술연산자 (좌측부터 연산)
     + : 더하기
     - : 빼기
     * : 곱하기
     / : 나누기    11 / 3 = 3 (0으로 나누면 런타임 에러)
     % : 나머지    11 / 3 = 2
     *, /, % > +, -
     Ctrl + F5 : 디버그하지 않고 실행. F5 : 디버깅 시작. Shift + F5 : 디버그 중지.

     2. 대입연산자 (우측부터 연산)
     = : 왼쪽 항에 오른쪽 항의 값을 대입한다. (복사한다.)

     3. 복합대입연산자
     += : a += b; -> a = a + b; 
     -= : a -= b; -> a = a - b;
     *= : a *= b; -> a = a * b;
     /= : a /= b; -> a = a / b;
     %= : a %= b; -> a = a % b; (a와 b는 정수형 타입이어야 한다.)

     4. 증감연산자
     특정 변수의 값을 1씩 증가시키거나 감소시킬 때 사용한다.
     변수의 앞이나 뒤에 ++ / -- 를 붙여서 사용한다.

     5. 관계연산자
     두 값을 비교한 결과가 참(1, true)인지 거짓(0, false)인지 반환하는 연산자.

     < : a < b : 왼쪽 항의 값이 오른쪽 합의 값보다 작으면 참을 반환.
     > : a > b : 왼쪽 항의 값이 오른쪽 합의 값보다 크면 참을 반환.
     <= : a <= b : 왼쪽 항의 값이 오른쪽 합의 값보다 작거나 같으면 참을 반환.
     > : a >= b : 왼쪽 항의 값이 오른쪽 합의 값보다 크거나 같으면 참을 반환.
     == : 왼쪽 항의 값과 오른쪽 항의 값이 같으면 참을 반환.
     != : 왼쪽 항의 값과 오른쪽 항의 값이 같지 않으면 참을 반환.

 */
    /*
         실습.
         1. 고객의 나이를 입력 받아서 미성년자(19세 이하)이면 true를 출력.
         성인이면 false를 출력.
         
         2. 입력 받은 나이를 기준으로, 주민등록증 발급대상(20세)이면 true, 아니면 false를 출력

         3. 입력 받은 나이가 아홉수인지 확인해서 true, false 출력
    */

    int customer_age;
    
    cout << "고객님의 나이를 입력하세요." << endl;
    cin >> customer_age; 
    
    cout << boolalpha;
    cout << "고객님의 나이는 " << customer_age << "입니다." << endl;
    cout << "고객님은 미성년자가" << (customer_age <= 19) << " 입니다." << endl;
    cout << "고객님은 주민등록증 발급 대상이 " << (customer_age == 20) << " 입니다." << endl;
    cout << "고객님은 아홉수가 " << (customer_age % 10) == 9 << " 입니다." << endl;






















    //int customer_age;

    //cout << "고객의 나이를 입력하세요 : ";
    //cin >> customer_age;

    //cout << boolalpha; // 1 or 0 인 true false 값을 true false로 바꿔줌! 
    //cout << "고객님은 미성년자 " << (customer_age <= 19) << "입니다." << endl;
    //cout << "고객님은 주민등록발급대상 " << (customer_age == 20) << "입니다." << endl;
    //cout << "고객님은 아홉수 " << ((customer_age % 10) == 9) << "입니다." << endl;
    
    
    
    
    
    
    
    
    
    /*int costomer_age;
    int age = 10;
    cin >> costomer_age;
    cout << (costomer_age > 19) << endl;
    cout << (costomer_age == 20) << endl;
    costomer_age %= age;
    cout << (costomer_age == 9) << endl;*/










//    int left_value = 11 +3;
//    int right_value = 3;
//
//    //left_value++; //15
//    cout << left_value++ << endl;//실행이후 15가 됨. 변수뒤에 오는 증감 연산자는 실행 이후 적용됨. 출력 : 14, 메모리 : 15
//    //++left_value; //16
//    cout << ++left_value << endl; // 메모리 : 16, 출력 : 16
//
//    cout << left_value-- << endl;
//    cout << --left_value << endl;
//
//
//    cout << "+ : " << left_value + right_value << endl;
//    cout << "- : " << left_value - right_value << endl;
//    cout << "* : " << left_value * right_value << endl;
//    cout << "/ : " << left_value / right_value << endl;
//    cout << "% : " << left_value % right_value << endl;
//    
//    //cout에 들어가는 것은 값이어야 함.복합대입연산자만으로는 값이 나오지 않음. left_value += right_value는 left_value에  이기 때문에.
//
//
//    left_value += right_value;
//    cout << "+= : " << left_value << endl;
//    left_value -= right_value;
//    cout << "-= : " << left_value << endl;
//    left_value *= right_value;
//    cout << "*= : " << left_value << endl;
//    left_value /= right_value;
//    cout << "/= : " << left_value << endl;
//    //괄호로 묶어서 값을 산출해내는 방식도 가능함.
//    cout << "% : " << (left_value %= right_value) << endl;
//
//
}

