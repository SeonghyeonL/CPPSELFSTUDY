// ����°� ��Ģ����
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

// if��
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
/*#include <iostream>
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
        cout << "F" << endl;
    return 0;
}*/

// 2753
/*#include <iostream>
using namespace std;
int main()
{
    int year;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0)
        cout << 1 << endl;
    else if (year % 400 == 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}*/

// 14681
/*#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x;
    cin >> y;
    if (x > 0)
    {
        if (y > 0)
            cout << 1 << endl;
        else if (y < 0)
            cout << 4 << endl;
    }
    else if (x < 0)
    {
        if (y > 0)
            cout << 2 << endl;
        else if (y < 0)
            cout << 3 << endl;
    }
    return 0;
}*/

// 2884
/*#include <iostream>
using namespace std;
int main()
{
    int H, M;
    cin >> H >> M;
    // M < 45��� M=M+15, H=H-1
    // H < 1�� ��� M < 45��� H=23
    if (H < 1 && M < 45)
    {
        H = 23;
        M = M + 15;
    }
    else if (H >= 1 && M < 45)
    {
        H = H - 1;
        M = M + 15;
    }
    else if (M >= 45)
    {
        M = M - 45;
    }
    cout << H << " " << M << endl;
    return 0;
}*/

// for��
// 2739
/*#include <iostream>
using namespace std;
int main()
{
    int N, i;
    cin >> N;
    for (i = 1;i <= 9;i++)
        cout << N << " * " << i << " = " << N * i << endl;
    return 0;
}*/

// 10950
/*#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int a, b;
    for (int i = 0;i < T;i++)
    {
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}*/

// 8393
/*#include <iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cin >> n;
    for (int i = 1;i <= n;i++)
        sum += i;
    cout << sum << endl;
    return 0;
}*/

// 15552
/*#include <iostream>
using namespace std;
int main()
{
    // cout�� cin�� �ӵ��� ������
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, a, b;
    cin >> T;
    for (int i = 0;i < T;i++)
    {
        cin >> a >> b;
        cout << a + b << "\n";
        // time �� endl >>> \n
    }
    return 0;
}*/

// 2741
/*#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 1;i <= N;i++)
        cout << i << "\n";
    return 0;
}*/

// 2742
/*#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = N;i > 0;i--)
        cout << i << "\n";
    return 0;
}*/

// 11021
/*#include <iostream>
using namespace std;
int main()
{
    int T, A, B;
    cin >> T;
    for (int i = 1;i <= T;i++)
    {
        cin >> A >> B;
        cout << "Case #" << i << ": " << A + B << "\n";
    }
    return 0;
}*/

// 11022
/*#include <iostream>
using namespace std;
int main()
{
    int T, A, B;
    cin >> T;
    for (int i = 1;i <= T;i++)
    {
        cin >> A >> B;
        cout << "Case #" << i << ": " << A << " + " << B
            << " = " << A+B << "\n";
    }
    return 0;
}*/

// 2438
/*#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 1;i <= N;i++)
    {
        for (int j = 0;j < i;j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}*/

// 2439
/*#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 1;i <= N;i++)
    {
        for (int j = 0;j < N - i;j++)
            cout << " ";
        for (int j = 0;j < i;j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}*/

// 10871
/*#include <iostream>
using namespace std;
int main()
{
    int N, X, num;
    cin >> N >> X;
    for (int i = 0;i < N;i++)
    {
        cin >> num;
        if (num < X)
            cout << num << " ";
    }
    return 0;
}*/

// while��
// 10952
/*#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    while (A != 0 || B != 0)
    {
        if (A == 0 && B == 0)
        {
            break;
        }
        else
        {
            cout << A + B << "\n";
            cin >> A >> B;
        }
        
    }
    return 0;
}*/

// 10951
/*#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    while (!cin.eof())
    {
        cout << A + B << "\n";
        cin >> A >> B;
    }
    return 0;
}*/

// 1110
/*#include <iostream>
using namespace std;
int main()
{
    int N, ten, one, n, now = -1, cnt = 0;
    cin >> N;
    n = N;
    while (now != N)
    {
        now = n;
        if (now < 10)
        {
            ten = 0; one = now;
        }
        else
        {
            ten = now / 10; one = now % 10;
        }
        now = one * 10 + ((ten + one) % 10);
        n = now;
        cnt += 1;
    }
    cout << cnt;
    return 0;
}*/

// 1���� �迭