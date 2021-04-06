// 입출력과 사칙연산
// 1008
/*#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << fixed;      //소수점 아래로 고정
    cout.precision(10); //(정수포함) 전체 10자리 표현
    cout << (double)a / b << endl;
    return 0;
}*/

// 10869
/*#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    // A + B, A - B, A* B, A / B(몫), A% B(나머지)
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
    return 0;
}*/

// 10430
/*#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    // 첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C,
    // 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C
    cout << (a + b) % c << endl;
    cout << ((a % c) + (b % c)) % c << endl;
    cout << (a * b) % c << endl;
    cout << ((a % c) * (b % c)) % c << endl;
    return 0;
}*/

// 2588
/*#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << a * (b % 10) << endl;
    cout << a * ((b % 100) / 10) << endl;
    cout << a * (b / 100) << endl;
    cout << a * b << endl;
    return 0;
}*/

// if문
// 1330
/*#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << ">" << endl;
    else if (a < b)
        cout << "<" << endl;
    else if (a == b)
        cout << "==" << endl;
    return 0;
}*/

// 9498
#include <iostream>
using namespace std;
int main()
{
    int grad;
    cin >> grad;
    if (90 <= grad && grad <= 100)
        cout << "A" << endl;
    else if (80 <= grad && grad <= 89)
        cout << "B" << endl;
    else if (70 <= grad && grad <= 79)
        cout << "C" << endl;
    else if (60 <= grad && grad <= 69)
        cout << "D" << endl;
    else if (0 <= grad && grad <= 59)
        cout << "E" << endl;
    return 0;
}