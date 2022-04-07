// 220406_HelloVariable.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{

    //변수
    /*
       1)이름 : testNum  2)크기 : 4Byte  3) 값 : 2.8   4) 메모리주소 : 00000079C2AFF814 
       1)이름 : testNum1  2)크기 : 8Byte  3) 값 : 2.8   4) 메모리주소 : 0000001068EFFB58
    
    */

    /*float testNum = 2.8f;
    double testNum1 = 2.8;

    std::cout << testNum << endl;
    std::cout << testNum1 << endl;

    cout << sizeof(testNum) << "Byte" << endl;
    cout << &testNum << endl;

    cout << sizeof(testNum1) << "Byte" << endl;
    cout << &testNum1 << endl;*/
    
    //실습 1. 상대방 이름과 내 이름, 상대방 나이를 입력받아서 생일 축하메시지를 출력하는 프로그램을 만들어보자.

    // 1. 상대방 이름, 내이름, 상대방 나이 입력 받는다 -> 변수설정( 상대방 이름, 내 이름, 상대방 나이)
    //출력되어야하는 것 -> cout, 입력 -> cin >> 변수 
    // cout << myname << " : " << yourname << "님 " << age << "살 생일을 축하합니다!" << endl; <- 한 문장이기 때문에 cout을 여러번 쓸 필요없이 이어서
    //string myname = "용준헌"-> 초기화 과정은 변수를 입력받을것이기 때문에 굳이 필요하지않음
    //진행 중 원하는대로 출력이 되는 지 확인해보자!@!@!@!@
    //형태를 갖춰놓고, 변수가 들어가는 부분을 넣어서 완성.

        /*
         변수명   이름   규칙
         1. C++에서 사용하는 키워드들은 변수명으로 사용할 수 없다.
         ex) int float = 3; (X)

         2. 알파벳, 숫자, _로만 구성할 수 있다.-_ㅡ ㅡ_-
         int costomer_count1 = 3; (O) 
          @@숫자로 변수명을 시작할 수는 없다. (_로 시작은 ㄱㅊ)@@

         3. 대/소문자 구분을 한다.

         4. 변수명 사이에 띄어쓰기를 넣을 수 없다.
         
         5. 전부 소문자로 작성한다.

         6.축약어를 쓰지 않는다.
         @@처음 보는 사람도 알아볼 수 있도록@@
         @@int a; int n; 등 쓰지 않도록@@

         헝가리안 표기법 : 변수명 앞에 함수의 약자를 씀. IDE가 없을 때 사용되고, 지금은 사용되지 않음.
         카멜 표기법 : 띄어쓰기를 대문자로 대신함. 단, 첫글자는 소문자 ex) yourNameIs
         파스칼 표기법 : 카멜 표기법과 거의 비슷하나, 첫 글자도 대문자로 표기 ex) YourNameIs
          
        나를 분석하여 여러가지 타입의 변수로 정의.
         총 20개
         이름 : ...
         나이 : ...
         키 : ...
         혈액형 : ...
         MBTI : ...
         고향 : ...
         취미 : 
         특기 : 
         
          
          
          */










    //string yourname;
    //string myname;
    //int age;

    //cout << "상대방 이름을 입력하세요." << endl;
    //cin >> yourname;
    //cout << "당신의 이름을 입력하세요." << endl;
    //cin >> myname;
    //cout << "상대방 나이를 입력하세요." << endl;
    //cin >> age;
    //cout << myname;
    //cout << " : ";
    //cout << yourname;
    //cout << "님 ";
    //cout << age;
    //cout << "살 생일을 축하합니다!" << endl;
    




    /*std::cout << "Hello World!\n";*/
}

