// ConsoleApplication4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//


#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
#pragma region 변수_선언
    string map[20][20];
    int ex, ey;
    int px, py;
    int mx, my;
    int mx1, my1;
    int mx2, my2;
    int mx3, my3;
    int mmx[4]; //
    int key[4] = { 0,0,0,0 }; // 승리 조건을 만족값으로 쓰이는 key 값을 배열로 해서 몬스터 수만큼 설정
    int chance; // 가위바위보에 쓰이는 변수
    px = 0; py = 0;
#pragma endregion

    srand((unsigned int)time(NULL)); // 혹시 음수가 나올까 unsigned 로 설정

#pragma region 맵_설정
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            map[i][j] = "□";
        }
    }
#pragma endregion

#pragma region 게임_등장요소_배치
    do // 몬스터 배치 1 ---> 가위바위보 몬스터
    {
        mx = rand() % 20; // 몬스터 x좌표값(행 위치) 설정
        my = rand() % 20; // 몬스터 y좌표값(열 위치) 설정
    } while (mx == 0 && my == 0); // 혹시 몬스터의 시작 위치 값이 플레이어 시작 위치인 0, 0이 되서 시작하자마자 인카운트가 나는걸 막기 위한 while

    do // 몬스터 배치 2 ---> 베라 몬스터
    {
        mx1 = rand() % 20;
        my1 = rand() % 20;
    } while (mx1 == 0 && my1 == 0);

    do // 몬스터 배치 3 ---> 스핑크스 몬스터
    {
        mx2 = rand() % 20;
        my2 = rand() % 20;
    } while (mx2 == 0 && my2 == 0);

    do // 몬스터 배치 4 ---> 빙고 몬스터
    {
        mx3 = rand() % 20;
        my3 = rand() % 20;
    } while (mx3 == 0 && my3 == 0);

    do // 플레이어 및 출구 배치
    {
        ex = rand() % 20;
        ey = rand() % 20;
    } while (ex == 0 && ey == 0); // 혹시 탈출 지점을 랜덤으로 지정했을 때 플레이어의 시작점인 0, 0 으로 설정되는 것을 막기 위한 문법
#pragma endregion

    while (true) // ********** 게임 메인 파일 *** (while문을 사용하고 true를 조건으로 지정해서 무한 반복되게 하고, 이 안에서 승리 조건을 만족하면 break를 걸어서 게임을 종료시킴
    {
        // 위 게임_등장요소_배치에서 몬스터 및 플레이어와 탈출구 모두 난수를 사용하여 위치를 랜덤으로 지정'만' 했으니 그걸 토대로 맵을 출력하는 과정

        map[px][py] = "♣"; // 플레이어 시작 위치를 ♣로 변경

        if (key[0] == 1 || key[0] == 0) // 몬스터별 key 값이 1일 경우(인카운트 후 승패가 결정되지 않은 경우)나, 0일 경우 (인카운트 전) 몬스터 위치 지정
        {
            map[mx][my] = "11";
        }

        if (key[1] == 1 || key[1] == 0)
        {
            map[mx1][my1] = "22";
        }

        if (key[2] == 1 || key[2] == 0)
        {
            map[mx2][my2] = "33";
        }

        if (key[3] == 1 || key[3] == 0)
        {
            map[mx3][my3] = "44";
        }

        map[ex][ey] = "●"; // 탈출 지점의 위치를 ●로 변경

        system("cls");

        for (int i = 0; i < 20; i++) // 맨 밑에 이동에 관련된 실행문에서 각 등장 요소들의 이동 후의 행과 열의 값을 지정'만' 했으니 그 값을 바탕으로 맵을 재출력하는 과정
        {
            for (int j = 0; j < 20; j++)
            {
                cout << map[i][j];
            }
            cout << endl;
        }

        if ((px == ex) && (py == ey) && (key[0] == 2) && (key[1] == 2) && (key[2] == 2) && (key[3] == 2)) // 모든 몬스터를 물리치고 탈출 위치에 가면 승리!
        {
            cout << "탈출 성공!";
            break; // 게임 종료
        }
#pragma region 가위바위보_몬스터
        if ((px == mx && py == my) || (px - 1 == mx && py == my) || (px + 1 == mx && py == my) || (px == mx && py - 1 == my) || (px == mx && py + 1 == my)) // 몬스터 위치 행, 열 ± 1 에 플레이어가 들어가면 인카운트
        {
            cout << "몬스터를 마주쳤다!";
            key[0] = 1; // 승리하기 위한 
            for (chance = 1; chance <= 3; chance++) // chance : 가위바위보 도전 횟수
            {
                int m_rps = 1 + (rand() % 3); // m_rps : 몬스터가 내는 가위바위보 값 (1 = 바위, 2 = 보, 3 = 가위)

                int u_rps; // u_rps : 유저가 내는 가위바위보 값 (1. 바위 / 2. 보 / 3. 가위)
                cout << m_rps;
                cout << "결전의 시간이다! 무엇을 낼지 번호를 입력해보자!" << endl << endl;
                cout << "1. 바위   2. 보   3. 가위" << endl << endl;

                cin >> u_rps;

                if (m_rps != u_rps) // 승, 패가 결정되는 경우 실행할 if문
                {
                    system("cls");

                    for (int i = 0; i < 20; i++)
                    {
                        for (int j = 0; j < 20; j++)
                        {
                            cout << map[i][j];
                        }
                        cout << endl;
                    }

                    if (u_rps == 1) // 유저가 바위를 낸 경우
                    {
                        if (m_rps == 3) // 유저가 바위를 내고, 몬스터가 가위를 낸 경우 = 내가 이긴 경우
                        {
                            cout << "이겼다! 몬스터를 물리쳤다!" << endl;
                            key[0] = 2; // 몬스터를 물리치면 그 몬스터에 해당하는 key값을 2로 설정받아 맵에서도 비활성화 하고, 승리조건에도 맞도록 한다.
                            break; // 그 후 break로 조건문 탈출
                        }
                        else // 몬스터가 보를 낸 경우 = 내가 진 경우
                        {
                            cout << "졌다... 하지만 아직 기회는 " << (3 - chance) << "번 있어!" << endl;
                        }
                    }
                    else if (u_rps == 2) // 유저가 보를 낸 경우
                    {
                        if (m_rps == 1) // 유저가 보를 내고 몬스터가 바위를 낸 경우 = 내가 이긴 경우
                        {
                            cout << "이겼다! 몬스터를 물리쳤다!" << endl;
                            key[0] = 2;
                            break;
                        }
                        else // 몬스터가 가위를 낸 경우 = 내가 진 경우
                        {
                            cout << "졌다... 하지만 아직 기회는 " << (3 - chance) << "번 있어!" << endl;
                        }
                    }
                    else // 유저가 가위를 낸 경우
                    {
                        if (m_rps == 2) // 유저가 가위를 내고, 몬스터가 보를 낸 경우 = 내가 이긴 경우
                        {
                            cout << "이겼다! 몬스터를 물리쳤다!" << endl;
                            key[0] = 2;
                            break;
                        }
                        else // 몬스터가 바위를 낸 경우 = 내가 진 경우
                        {
                            cout << "졌다... 하지만 아직 기회는 " << (3 - chance) << "번 있어!" << endl;
                        }
                    }
                }
                else // 무승부일 경우 실행할 else 문
                {
                    system("cls");

                    for (int i = 0; i < 20; i++)
                    {
                        for (int j = 0; j < 20; j++)
                        {
                            cout << map[i][j];
                        }
                        cout << endl;
                    }
                    cout << "무승부다! 다시 승부를 보자!" << endl;

                    chance -= 1; // 무승부가 나왔을 때, 도전 기회를 그대로 유지하기 위해 -= 해줌 (기회를 판단하는 방식이 for문 시작 시, chance로 묶어서 3번 실행되기 때문에
                }
            }
            // 가위바위보 종료 후...

            map[mx][my] = "□";
            mx = 0; my = 0;
            if (key[0] != 2) // key값이 2가 아니면 (가위바위보 게임에서 졌으면) game over 를 출력하고 게임을 종료시키는 if문
            {
                cout << "game over";
                break;
            } // 가위바위보 게임을 만들 때, 패배 시 game over를 출력하는 실행문을 짜지 않아서 추가적으로 입력한 코드
        }
#pragma endregion
#pragma region 베스킨라벤스_몬스터
        if ((px == mx1 && py == my1) || (px - 1 == mx1 && py == my1) || (px + 1 == mx1 && py == my1) || (px == mx1 && py - 1 == my1) || (px == mx1 && py + 1 == my1))
        {
            key[1] = 1;
            cout << "몬스터를 마주쳤다!";
            map[mx1][my1] = "□";
            mx1 = 0; my1 = 0;

            int beskin_p = 0;
            int beskin_m;
            int beskin_num = 0; // 현재 베스킨 게임에서 언급된 숫자

            while (1)
            {
                if (beskin_num < 31) // 베스킨 숫자가 30까지일 때 (게임 진행중일 때) 컴퓨터가 실행할 if 문
                {
                    if (beskin_num <= 26)
                    {
                        beskin_m = rand() % 3; // 숫자 넘길 횟수를 랜덤값으로 설정하는 코드 (ex ---> beskin_m = 2 가 나오면 0, 1, 2 숫자 세 번 진행)
                    }
                    // 약간 인공지능을 구현하려고 했는데, 15부터 수싸움을 시작하니 난공불락의 난이도가 되서 없앰
                    switch (beskin_num)
                    {
                        /*case 15: beskin_m = 2;
                            break;
                        case 16: beskin_m = 1;
                            break;
                        case 17: beskin_m = 0;
                            break;
                        case 19: beskin_m = 2;
                            break;
                        case 20: beskin_m = 1;
                            break;
                        case 21: beskin_m = 0;
                            break;
                        case 23: beskin_m = 2;
                            break;
                        case 24: beskin_m = 1;
                            break;
                        case 25: beskin_m = 0;
                            break;*/
                    case 27: beskin_m = 2;     // 최소한 마지막 차례에 컴퓨터 스스로 31을 불러 지는 경우를 막기 위한 코드
                        break;
                    case 28: beskin_m = 1;
                        break;
                    case 29: beskin_m = 0;
                        break;
                    }

                    cout << "컴퓨터 : " << "\t";

                    switch (beskin_m) // 숫자 넘길 횟수를 바탕으로 베스킨 숫자에 연산하는 코드
                    {
                    case 0: cout << (beskin_num += 1) << endl;
                        break;
                    case 1: cout << (beskin_num += 1) << ", ";
                        cout << (beskin_num += 1) << endl;
                        break;
                    case 2: cout << (beskin_num += 1) << ", ";
                        cout << (beskin_num += 1) << ", ";
                        cout << (beskin_num += 1) << endl;
                        break;
                    }
                }

                else // 베스킨 숫자가 31과 같거나 31보다 클 때 실행할 else문
                {
                    cout << "플레이어 패배\n" << "game over";
                    break;
                }

                if (beskin_num < 31)
                {
                    while (1)
                    {
                        cout << "1 ~ 3 숫자 입력" << endl; // 숫자 넘길 횟수를 플레이어가 정함

                        cin >> beskin_p;

                        system("cls");

                        for (int i = 0; i < 20; i++)
                        {
                            for (int j = 0; j < 20; j++)
                            {
                                cout << map[i][j];
                            }
                            cout << endl;
                        }

                        cout << "플레이어 : " << "\t";

                        switch (beskin_p)
                        {
                        case 1: cout << (beskin_num += 1) << endl;
                            break;
                        case 2: cout << (beskin_num += 1) << ", ";
                            cout << (beskin_num += 1) << endl;
                            break;
                        case 3: cout << (beskin_num += 1) << ", ";
                            cout << (beskin_num += 1) << ", ";
                            cout << (beskin_num += 1) << endl;
                            break;
                        }

                        if (beskin_p >= 1 && beskin_p <= 3) // beskin_p (숫자 넘길 횟수) 를 입력받으면 while 문 종료
                        {
                            break;
                        }
                    }
                }

                else
                {
                    cout << "컴퓨터 패배";
                    key[1] = 2;
                    break;
                }

            }

        }

        if (key[1] == 1)
        {
            break;
        }
#pragma endregion
#pragma region 수수께끼_스핑크스몬스터
        if ((px == mx2 && py == my2) || (px - 1 == mx2 && py == my2) || (px + 1 == mx2 && py == my2) || (px == mx2 && py - 1 == my2) || (px == mx2 && py + 1 == my2))
        {
            cout << "몬스터를 마주쳤다!";
            key[2] = 1;
            map[mx2][my2] = "□";
            mx2 = 0;
            my2 = 0;
            string u_answer;
            int wrong_answer = 0;
            string quiz[2][10] = {
                                    {
                                        "항상 말다툼이 일어나는 곳은?", "중학생 고등학생만 탈 수 있는 차는?",
                                        "밤낮을 가리지 않고 일하는 것은?", "몸에 해로운 바지는?",
                                        "먹을수록 덜덜 떨게되는 음식은?", "세상에서 가장 빠른 떡은?",
                                        "크면 클수록 가벼워지는 것은?", "왕이 궁에 가기 싫으면 하는 말은?",
                                        "인천앞바다의 반대말은?", "도둑이 훔친 돈을 뭐라고 할까?",
                                    },
                                    {
                                        "경마장", "중고차",
                                        "시계", "유해진",
                                        "추어탕", "헐레벌떡",
                                        "풍선", "궁시렁",
                                        "인천엄마다", "슬그머니",
                                    }
            };

            for (int problem = 0; problem < 10; problem++)
            {
                cout << quiz[0][problem] << endl;
                cin >> u_answer;

                if (u_answer == quiz[1][problem])
                {
                    system("cls");
                    for (int i = 0; i < 20; i++)
                    {
                        for (int j = 0; j < 20; j++)
                        {
                            cout << map[i][j];
                        }
                        cout << endl;
                    }
                    cout << "흠... 정답을 맞췄군. 제법인데?" << endl << endl;
                }
                else
                {
                    system("cls");
                    for (int i = 0; i < 20; i++) // 맨 밑에 이동에 관련된 실행문에서 각 등장 요소들의 이동 후의 행과 열의 값을 지정'만' 했으니 그 값을 바탕으로 맵을 재출력하는 과정
                    {
                        for (int j = 0; j < 20; j++)
                        {
                            cout << map[i][j];
                        }
                        cout << endl;
                    }
                    cout << "바보같은 녀석 ㅋㅋㅋ 정답은 " << quiz[1][problem] << "이다." << endl << endl;
                    wrong_answer++;
                }

                if (wrong_answer == 4)
                {
                    cout << "4번이나 틀리다니!!! 너는 탈출할 자격이 없구나!!! 죽어라!!!" << endl;
                    break;
                }
            }

            if (wrong_answer <= 3) // 10번 문제를 내는데, 4개 이상 틀리거나 10문제를 풀면 for문이 종료되는데, 종료 시점에 승패를 판단해서 key 값 변경하는 문법
            {
                cout << "크윽... 분하군... 다음엔 더 어려운 문제로 돌아오겠다..." << endl;
                key[2] = 2;
            }
            else
            {
                break;
            }
        }
        if (key[2] == 1)
        {
            cout << "game over" << endl;
            break;
        }
#pragma endregion
#pragma region 빙고몬스터
        if ((px == mx3 && py == my3) || (px - 1 == mx3 && py == my3) || (px + 1 == mx3 && py == my3) || (px == mx3 && py - 1 == my3) || (px == mx3 && py + 1 == my3))
        {
            cout << "몬스터를 마주쳤다!\n";

            map[mx3][my3] = "□";
            mx3 = 0; my3 = 0;
            key[3] = 1;

            srand((unsigned int)time(NULL));

            int player_num;
            int monster_num;

            bool p_win = false;
            bool m_win = false;

            int empty = 0;

            int p_row = 0;
            int p_col = 0;
            int m_row = 0;
            int m_col = 0;

            char bingo[3][3]; // 빙고판 크기 (3 x 3)

            for (int i = 0; i < 3; i++) // 필드 넣기
                for (int j = 0; j < 3; j++)
                    bingo[i][j] = 'c';



            for (int i = 0; i < 3; i++) // 필드에 찍기
            {
                for (int j = 0; j < 3; j++)
                    cout << bingo[i][j];
                cout << endl;
            }


            while (1) // ########## 빙고 게임 메인 틀 ###########
            {
                cout << "a : 사용자의 말 | b : 몬스터의 말 | c : 빈칸 " << endl << endl;
                cout << "왼쪽 위부터 0 1 2 이다. 숫자를 넣으시오" << endl;

                cin >> player_num;
                p_row = player_num / 3; // 가로 (0 1 2 ---> 0 // 3 4 5 ---> 1 // 6 7 8 ---> 2)
                p_col = player_num % 3; // 세로 (0 1 2 ---> 0 // 3 4 5 ---> 1 // 6 7 8 ---> 2)

                Sleep(1000); // 1000밀리초 딜레이 넣기 (1000밀리초 = 1초)

                if ((bingo[p_row][p_col] == 'c')) // 플레이어가 입력한 숫자에 해당하는 위치에 말을 놓을 수 있는가? (빈칸인가?)
                {
                    bingo[p_row][p_col] = 'a'; // 놓을 수 있으면 빙고판의 해당 위치 값에 a 입력

                    system("cls");

                    for (int i = 0; i < 3; i++) // 플레이어 차례 후 필드 새로 입력
                    {
                        for (int j = 0; j < 3; j++)
                            cout << bingo[i][j];
                        cout << endl;
                    }

                    cout << "몬스터 차례 " << endl;

                    Sleep(1000);

                    while (1) // 몬스터 차례
                    {
                        monster_num = rand() % 9; // 몬스터가 말을 놓는 곳은 랜덤 설정

                        m_row = monster_num / 3; // 가로
                        m_col = monster_num % 3; // 세로


                        if (bingo[m_col][m_row] == 'c') // 몬스터가 말을 두려는 곳이 c로 비어있으면
                        {
                            bingo[m_col][m_row] = 'b'; // 말을 두고 해당 위치값을 필드에 저장
                            break;
                        }

                        else // 안 비는 경우 (말을 놓을 수 없음)
                        {
                            // 
                            for (int i = 0; i < 3; i++) // 가로
                                for (int j = 0; j < 3; j++) // 세로
                                    if (bingo[i][j] != 'c') // bingo 배열의 3x3 모든 값을 하나하나 'c' 인지 판단하는 if문
                                        empty++;

                            if (empty == 9) // 위에서 말을 놓을 수 없는 위치를 판단하고, 9개 칸 모두 놓을 수 없으면 컴퓨터 턴 종료
                                break;

                            empty = 0; // 밑에서 설명되겠지만 무승부를 판단하기 위한 변수
                        }
                    }

                    Sleep(1000);

                    system("cls");

                    for (int i = 0; i < 3; i++) // 몬스터 말 놓고 필드 찍기
                    {
                        for (int j = 0; j < 3; j++)
                            cout << bingo[i][j];
                        cout << endl;
                    }

                    // 플레이어턴을 실행하고, 컴퓨터의 턴을 실행한 후에 빙고가 맞는지 판단하는 구간

                    for (int i = 0; i < 3; i++) // 012 345 789 (가로로 빙고인가?)
                        if ((bingo[i][0] == bingo[i][1]) && (bingo[i][1] == bingo[i][2]))
                            if (bingo[i][0] == 'a')
                            {
                                p_win = true;
                            }
                            else if (bingo[i][0] == 'b')
                            {
                                m_win = true;
                            }
                            else  // 가로로 빙고가 아니면 아무 실행문도 처리 안함
                                ;

                    for (int i = 0; i < 3; i++) // 036 147 258 (세로로 빙고인가)
                        if ((bingo[0][i] == bingo[1][i]) && (bingo[1][i] == bingo[2][i]))
                            if (bingo[0][i] == 'a')
                            {
                                p_win = true;
                            }
                            else if (bingo[0][i] == 'b')
                            {
                                m_win = true;
                            }
                            else // 세로로 빙고가 아니면 아무 실행문도 처리 안함
                                ;

                    if ((bingo[0][0] == bingo[1][1]) && (bingo[1][1] == bingo[2][2])) // 대각선(\) 로 승리 0 4 8
                        if (bingo[0][0] == 'a')
                            p_win = true;
                        else if (bingo[0][0] == 'b')
                            m_win = true;
                        else // 대각선(\) 로 빙고가 아니면 아무 실행문도 처리 안함
                            ;

                    if ((bingo[0][2] == bingo[1][1]) && (bingo[1][1] == bingo[2][0])) // 대각선(/) 로 승리 2 4 6
                        if (bingo[0][2] == 'a')
                            p_win = true;
                        else if (bingo[0][2] == 'b')
                            m_win = true;
                        else // 대각선(/) 로 빙고가 아니면 아무 실행문도 처리 안함
                            ;

                    for (int i = 0; i < 3; i++)
                        for (int j = 0; j < 3; j++)
                            if (bingo[i][j] == 'c')
                                empty++;

                    // 설명 ******* : 플레이어 턴 -> 컴퓨터 턴 -> 빙고 여부 판단 -> 빙고 여부에 따라 플레이어나 몬스터의 승리값을 true로 설정 -> 무승부인지 플레이어의 승리인지 컴퓨터의 승리인지 조건을 비교하여 판단 

                    if (empty == 9) // 무승부로 종료 (empty로 남은 칸 수가 있는지 판단)
                    {
                        cout << "둘 수 있는 자리가 없습니다. 무승부" << endl;
                        break;
                    }

                    if (p_win)
                    {
                        cout << "빙고! 사용자가 이겼습니다." << endl;
                        key[3] = 2;
                        break;
                    }
                    if (m_win)
                    {
                        cout << "빙고! 몬스터가 이겼습니다." << endl;
                        break;
                    }
                    // 턴을 모두 종료하고, 사용했던 변수값들 초기화
                    empty = 0; // 빈칸 판단
                    p_row = 0; // 플레이어가 입력한 값에 해당하는 가로
                    p_col = 0; // 플레이어가 입력한 값에 해당하는 세로
                    m_row = 0; // 몬스터가 입력한 값에 해당하는 가로
                    m_col = 0; // 몬스터가 입력한 값에 해당하는 세로
                }

                else // 플레이어가 말을 둘 수 없음 c(빈칸)가 아닌 a(플레이어의 말)나 b(컴퓨터의 말)가 자리하고 있음
                {
                    empty = 0;
                    p_row = 0;
                    p_col = 0;
                    m_row = 0;
                    m_col = 0;
                    cout << "그곳엔 둘 수 없습니다.";
                }

            }

        }
        if (key[3] == 1) // 플레이어가 이긴 경우가 아니면 key값이 1이기 때문에 게임 오버시키는 if문
        {
            cout << "game over";
            break;
        }
#pragma endregion

        // 1. 빙고몬스터 : empty 값 ++ 하기 전 == !=
        // 2. 빙고몬스터 : 마지막에 빙고 칸을 다 채웠을 때, 빙고가 완성된 경우 무승부로 판단 (마지막 무승부/플레이어/컴퓨터 승리 판단 순서만 바꾸면 될듯?)
        // 만약에 마지막에 다 했는데 컴터도 빙고 하고 나도 빙고 하면???
        if (key[0] == 0)
        {
            mmx[0] = rand() % 4; // 몬스터들이 어디로 이동할지 랜덤으로 정할 때 쓰기 위한 변수 설정 (ex ---> 값이 0이면 위로 이동)

            map[mx][my] = "□";
            switch (mmx[0]) // 입력받은 키를 토대로 어디로 이동할지 case로 나눈 후 위치값 수정
            {
            case 1:
                if (my != 0) // if 조건을 걸고 맵을 넘어갈 수 없도록 제한
                {
                    my -= 1;
                }
                break;
            case 2:
                if (mx != 19)
                {
                    mx += 1;
                }
                break;
            case 3:
                if (my != 19)
                {
                    my += 1;
                }
                break;
            case 0:
                if (mx != 0)
                {
                    mx -= 1;
                }
                break;
            }
        }
        if (key[1] == 0)
        {
            mmx[1] = rand() % 4;

            map[mx1][my1] = "□";
            switch (mmx[1])
            {
            case 1:
                if (my1 != 0)
                {
                    my1 -= 1;
                }
                break;
            case 2:
                if (mx1 != 19)
                {
                    mx1 += 1;
                }
                break;
            case 3:
                if (my1 != 19)
                {
                    my1 += 1;
                }
                break;
            case 0:
                if (mx1 != 0)
                {
                    mx1 -= 1;
                }
                break;
            }
        }
        if (key[2] == 0)
        {
            mmx[2] = rand() % 4;

            map[mx2][my2] = "□";
            switch (mmx[2])
            {
            case 1:
                if (my2 != 0)
                {
                    my2 -= 1;
                }
                break;
            case 2:
                if (mx2 != 19)
                {
                    mx2 += 1;
                }
                break;
            case 3:
                if (my2 != 19)
                {
                    my2 += 1;
                }
                break;
            case 0:
                if (mx2 != 0)
                {
                    mx2 -= 1;
                }
                break;
            }
        }
        if (key[3] == 0)
        {
            mmx[3] = rand() % 4;

            map[mx3][my3] = "□";
            switch (mmx[3])
            {
            case 1:
                if (my3 != 0)
                {
                    my3 -= 1;
                }
                break;
            case 2:
                if (mx3 != 19)
                {
                    mx3 += 1;
                }
                break;
            case 3:
                if (my3 != 19)
                {
                    my3 += 1;
                }
                break;
            case 0:
                if (mx3 != 0)
                {
                    mx3 -= 1;
                }
                break;
            }
        }

        int key = _getch(); // 사용자가 입력키를 입력하면 저장

        map[px][py] = "□";

        if (key < 96) // 입력받은 키가 대문자 일때 소문자로 통일시킴
        {
            key += 32;
        }

        switch (key) // 입력받은 키를 토대로 플레이어의 위치값을 변환함
        {
        case 97: // a에 해당하는 숫자값
            if (py != 0) // if 조건을 걸고 맵을 넘어갈 수 없도록 제한
            {
                py -= 1;
            }
            break;
        case 115: // s에 해당하는 숫자값
            if (px != 19)
            {
                px += 1;
            }
            break;
        case 100: // d에 해당하는 숫자값
            if (py != 19)
            {
                py += 1;
            }
            break;
        case 119: // w에 해당하는 숫자값
            if (px != 0)
            {
                px -= 1;
            }
            break;
        default: // 방향키 이외 다른 키 입력 시 그냥 넘김
            break;
        }
    }
}