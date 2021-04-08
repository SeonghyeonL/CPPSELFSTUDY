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
    // M < 45라면 M=M+15, H=H-1
    // H < 1의 경우 M < 45라면 H=23
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

// for문
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
    // cout과 cin의 속도를 빠르게
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, a, b;
    cin >> T;
    for (int i = 0;i < T;i++)
    {
        cin >> a >> b;
        cout << a + b << "\n";
        // time → endl >>> \n
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

// while문
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

// 1차원 배열
// 10818
/*#include <iostream>
using namespace std;
int main()
{
    int N, num, min, max;
    int* p;
    cin >> N;
    p = new int[N];
    for (int i = 0;i < N;i++)
        cin >> p[i];
    min = p[0]; max = p[0];
    for (int i = 0;i < N;i++)
    {
        if (min > p[i])
            min = p[i];
        if (max < p[i])
            max = p[i];
    }
    cout << min << " " << max;
    delete[] p;
    return 0;
}*/

// 2562
/*#include <iostream>
using namespace std;
int main()
{
    int max, maxnum;
    int arr[9];
    for (int i = 0;i < 9;i++)
        cin >> arr[i];
    max = arr[0]; maxnum = 1;
    for (int i = 0;i < 9;i++)
    {
        if (max < arr[i])
        {
            max = arr[i]; maxnum = i + 1;
        }
    }
    cout << max << "\n" << maxnum;
    return 0;
}*/

// 2577
/*#include <iostream>
using namespace std;
int main()
{
    int A, B, C, mult, now;
    int freq[10] = { 0 };
    cin >> A >> B >> C;
    mult = A * B * C;
    now = mult;
    while (now >= 10)
    {
        freq[now % 10] += 1;
        now = now / 10;
    }
    // 10보다 작아지면 (0~9)
    freq[now % 10] += 1;
    for (int i = 0;i < 10;i++)
        cout << freq[i] << "\n";
    return 0;
}*/

// 3052
/*#include <iostream>
using namespace std;
int main()
{
    int N[10] = { 0 };
    int M[42] = { 0 };
    int ans = 0;
    for (int i = 0;i < 10;i++)
        cin >> N[i];
    for (int i = 0;i < 10;i++)
    {
        M[N[i] % 42] += 1;
    }
    for (int i = 0;i < 42;i++)
    {
        if (M[i] != 0)
            ans += 1;
    }
    cout << ans;
    return 0;
}*/

// 1546
/*#include <iostream>
using namespace std;
int main()
{
    int N = 0, max = 0;
    double sum = 0;
    int* S;
    cin >> N;
    S = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
        if (max < S[i])
            max = S[i];
    }
    for (int i = 0; i < N; i++)
    {
        sum += (double) S[i] / max * 100;
    }
    cout << (double) sum / N;
    delete[] S;
    return 0;
}*/

// 8958
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num = 0, cnt = 0, grade = 0;
    string ox;
    cin >> num;
    for (int i = 0;i < num;i++)
    {
        cin >> ox;
        for (int j = 0;j < ox.size();j++)
        {
            if (ox[j] == 'O')
            {
                cnt += 1;
                grade += cnt;
            }
            else if (ox[j] == 'X')
            {
                cnt = 0;
            }
        }
        cout << grade << "\n";
        grade = 0; cnt = 0;
    }
    return 0;
}*/

// 4344
/*#include <iostream>
using namespace std;
int main()
{
    int C = 0, N = 0, cnt = 0;
    double sum = 0;
    int* G;
    cin >> C;
    for (int i = 0;i < C;i++)
    {
        cin >> N;
        G = new int[N];
        for (int j = 0;j < N;j++)
        {
            cin >> G[j];
            sum += G[j];
        }
        sum /= N;
        for (int j = 0;j < N;j++)
        {
            if (G[j] > sum)
            {
                cnt += 1;
            }
        }
        cout << fixed; // cout.setf(ios::fixed);와 동일
        // 해제 시에는 cout.unsetf(ios::fixed);
        cout.precision(3);
        cout << (double)cnt / N * 100 << "%\n";
        sum = 0; cnt = 0;
        delete[] G;
    }
    return 0;
}*/

// 함수
// 15596
/*#include <iostream>
#include <vector>
using namespace std;
long long sum(vector<int>& a) {
    long long ans = 0;
    for (int i = 0;i < a.size();i++)
    {
        ans += a[i];
    }
    return ans;
}
int main()
{
    vector<int> A = { 1, 2, 3, 4, 5 };
    cout << sum(A);
    return 0;
}*/

// 4673
/*#include <iostream>
using namespace std;
int doing(int num)
{
    int ind = num, sum = num;
    while (ind >= 10)
    {
        sum += ind % 10;
        ind /= 10;
    }
    sum += ind;
    if (sum <= 10000)
    {
        return sum;
    }
    else
    {
        return -1;
    }
}
int main()
{
    bool ans[10000] = { false };
    for (int i = 1;i <= 10000;i++)
    {
        if (doing(i) != -1) // -1 : sum is over 10000
        {
            ans[doing(i) - 1] = true;
        }
    }
    for (int i = 0;i < 10000;i++)
    {
        if (!ans[i]) // false
        {
            cout << i + 1 << "\n";
        }
    }
    return 0;
}*/

// 1065
/*#include <iostream>
using namespace std;
int main()
{
    int N, res = 0, cnt = 0;
    cin >> N;
    if (N < 100)
        res = N;
    else // N >= 100
    {
        for (int i = 100;i <= N;i++)
        {
            // abc → c-b=b-a
            if (i < 1000)
            {
                if ((i % 10) - ((i / 10) % 10) == ((i / 10) % 10) - (i / 100))
                    cnt += 1;
            }
        }
        res = 99 + cnt;
    }
    cout << res;
    return 0;
}*/

// 문자열
// 11654
/*#include <iostream>
using namespace std;
int main()
{
    char A;
    int B;
    cin >> A;
    B = A;
    cout << B;
    return 0;
}*/

// 11720
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N, sum = 0;
    string num;
    cin >> N >> num;
    for (int i = 0;i < N;i++)
        sum += num[i];
    cout << sum - 48 * N;
    return 0;
}*/

// 10809
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    char al;
    cin >> S;
    for (int i = 0;i < 26;i++)
    {
        al = 97 + i;
        if (S.find(al) != string::npos)
        {
            cout << S.find(al) << " ";
        }
        else
        {
            cout << -1 << " ";
        }
    }
    return 0;
}*/

// 2675
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T = 0, R = 0;
    string S, ANS;
    cin >> T;
    for (int i = 0;i < T;i++)
    {
        cin >> R >> S;
        for (int j = 0;j < S.size();j++)
        {
            for (int k = 0;k < R;k++)
                cout << S[j];
        }
        cout << "\n";
    }
    return 0;
}*/

// 1157
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    string alph;
    cin >> alph;
    // A=65, a=97
    int num[26] = { 0 };
    for (int i = 0;i < alph.size();i++)
    {
        if (alph[i] >= 97)
            num[alph[i] - 97] += 1;
        else
            num[alph[i] - 65] += 1;
    }
    int max = num[0], maxind = 0;
    for (int i = 0;i < 26;i++)
    {
        if (max < num[i])
        {
            max = num[i]; maxind = i;
        }
    }
    for (int i = 0;i < 26;i++)
    {
        if (maxind != i && (max == num[i]))
        {
            max = -1;
        }
    }
    char res;
    if (max == -1)
    {
        res = 63; // ?=63
    }
    else
    {
        res = maxind + 65;
    }
    cout << res;
    return 0;
}*/

// 1152
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    int ans = 0;
    bool exist = false;
    for (int i = 0;i < a.size();i++)
    {
        if (a[i] == ' ' && i != 0 && i != a.size() - 1)
        {
            ans += 1;
        }
        else if (a[i] != ' ') { exist = true; }
    }
    if (exist) { cout << ans + 1; }
    else { cout << 0; }
    return 0;
}*/

// 2908
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    string A, B, a, b;
    cin >> A >> B;
    a = A; b = B;
    for (int i = 0;i < 3;i++)
    {
        A[i] = a[2 - i];
        B[i] = b[2 - i];
    }
    if (A[0] > B[0]) { cout << A; }
    else if (A[0] < B[0]) { cout << B; }
    else // A[0]==B[0]
    {
        if (A[1] > B[1]) { cout << A; }
        else if (A[1] < B[1]) { cout << B; }
        else // A[1]==B[1]
        {
            if (A[2] > B[2]) { cout << A; }
            else if (A[2] < B[2]) { cout << B; }
        }
    }
    return 0;
}*/

// 5622
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    string dial;
    cin >> dial;
    int sum = 0;
    for (int i = 0;i < dial.size();i++)
    {
        if (dial[i] == 'A' || dial[i] == 'B' || dial[i] == 'C')
            sum += 3;
        else if (dial[i] == 'D' || dial[i] == 'E' || dial[i] == 'F')
            sum += 4;
        else if (dial[i] == 'G' || dial[i] == 'H' || dial[i] == 'I')
            sum += 5;
        else if (dial[i] == 'J' || dial[i] == 'K' || dial[i] == 'L')
            sum += 6;
        else if (dial[i] == 'M' || dial[i] == 'N' || dial[i] == 'O')
            sum += 7;
        else if (dial[i] == 'P' || dial[i] == 'Q' || dial[i] == 'R' || dial[i] == 'S')
            sum += 8;
        else if (dial[i] == 'T' || dial[i] == 'U' || dial[i] == 'V')
            sum += 9;
        else if (dial[i] == 'W' || dial[i] == 'X' || dial[i] == 'Y' || dial[i] == 'Z')
            sum += 10;
    }
    cout << sum;
    return 0;
}*/

// 2941
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input;
    cin >> input;
    int num = 1;
    bool dz = false;
    // c= c- dz= d- lj nj s= z=
    for (int i = 1;i < input.size();i++)
    {
        if (input[i - 1] == 'c')
        {
            if (input[i] != '=' && input[i] != '-') { num += 1; }
        }
        else if (input[i - 1] == 'd')
        {
            if (input[i] == 'z' && i != input.size() - 1) { dz = true; }
            else if (input[i] == 'z' && i == input.size() - 1) { num += 1; }
            else if (input[i] != '-') { num += 1; }
        }
        else if (input[i - 1] == 'l')
        {
            if (input[i] != 'j') { num += 1; }
        }
        else if (input[i - 1] == 'n')
        {
            if (input[i] != 'j') { num += 1; }
        }
        else if (input[i - 1] == 's')
        {
            if (input[i] != '=') { num += 1; }
        }
        else if (!dz && input[i - 1] == 'z')
        {
            if (input[i] != '=') { num += 1; }
        }
        else if (dz && input[i - 1] == 'z')
        {
            if (input[i] != '=') { dz = false; num += 2; }
            else if (input[i] == '=') { dz = false; }
        }
        else { num += 1; }
    }
    cout << num;
    return 0;
}*/

// 1316
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N = 0;
    string word;
    int num = 0;
    int who = 0;
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        cin >> word;
        bool ok = true;
        int alph[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,
                0,0,0,0,0,0,0,0,0,0,0,0,0}; // 0으로 초기화
        for (int j = 0;j < word.size();j++)
        {
            // index 0을 1로 대신 저장함!
            who = word[j] - 97; // a is 0
            if (alph[who] == 0) { alph[who] = j + 1; }
            else if (alph[who] == j) { alph[who] = j + 1; }
            else { ok = false; }
        }
        if (ok) { num += 1; }
    }
    cout << num;
    return 0;
}*/

// 기본 수학 1
//