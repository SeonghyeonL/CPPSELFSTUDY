// 1008
/*#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << fixed;      //�Ҽ��� �Ʒ��� ����
    cout.precision(10); //(��������) ��ü 10�ڸ� ǥ��
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
    // A + B, A - B, A* B, A / B(��), A% B(������)
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
    // ù° �ٿ� (A+B)%C, ��° �ٿ� ((A%C) + (B%C))%C,
    // ��° �ٿ� (A��B)%C, ��° �ٿ� ((A%C) �� (B%C))%C
    cout << (a + b) % c << endl;
    cout << ((a % c) + (b % c)) % c << endl;
    cout << (a * b) % c << endl;
    cout << ((a % c) * (b % c)) % c << endl;
    return 0;
}*/

// 2588
#include <iostream>
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
}