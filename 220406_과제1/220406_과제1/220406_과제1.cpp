// 220406_과제1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//                                                                                    
//오늘의 과제 - 나를 분석하여 변수로 정의하라!(20개)
//
//이름, 나이, 키, 생일, 혈액형, 고향, 주거지,  전공, 학교, MBTI, 취미, 특기, 좋.겜, 좋.음, 좋.영, 좋.가, 좋.스, 좋.팀, 흡연여부, 건강상태

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string myname = "용준헌";
    
    cin >> myname;
    std::cout << "Hello " << myname << endl;
    cout << "이름 : " << myname << endl;

    int age = 28;
    cout << "나이 : " << age << endl;

    int height = 184;
    cout << "키 : " << height << "cm" << endl;
    
    int birthmonth = 4;
    int birthday = 17;
    cout << "생일 : " << birthmonth << "월 " << birthday << "일" << endl;

    string bloodtype = "Rh+ A";
    cout << "혈액형 : " << bloodtype << endl;

    string hometown = "강원도 홍천";
    cout << "고향 : " << hometown << endl;
    
    string address = "은평구 불광동";
    cout << "주거지 : " << address << endl;

    string major = "중어중문";
    cout << "전공 : " << major << endl;

    string school = "명지대학교";
    cout << "학교 : " << school << endl;

    string mbti = "INTP";
    cout << "MBTI : " << mbti << endl;

    string hobby = "게임";
    cout << "취미 : " << hobby << endl;

    string skill = "여행계획 짜기";
    cout << "특기 : " << skill << endl;

    string game = "문명";
    cout << "좋아하는 게임 : " << game << endl;

    string music = "락";
    cout << "관심 음악 : " << music << endl;

    string singer = "빅뱅";
    cout << "좋아하는 가수 : " << singer << endl;

    string movie = "액션";
    cout << "관심 영화 : " << movie << endl;

    string actor = "알 파치노";
    cout << "좋아하는 배우 : " << actor << endl;
    
    string sports = "야구";
    cout << "관심 스포츠 : " << sports << endl;

    string team = "기아 타이거즈";
    cout << "좋아하는 팀 : " << team << endl;

    string smoke = "YES!";
    cout << "흡연 여부 : " << smoke << endl;

    string health = "아직까진 괜찮음...";
    cout << "폐활량 : " << health << endl;



}

