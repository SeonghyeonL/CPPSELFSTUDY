// 1. 입출력과 사칙연산
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

// 2. if문
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

// 3. for문
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

// 4. while문
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

// 5. 1차원 배열
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

// 6. 함수
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

// 7. 문자열
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

// 8. 기본 수학 1
// 1712
/*#include <iostream>
using namespace std;
int main()
{
    double A, B, C;
    int ans;
    cin >> A >> B >> C;
    //C*ans>=A+B*ans
    //ans=A/(C-B)+1 if C-B>0
    if (C - B <= 0)
        ans = -1;
    else // C - B > 0
        ans = A / (C - B) + 1;
    cout << ans;
    return 0;
}*/

// 2292
/*#include <iostream>
using namespace std;
int main()
{
    double N, com = 1, ans = 0;
    cin >> N;
    // 1→1, 2~7→2. 8~19→3, 20~37→4, 38~61→5
    //  1       6        12        18        24
    if (N == 1) { ans = 1; }
    else if (N > 1)
    {
        for (int i = 0;N > com + (double)6 * i;i++)
        {
            com += (double)6 * i; ans += 1;
        }
        ans += 1;
    }
    cout << ans;
    return 0;
}*/

// 1193
/*#include <iostream>
using namespace std;
int main()
{
    int X = 0, sum = 0, cnt = 0;
    cin >> X;
    for (int i = 1;;i++)
    {
        if (X > i)
        {
            X -= i;
        }
        else if (X <= i)
        {
            sum = i+1;
            cnt = X;
            break;
        }
    }
    if (sum % 2 == 0)
    {
        cout << sum - cnt << "/" << cnt;
    }
    else if (sum % 2 == 1)
    {
        cout << cnt << "/" << sum - cnt;
    }
    return 0;
}*/

// 2869
/*#include <iostream>
using namespace std;
int main()
{
    int A = 0, B = 0, V = 0;
    cin >> A >> B >> V;
    // V는 높이, A는 낮에 올라감, B는 밤에 미끄러짐
    int day = 0;
    if (V > A)
    {
        int vaba = (V - A) / (A - B);
        if ((V - A) % (A - B) == 0) { day = vaba + 1; }
        else { day = vaba + 2; }
    }
    else if (V == A)
    {
        day = 1;
    }
    cout << day;
    return 0;
}*/

// 10250
/*#include <iostream>
using namespace std;
int main()
{
    int T = 0, H = 0, W = 0, N = 0;
    // 개수, 층, 방, 손님번호
    int floor = 0, number = 0, ans = 0;
    cin >> T;
    for (int i = 0;i < T;i++)
    {
        H = 0; W = 0; N = 0;
        floor = 0; number = 0; ans = 0;
        cin >> H >> W >> N;
        number = N / H; floor = N - H*number;
        if (floor == 0) { floor = H; number -= 1; }
        ans = floor * 100 + number + 1;
        cout << ans << "\n";
    }
    return 0;
}*/

// 2775
/*#include <iostream>
using namespace std;
int people(int floor, int number)
{
    int result = 0;
    if (floor == 1)
    {
        for (int i = 1;i <= number;i++)
            result += i;
    }
    else // floor>1
    {
        for (int i = 1;i <= number;i++)
            result += people(floor - 1, i);
    }
    return result;
}
int main()
{
    int T = 0, k = 0, n = 0;
    cin >> T;
    // k층에 n호
    for (int i = 0;i < T;i++)
    {
        k = 0; n = 0;
        cin >> k >> n;
        cout << people(k, n) << "\n";
    }
    return 0;
}*/

// 2839
/*#include <iostream>
using namespace std;
int main()
{
    int N = 0, ans = 0;
    cin >> N;
    if (N >= 5)
    {
        for (int i = N / 5;i >= 0;i--)
        {
            if ((N - i * 5) % 3 == 0)
            {
                ans = i + (N - i * 5) / 3; break;
            }
            else if ((N - i * 5) % 3 != 0 && i == 0)
            {
                ans = -1;
            }
        }
    }
    else
    {
        if (N == 3) { ans = 1; }
        else { ans = -1; }
    }
    cout << ans;
    return 0;
}*/

// 10757
/*#include <iostream>
#include <string>
#include <algorithm> // reverse 이용
using namespace std;
int main()
{
    string A, B;
    cin >> A >> B;
    reverse(A.begin(), A.end()); reverse(B.begin(), B.end());
    int a = 0, b = 0, sum = 0, up = 0;
    if (A.size() >= B.size())
    {
        for (int i = 0;i < B.size();i++)
        {
            a = A[i] - 48; b = B[i] - 48;
            sum = a + b + up;
            if (sum >= 10) { sum -= 10; up = 1; }
            else { up = 0; }
            A[i] = sum + 48;
            if(A.size()==B.size()&&i==B.size()-1&&up==1)
            {
                A.push_back('1');
                up = 0;
            }
            else if (i == B.size() - 1 && up == 1)
            {
                for (int j = 1;i + j + 1 <= A.size();j++)
                {
                    a = A[i + j];
                    a -= 48;
                    if (a + up == 10)
                    {
                        A[i + j] = 48; up = 1;
                        // check A[i + 2]
                    }
                    else // a+up<10
                    {
                        A[i + j] = a + up + 48; up = 0;
                        break;
                    }
                    if (j == A.size() - 1 - i && up == 1)
                    {
                        A.push_back('1'); up = 0;
                        break;
                    }
                }
            }
        }
        reverse(A.begin(), A.end());
        cout << A;
    }
    else // A.size() < B.size()
    {
        for (int i = 0;i < A.size();i++)
        {
            a = A[i] - 48; b = B[i] - 48;
            sum = a + b + up;
            if (sum >= 10) { sum -= 10; up = 1; }
            else { up = 0; }
            B[i] = sum + 48;
            if (i == A.size() - 1 && up == 1)
            {
                for (int j = 1;i + j + 1 <= B.size();j++)
                {
                    a = B[i + j];
                    a -= 48;
                    if (a + up == 10)
                    {
                        B[i + j] = 48; up = 1;
                        // check B[i + 2]
                    }
                    else // a+up<10
                    {
                        B[i + j] = a + up + 48; up = 0;
                        break;
                    }
                    if (j == B.size() - 1 - i && up == 1)
                    {
                        B.push_back('1'); up = 0;
                        break;
                    }
                }
            }
        }
        reverse(B.begin(), B.end());
        cout << B;
    }
    return 0;
}*/

// 1011
/*#include <iostream>
#include <cmath> // sqrt
using namespace std;
int main()
{
    // 1 / 1 1 / 1 2 1 / 1 2 2 1 / '1 2 3 2 1'
    // '1 2 3 3 2 1' / 1 2 3 4 3 2 1 / 1 2 3 4 4 3 2 1
    // 1 / 2 / 3 / 4 / '5' / '6'  / 7  / 8  / 9  / 10
    // 1 / 2 / 4 / 6 / '9' / '12' / 16 / 20 / 25 / 30
    // 1, 1증가, 2증가, 2증가, '3증가', '3증가', 4증가, 4증가
    // 1부터 n까지의 합 = (1+n)*n
    unsigned int T, x, y, dis, cnt, ans;
    // 숫자 딱 맞아서 unsigned int로 해 줘야 함!
    cin >> T;
    for (int i = 0;i < T;i++)
    {
        cin >> x >> y;
        dis = y - x; cnt = sqrt(dis); ans = 0;
        // 4/5/6/7/8/9
        // 5 6 / 7 9 / 11 12 / 15 16 / 18 20 / 23 25
        // 2 2 / 2 3 /  3  3 /  3  4 /  4  4 /  4  5
        if (dis > cnt * (cnt+1) && dis < (cnt+1) * (cnt+1))
        {
            ans = cnt * 2 + 1;
        }
        else if (dis == cnt * cnt)
        {
            ans = cnt * 2 - 1;
        }
        else if (dis > cnt * cnt && dis <= cnt * (cnt+1))
        {
            ans = cnt * 2;
        }
        cout << ans << "\n";
    }
    return 0;
}*/

// 9. 기본 수학 2
// 1978
/*#include <iostream>
using namespace std;
int main()
{
    // 주어진 수 N개 중에서 소수가 몇 개인지
    int N, n, cnt = 0;
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        cin >> n;
        if (n == 1) { continue; }
        else if (n == 2) { cnt += 1; continue; }
        else // n>2
        {
            for (int j = 2;j < n;j++)
            {
                if (n % j == 0) { break; }
                else if (j == n - 1) { cnt += 1; }
            }
        }
    }
    cout << cnt;
    return 0;
}*/

// 2581
/*#include <iostream>
using namespace std;
int main()
{
    int M, N;
    int cnt = 0, sum = 0, smallnum = 0;
    bool small = true;
    cin >> M >> N;
    for (int n = M;n <= N;n++)
    {
        if (n == 1) { continue; }
        else if (n == 2)
        {
            cnt += 1; sum += n;
            if (small)
            {
                smallnum = n; small = false;
            }
            continue;
        }
        else // n>2
        {
            for (int j = 2;j < n;j++)
            {
                if (n % j == 0) { break; }
                else if (j == n - 1)
                {
                    cnt += 1;
                    sum += n;
                    if (small)
                    {
                        smallnum = n; small = false;
                    }
                }
            }
        }
    }
    if (smallnum == 0) { sum = -1; cout << sum; }
    else { cout << sum << "\n" << smallnum; }
    return 0;
}*/

// 11653
/*#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    if (N > 1)
    {
        while (N != 1)
        {
            for (int i = 2;i <= N;i++)
            {
                if (N % i == 0)
                {
                    N /= i;
                    cout << i << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}*/

// 1929
/*#include <iostream>
using namespace std;
int a[1000001];
void function(int M, int N)
{
    // 에라토스테네스의 체

    // 1. 배열을 생성하여 초기화한다.
    for (int i = 2;i <= N;i++) { a[i] = i; }

    // 2. 2부터 시작해서 특정 수의 배수에 해당하는 수를 모두 지운다.
    // (지울 때 자기자신은 지우지 않고, 이미 지워진 수는 건너뛴다.)
    for (int i = 2;i <= N;i++)
    {
        if (a[i] == 0) continue; // 이미 지워진 수라면 건너뛰기

        // 아니라면, 그 배수부터 출발해서 가능한 모든 숫자 지우기
        for (int j = 2 * i;j <= N; j += i) { a[j] = 0; }
    }

    // 3. 2부터 시작하여 남아있는 수를 모두 출력한다.
    for (int i = M;i <= N;i++)
    {
        if (a[i] != 0) cout << a[i] << "\n";
    }
}
int main()
{
    int M, N, ii;
    cin >> M >> N;
    function(M, N);
    return 0;
}*/

// 4948
/*#include <iostream>
using namespace std;
int a[1000001];
void function(int M, int N)
{
    int cnt = 0;
    for (int i = 2;i <= N;i++) { a[i] = i; }

    for (int i = 2;i <= N;i++)
    {
        if (a[i] == 0) continue;
        for (int j = 2 * i;j <= N; j += i) { a[j] = 0; }
    }

    for (int i = M;i <= N;i++)
    {
        if (a[i] != 0) cnt += 1;
    }
    cout << cnt << "\n";
}
int main()
{
    int M;
    cin >> M;
    while (M != 0)
    {
        function(M + 1, 2 * M);
        cin >> M;
    }
    return 0;
}*/

// 9020
/*#include <iostream>
using namespace std;
int a[1000001];
void function(int N)
{
    for (int i = 2;i <= N;i++) { a[i] = i; }

    for (int i = 2;i <= N;i++)
    {
        if (a[i] == 0) continue;
        for (int j = 2 * i;j <= N; j += i) { a[j] = 0; }
    }

    for (int i = 2;i <= N;i++)
    {
        if (a[i] != 0) { ; }
    }
    int M = N / 2;
    for (int i = 0;i <= M;i++)
    {
        if (a[M + i] != 0 && a[M - i] != 0
                          && a[M + i] + a[M - i] == N)
        {
            cout << a[M - i] << " " << a[M + i] << "\n";
            break;
        }
    }
}
int main()
{
    // 2보다 큰 모든 짝수 → 두 소수의 합
    int T, n;
    cin >> T;
    for (int i = 0;i < T;i++)
    {
        cin >> n;
        function(n);
    }
    return 0;
}*/

// 1085
/*#include <iostream>
using namespace std;
int main()
{
    // 현재 위치 (x,y), 오른쪽 위 (w,h)
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    // x, y, w-x, h-y
    if (x <= y && x <= w - x && x <= h - y) { cout << x; }
    else if(y <= x && y <= w - x && y <= h - y) { cout << y; }
    else if (w - x <= x && w - x <= y && w - x <= h - y) { cout << w - x; }
    else if (h - y <= x && h - y <= y && h - y <= w - x) { cout << h - y; }
    return 0;
}*/

// 3009
/*#include <iostream>
using namespace std;
int main()
{
    int a1, a2, b1, b2, c1, c2, d1, d2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    if (a1 == b1) { d1 = c1; }
    else if (a1 == c1) { d1 = b1; }
    else if (b1 == c1) { d1 = a1; }
    if (a2 == b2) { d2 = c2; }
    else if (a2 == c2) { d2 = b2; }
    else if (b2 == c2) { d2 = a2; }
    cout << d1 << " " << d2;
    return 0;
}*/

// 4153
/*#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    int H = 0, S1 = 0, S2 = 0;
    cin >> A >> B >> C;
    while (A != 0 && B != 0 && C != 0)
    {
        if (A >= B && A >= C) { H = A; S1 = B; S2 = C; }
        else if (B >= A && B >= C) { H = B; S1 = A; S2 = C; }
        else if (C >= A && C >= B) { H = C; S1 = B; S2 = A; }
        if (H * H == S1 * S1 + S2 * S2) { cout << "right" << "\n"; }
        else { cout << "wrong" << "\n"; }
        cin >> A >> B >> C;
    }
    return 0;
}*/

// 3053
/*#include <iostream>
using namespace std;
int main()
{
    // 유클리드(→원), 택시(→정사각형)
    double pi = 3.14159265359;
    double R;
    cin >> R;
    cout << fixed;
    cout.precision(6);
    cout << R * R * pi << "\n" << 2 * R * R;
    return 0;
}*/

// 1002
/*#include <iostream>
using namespace std;
int main()
{
    int T;
    int x1, y1, r1, x2, y2, r2;
    cin >> T;
    for (int i = 0;i < T;i++)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        if(x1==x2 && y1==y2 && r1==r2)
        {
            cout << -1 << "\n";
        }
        else if((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)
            > (r1 + r2) * (r1 + r2)
            || (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)
            < (r1 - r2) * (r1 - r2))
        {
            cout << 0 << "\n";
        }
        else if ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)
            == (r1 + r2) * (r1 + r2)
            || (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)
            == (r1 - r2) * (r1 - r2))
        {
            cout << 1 << "\n";
        }
        else if ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)
            < (r1 + r2) * (r1 + r2)
            && (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)
            > (r1 - r2) * (r1 - r2))
        {
            cout << 2 << "\n";
        }
    }
    return 0;
}*/

// 10. 재귀
// 10872
/*#include <iostream>
using namespace std;
int sum = 1;
int fac(int n)
{
    if (n <= 1) { cout << sum; }
    else { sum *= n; n -= 1; fac(n); }
    return 0;
}
int main()
{
    int N;
    cin >> N;
    fac(N);
    return 0;
}*/

// 10870
/*#include <iostream>
using namespace std;
// 0 1 1 2 3 5 8 13 21 34 55 89 144 233
// 0 1 2 3 4 5 6  7  8  9 10 11  12  13
int pibo(int c)
{
    int res = 0;
    if (c == 0) { return 0; }
    if (c == 1) { return 1; }
    if (c >= 2) { res = pibo(c - 1) + pibo(c - 2); return res; }
}
int main()
{
    int n, sum = 0;
    cin >> n;
    cout << pibo(n);
    return 0;
}*/

// 2447
/*#include <iostream>
using namespace std;
int ar[7000][7000]; // 3^8=6561
void star(int n, int x, int y)
{
    if (n == 3)
    {
        ar[x][y] = 1;     ar[x][y + 1] = 1;     ar[x][y + 2] = 1;
        ar[x + 1][y] = 1;                       ar[x + 1][y + 2] = 1;
        ar[x + 2][y] = 1; ar[x + 2][y + 1] = 1; ar[x + 2][y + 2] = 1;
    }
    else if (n > 3)
    {
        n /= 3;
        star(n, x, y);         star(n, x, y + n);         star(n, x, y + 2 * n);
        star(n, x + n, y);                                star(n, x + n, y + 2 * n);
        star(n, x + 2 * n, y); star(n, x + 2 * n, y + n); star(n, x + 2 * n, y + 2 * n);
    }
}
int main()
{
    int N;
    cin >> N;
    star(N, 0, 0);
    for (int i = 0;i < N;i++)
    {
        for (int j = 0;j < N;j++)
        {
            if (ar[i][j] == 1) { cout << "*"; }
            else if (ar[i][j] == 0) { cout << " "; }
            
            if (j == N - 1) { cout << "\n"; }
        }
    }
    return 0;
}*/

// 11729
/*#include <iostream>
using namespace std;
void hanoi(int num, int from, int temp, int to)
{
    if (num == 1)
    {
        cout << from << " " << to << "\n";
    }
    else
    {
        hanoi(num - 1, from, to, temp);
        hanoi(1, from, temp, to);
        hanoi(num - 1, temp, from, to);
    }
}
int main()
{
    int N, sum = 1;
    cin >> N;
    for (int i = 1;i < N;i++)
    {
        sum = sum * 2 + 1;
    }
    cout << sum << "\n";
    hanoi(N, 1, 2, 3);
    return 0;
}*/

// 11. 브루트 포스
// 2798
/*#include <iostream>
using namespace std;
int main()
{
    int N = 0, M = 0, sum = 0;
    cin >> N >> M;
    int* card = new int[N];
    for (int i = 0;i < N;i++)
    {
        cin >> card[i];
    }
    for (int i = 0;i < N - 2;i++)
    {
        for (int j = i + 1;j < N - 1;j++)
        {
            for (int k = j + 1;k < N;k++)
            {
                if (card[i] + card[j] + card[k] > sum
                    && card[i] + card[j] + card[k] <= M)
                {
                    sum = card[i] + card[j] + card[k];
                }
            }
        }
    }
    cout << sum;
    delete[] card;
    return 0;
}*/

// 2231
/*#include <iostream>
using namespace std;
int main()
{
    int N = 0, n = 0, sum = 0, ans = 0;
    cin >> N;
    for (int i = 1;i < N;i++)
    {
        n = i;
        sum = i + n % 10;
        while (n > 10)
        {
            n /= 10;
            sum += n % 10;
        }
        if (sum == N) { ans = i; break; }
    }
    cout << ans;
    return 0;
}*/

// 7568
/*#include <iostream>
using namespace std;
int main()
{
    int N = 0;
    cin >> N;
    int* w = new int[N];
    int* h = new int[N];
    int* ans = new int[N];
    for (int i = 0;i < N;i++) { cin >> w[i] >> h[i]; }
    for (int i = 0;i < N;i++)
    {
        ans[i] = 0;
        for (int j = 0;j < N;j++)
        {
            if (j != i)
            {
                if (h[i] < h[j] && w[i] < w[j])
                {
                    ans[i] += 1;
                }
            }
        }
        ans[i] = ans[i] + 1;
    }
    for (int i = 0;i < N;i++) { cout << ans[i] << " "; }
    delete[] w, h, ans;
    return 0;
}*/

// 1018
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N = 0, M = 0;
    cin >> N >> M;
    int** whole = new int*[N];
    for (int i = 0; i < N; i++) { whole[i] = new int[M]; }
    string first;
    for(int i = 0;i < N;i++)
    {
        cin >> first;
        for (int j = 0;j < M;j++)
        {
            if (first[j] == 'W') { whole[i][j] = 1; }
            else if (first[j] == 'B') { whole[i][j] = 0; }
        }
    }
    int cnt1, cnt2, min = N * M;
    for (int i = 0;i <= N - 8;i++)
    {
        for (int j = 0;j <= M - 8;j++)
        {
            cnt1 = 0; cnt2 = 0;
            for (int ii = i;ii < i + 8;ii++)
            {
                for (int jj = j;jj < j + 8;jj++)
                {
                    if ((ii - i) % 2 == 0 && (jj - j) % 2 == 0)
                    {
                        if (whole[ii][jj] == 0) { cnt1 += 1; }
                        else { cnt2 += 1; }
                    }
                    else if ((ii - i) % 2 == 0 && (jj - j) % 2 == 1)
                    {
                        if (whole[ii][jj] == 1) { cnt1 += 1; }
                        else { cnt2 += 1; }
                    }
                    else if ((ii - i) % 2 == 1 && (jj - j) % 2 == 0)
                    {
                        if (whole[ii][jj] == 1) { cnt1 += 1; }
                        else { cnt2 += 1; }
                    }
                    else if ((ii - i) % 2 == 1 && (jj - j) % 2 == 1)
                    {
                        if (whole[ii][jj] == 0) { cnt1 += 1; }
                        else { cnt2 += 1; }
                    }
                }
            }
            // W=1, B=0
            // cnt1 → 101010
            // cnt2 → 010101
            if (min > cnt1 && cnt2 >= cnt1) { min = cnt1; }
            else if (min > cnt2 && cnt1 > cnt2) { min = cnt2; }
        }
    }
    cout << min;
    for (int i = 0; i < N; i++) { delete[] whole[i]; }
    delete[] whole;
    return 0;
}*/

// 1436
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N = 0; // N<=10000
    int ans = 0, cnt = 0;
    string ch;
    cin >> N;
    // (0~5)666, 666(0~9), (7~15)666, 1666(0~9), (17~25)666,
    // 2666(0~9), (27~35)666, 3666(0~9), ...
    // 6개(0~5) 10개(6) 9개(7~15) 10개(16) 9개(17~25)
    // 10개(26) 9개(27~35) 10개(36)
    // (37~45) (46) (47~55) (56) (57~
    for (int i = 1;;i++)
    {
        ch = to_string(i);
        if (ch.find("666") < i) { cnt += 1; }
        if (cnt == N) { ans = i; break; }
    }
    cout << ans;
    return 0;
}*/

// 12. 정렬
// 2750
/*#include <iostream>
using namespace std;
int main()
{
    int N = 0;
    cin >> N;
    int* arr = new int[N];
    for (int i = 0;i < N;i++)
    {
        cin >> arr[i];
    }
    int temp = 0;
    for (int i = 0;i < N;i++)
    {
        for (int j = 0;j < N - 1;j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        cout << arr[i] << "\n";
    }
    delete[] arr;
    return 0;
}*/

// 2751
/*#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N = 0;
    cin >> N;
    int* arr = new int[N];
    for(int i=0;i<N;i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    for(int i=0;i<N;i++)
    {
        cout << arr[i] << "\n";
    }
    delete[] arr;
    return 0;
}*/

// 10989
/*#include <iostream>
using namespace std;
int cnt[10001] = { 0 };
int main()
{
    // cout과 cin의 속도를 빠르게
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;
    int n = 0;
    for(int i=0;i<N;i++)
    {
        cin >> n;
        cnt[n] += 1;
    }
    for (int i = 0;i <= 10000;i++)
    {
        if (cnt[i] != 0)
        {
            for (int j = 0;j < cnt[i];j++)
            {
                cout << i << "\n";
            }
        }
    }
    return 0;
}*/

// 2108
/*#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int full[8001] = { 0 }; // 0~3999 4000 4001~8000
int main()
{
    int N = 0;
    cin >> N;
    int* n = new int[N];
    double sum = 0;
    for (int i = 0;i < N;i++)
    {
        cin >> n[i];
        full[n[i]+4000] += 1;
        sum += n[i];
    }
    sort(n, n + N);
    // 산술평균
    cout << round(sum/N) << "\n";
    // 중앙값
    cout << n[N / 2] << "\n";
    // 최빈값
    int max = 0, num = 0, ind = 0;
    for(int i=0;i<8001;i++)
    {
        if (full[i] > max) { max = full[i]; ind = i; }
    }
    for (int i = 0;i < 8001;i++)
    {
        if (i != ind)
        {
            if (full[i] == max) { num += 1; }
            if (num == 1)
            {
                cout << i - 4000 << "\n";
                break;
            }
        }
    }
    if (num == 0) { cout << ind-4000 << "\n"; }
    // 범위
    cout << n[N - 1] - n[0];
    delete[] n;
    return 0;
}*/

// 1427
/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool compare(int i, int j)
{
    return j < i;
}
int main()
{
    string input;
    cin >> input;
    int size = input.size();
    int* array = new int[size];
    for (int i = 0;i < size;i++)
    {
        array[i] = input[i] - 48;
    }
    sort(array, array+size, compare);
    for(int i=0;i<size;i++)
    {
        cout << array[i];
    }
    return 0;
}*/

// 11650
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, x, y;
int main()
{
    cin >> N;
    vector<pair<int, int>> p;
    for (int i = 0;i < N;i++)
    {
        cin >> x >> y;
        p.push_back(pair<int, int>(x, y));
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < N; i++)
    {
        cout << p[i].first << " " << p[i].second << "\n";
    }
}*/

// 11651
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, x, y;
int main()
{
    cin >> N;
    vector<pair<int, int>> p;
    for (int i = 0;i < N;i++)
    {
        cin >> x >> y;
        p.push_back(pair<int, int>(y, x));
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < N; i++)
    {
        cout << p[i].second << " " << p[i].first << "\n";
    }
}*/

// 1181
/*#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for auto it
using namespace std;
int N;
string W;
bool Comp(string a, string b)
{
    if (a.size() != b.size()) // 길이 다를 경우
    {
        return a.size() < b.size(); // 길이 오름차순
    }
    else { return a < b; } // 길이 동일 → 사전 순서
}
int main()
{
    cin >> N;
    vector<string> words;
    for (int i = 0;i < N;i++)
    {
        cin >> W;
        auto it = find(words.begin(), words.end(), W);
        if (it == words.end()){ words.push_back(W); }
        // 즉 찾을 수 없을 때만 추가하기
    }
    sort(words.begin(), words.end(), Comp);
    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i] << "\n";
    }
    return 0;
}*/

// 10814
/*#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int N, age;
string name;
int main()
{
    cin >> N;
    vector<pair<int, int>> info;
    vector<string> who;
    for (int i = 0;i < N;i++)
    {
        cin >> age >> name;
        info.push_back(pair<int, int>(age, i));
        who.push_back(name);
    }
    sort(info.begin(), info.end());
    for (int i = 0;i < N;i++)
    {
        cout << info[i].first << " " << who[info[i].second] << "\n";
    }
    return 0;
}*/

// 18870
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, n, cnt;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    vector<int> all(N);
    for (int i = 0;i < N;i++)
    {
        cin >> all[i];
    }
    vector<int> p(all); // 원본 벡터 복사
    std::sort(p.begin(), p.end());
    p.erase(unique(p.begin(), p.end()), p.end());
    for(int i=0;i<N;i++)
    {
        // i번째 요소값의 위치 it
        auto it = lower_bound(p.begin(), p.end(), all[i]);
        // it에서 cv벡터의 시작 주소값을 빼준 값이 답
        cout << it - p.begin() << " ";
    }
    return 0;
}*/

// 13. 집합과 맵

// 14. 백트래킹
// 15649
/*#include <iostream>
using namespace std;
int N, M;
int arr[9] = { 0 }; // 0~8
bool visited[9] = { 0 }; // 0~8
void function(int cnt);
int main()
{
    cin >> N >> M;
    function(0);
    return 0;
}
void function(int cnt)
{
    if (cnt != M)
    {
        for (int i = 1;i <= N;i++)
        {
            if (!visited[i])
            {
                visited[i] = true;
                arr[cnt] = i;
                function(cnt+1);
                visited[i] = false;
            }
        }
    }
    else // cnt==M
    {
        for (int i = 0;i < M;i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
}*/

// 15650
/*#include <iostream>
using namespace std;
int N, M;
int arr[9] = { 0 }; // 0~8
bool visited[9] = { 0 }; // 0~8
void function(int num, int cnt);
int main()
{
    cin >> N >> M;
    function(1, 0);
    return 0;
}
void function(int num, int cnt)
{
    if (cnt != M)
    {
        for (int i = num;i <= N;i++)
        {
            if (!visited[i])
            {
                visited[i] = true;
                arr[cnt] = i;
                function(i + 1, cnt + 1);
                visited[i] = false;
            }
        }
    }
    else // cnt==M
    {
        for (int i = 0;i < M;i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
}*/

// 15651
/*#include <iostream>
using namespace std;
int N, M;
int arr[7] = { 0 };
void function(int cnt);
int main()
{
    cin >> N >> M;
    function(0);
    return 0;
}
void function(int cnt)
{
    if (cnt != M)
    {
        for (int i = 1;i <= N;i++)
        {
            arr[cnt] = i;
            function(cnt + 1);
        }
        return;
    }
    else // cnt==M
    {
        for (int i = 0;i < M;i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
}*/

// 15652
/*#include <iostream>
using namespace std;
int N, M;
int arr[8] = { 0 };
void function(int up, int cnt);
int main()
{
    cin >> N >> M;
    function(1, 0);
    return 0;
}
void function(int up, int cnt)
{
    if (cnt != M)
    {
        for (int i = up;i <= N;i++)
        {
            arr[cnt] = i;
            function(i, cnt + 1);
        }
        return;
    }
    else // cnt==M
    {
        for (int i = 0;i < M;i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
}*/

// 9663
/*#include <iostream>
using namespace std;
int N = 0, cnt = 0;
int chess[15] = { 0 }; // 0~14, 1<=N<15
bool check(int a)
{
    for (int i = 1;i < a;i++)
    {
        if(chess[i]==chess[a]||a-i==abs(chess[a]-chess[i]))
        {
            return false;
        }
    }
    return true;
}
void queen(int a)
{
    if (a == N + 1) { cnt += 1; }
    else
    {
        for (int i = 1;i <= N;i++)
        {
            chess[a] = i;
            if (check(a)) { queen(a + 1); }
        }
    }
}
int main()
{
    cin >> N;
    queen(1);
    cout << cnt;
    return 0;
}*/

// 2580
/*#include <iostream>
#include <vector>
using namespace std;
vector<int> zerox;
vector<int> zeroy;
int quiz[9][9] = { 0 };
bool finish = false;
bool check(int x, int y)
{
    int xnum = x / 3;
    int ynum = y / 3;
    // 같은행에 없고, 같은 열에 없고, 3x3에 없고
    for (int i = 0;i < 9;i++)
    {
        if (i != y && quiz[x][i] == quiz[x][y])
        { return false; }
        else if (i != x && quiz[i][y] == quiz[x][y])
        { return false; }
    }
    for (int i = xnum * 3;i < xnum * 3 + 3;i++)
    {
        for (int j = ynum * 3;j < ynum * 3 + 3;j++)
        {
            if (i != x && j != y && quiz[i][j] == quiz[x][y])
            { return false; }
        }
    }
    return true;
}
void doit(int cnt)
{
    if (cnt == zerox.size()) { finish = true; return; }
    else
    {
        for (int i = 1;i <= 9;i++)
        {
            quiz[zerox[cnt]][zeroy[cnt]] = i;
            if (check(zerox[cnt], zeroy[cnt]))
            {
                doit(cnt + 1);
            }
            if (finish) { return; }
        }
        // 최적해를 못찾았을 경우 값 비워주기!
        quiz[zerox[cnt]][zeroy[cnt]] = 0;
        return;
    }
}
int main()
{
    for (int i = 0;i < 9;i++)
    {
        for (int j = 0;j < 9;j++)
        {
            cin >> quiz[i][j];
            if (quiz[i][j] == 0)
            {
                zerox.push_back(i);
                zeroy.push_back(j);
            }
        }
    }
    doit(0);
    for (int i = 0;i < 9;i++)
    {
        for (int j = 0;j < 9;j++)
        {
            cout << quiz[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}*/

// 14888
/*#include <iostream>
#include <vector>
using namespace std;
int N;
int maxx = -1000000000;
int minn = 1000000000;
int numbers[11];
int psmd[4];
void cal(int last, int cnt)
{
    if (cnt == N - 1)
    {
        if (last > maxx) { maxx = last; }
        if (last < minn) { minn = last; }
        return;
    }
    else
    {
        for (int i = 0;i < 4;i++)
        {
            if (psmd[i] > 0)
            {
                psmd[i] -= 1;
                if (i == 0) { cal(last + numbers[cnt + 1], cnt + 1); }
                else if (i == 1) { cal(last - numbers[cnt + 1], cnt + 1); }
                else if (i == 2) { cal(last * numbers[cnt + 1], cnt + 1); }
                else if (i == 3) { cal(last / numbers[cnt + 1], cnt + 1); }
                psmd[i] += 1;
            }
        }
        return;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0;i < N;i++) { cin >> numbers[i]; }
    for (int i = 0;i < 4;i++) { cin >> psmd[i]; }
    cal(numbers[0], 0);
    cout << maxx << "\n" << minn;
    return 0;
}*/

// 14889
/*#include <iostream>
#include <vector>
using namespace std;
int N;
int team[20][20];
int submin = 9000; // 10*9*100
vector<int> A;
bool already[20];
void cal(int cnt, int last)
{
    if (cnt == N / 2)
    {
        vector<int> B;
        for (int i = 0;i < N;i++)
        {
            if (!already[i]) { B.push_back(i); }
        }
        int A_score = 0, B_score = 0;
        for (int i = 0;i < N / 2;i++)
        {
            for (int j = 0;j < N / 2;j++)
            {
                A_score += team[A[i]][A[j]];
                B_score += team[B[i]][B[j]];
            }
        }
        if (submin > abs(A_score - B_score))
        { submin = abs(A_score - B_score); }
        return;
    }
    // else
    for (int i = last+1;i < N;i++)
    {
        if (!already[i])
        {
            already[i] = true;
            A.push_back(i);
            cal(cnt + 1, i);
            already[i] = false;
            A.pop_back();
        }
    }
    return;
}
int main()
{
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        for (int j = 0;j < N;j++)
        {
            cin >> team[i][j];
        }
    }
    cal(0, -1);
    cout << submin;
    return 0;
}*/

// 15. 동적 계획법 1
// 1003
/*#include <iostream>
using namespace std;
int T, N; // N<=40
int Ns0[41] = { 1, 0, }; // 0~40
int Ns1[41] = { 0, 1, };
int cnt0, cnt1;
void cal(int n)
{
    if (n == N)
    {
        if (N == 0) { cnt0 = 1; cnt1 = 0; }
        else if (N == 1) { cnt0 = 0; cnt1 = 1; }
        else { cnt0 = 0; cnt1 = 0; cal(n - 1); cal(n - 2); }
        return;
    }
    else if (n == 0) { cnt0 += 1; }
    else if (n == 1) { cnt1 += 1; }
    else if (Ns0[n] != 0)
    {
        cnt0 += Ns0[n];
        cnt1 += Ns1[n];
    }
    else
    {
        cal(n - 1); cal(n - 2);
        Ns0[n] = cnt0; Ns1[n] = cnt1;
    }
    return;
}
int main()
{
    cin >> T;
    for (int i = 0;i < T;i++)
    {
        cin >> N;
        cal(N);
        cout << cnt0 << " " << cnt1 << "\n";
    }
    return 0;
}*/

// 9184
/*#include <iostream>
using namespace std;
int a = 0, b = 0, c = 0;
int s_v_[51][51][51] = { 0 };
int w(int A, int B, int C)
{
    if (A <= 0 || B <= 0 || C <= 0) { return 1; }
    if (A > 20 || B > 20 || C > 20) { return w(20, 20, 20); }

    if (s_v_[A][B][C] != 0) { return s_v_[A][B][C]; }
    else // s_v_[A][B][C] == 0 (initial)
    {
        if (A < B && B < C)
        {
            s_v_[A][B][C] = w(A, B, C - 1) + w(A, B - 1, C - 1) - w(A, B - 1, C);
        }
        else
        {
            s_v_[A][B][C] = w(A - 1, B, C) + w(A - 1, B - 1, C) + w(A - 1, B, C - 1) - w(A - 1, B - 1, C - 1);
        }
        return s_v_[A][B][C];
    }
}
int main()
{
    cin >> a >> b >> c;
    while (1)
    {
        if (a == -1 && b == -1 && c == -1) { break; }
        else
        {
            cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << "\n";
            cin >> a >> b >> c;
        }
    }
    return 0;
}*/

// 1904
/*#include <iostream>
using namespace std;
int N;
int rec[1000000] = { 1, 2, };
// 1 2 3 5 8 13 21 34
int cal(int n)
{
    if (rec[n - 1] != 0) { return rec[n - 1] % 15746; }
    else
    {
        rec[n - 1] = (cal(n - 1) + cal(n - 2)) % 15746; // 0일때+1일때
        return rec[n - 1];
    }
}
int main()
{
    cin >> N;
    cout << cal(N);
    return 0;
}*/

// 9461
/*#include <iostream>
using namespace std;
int T = 0, N = 0;
unsigned long rec[101] = { 0,1,1,1,2,2, };
unsigned long P(int n)
{
    if (n == 0) { return 0; } // 예외
    if (rec[n] != 0) { return rec[n]; }
    else // n>=6
    {
        rec[n] = P(n - 1) + P(n - 5);
        return rec[n];
    }
}
int main()
{
    cin >> T;
    for (int i = 0;i < T;i++)
    {
        cin >> N;
        cout << P(N) << "\n";
    }
    return 0;
}*/

// 1149
/*#include <iostream>
using namespace std;
int N;
int cost[3] = { 0,0,0 };
int cal[1001][3];
int main()
{
    cin >> N;
    cal[0][0] = 0; cal[0][1] = 0; cal[0][2] = 0;
    for (int i = 1;i <= N;i++)
    {
        cin >> cost[0] >> cost[1] >> cost[2];
        cal[i][0] = min(cal[i - 1][1], cal[i - 1][2]) + cost[0];
        cal[i][1] = min(cal[i - 1][0], cal[i - 1][2]) + cost[1];
        cal[i][2] = min(cal[i - 1][0], cal[i - 1][1]) + cost[2];
    }
    cout << min(cal[N][0], min(cal[N][1], cal[N][2]));
    return 0;
}*/

// 1932
/*#include <iostream>
using namespace std;
int n = 0, temp = 0;
int trian[501][501];
int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= i;j++)
        {
            cin >> temp; // trian[i][j]
            if (i == 1) { trian[i][j] = temp; }
            else if (j == 1) { trian[i][j] = trian[i - 1][j] + temp; }
            else if (j==i) { trian[i][j] = trian[i - 1][j - 1] + temp; }
            else { trian[i][j] = max(trian[i - 1][j], trian[i - 1][j - 1]) + temp; }
        }
    }
    int max = 0;
    for (int i = 1;i <= n;i++)
    {
        if (max < trian[n][i]) { max = trian[n][i]; }
    }
    cout << max;
    return 0;
}*/

// 2579
/*#include <iostream>
using namespace std;
int number = 0;
int info[301] = { 0 }; // 0~300
int sav[301][2] = { 0 };
int cal(int index, int cnt)
{
    if (index == 0)
    {
        return max(cal(index + 1, 0), cal(index + 2, 0));
    }

    if (index == number) { return info[number]; }
    else if (index > number) { return -99999; }

    if (sav[index][cnt] > 0) { return sav[index][cnt]; }
    else
    {
        if (cnt == 1)
        {
            sav[index][1] = info[index] + cal(index + 2, 0);
            return sav[index][1];
        }
        else if (cnt == 0)
        {
            sav[index][0] = info[index] + max(cal(index + 1, 1), cal(index + 2, 0));
            return sav[index][0];
        }
    }
}
int main()
{
    cin >> number;
    for (int i = 1;i <= number;i++)
    {
        cin >> info[i];
    }
    cout << cal(0, 0);
    return 0;
}*/

// 1463
/*#include <iostream>
using namespace std;
int N = 0;
// X가 3으로 나누어 떨어지면 3으로 나눈다
// X가 2로 나누어 떨어지면 2로 나눈다
// 1을 뺀다
// 1을 만들고자 할 때 연산 사용 횟수의 최솟값
int ord_min[1000001] = { 0 };
int cal(int n)
{
    if (n == 1) { return 0; }

    if (ord_min[n] != 0) { return ord_min[n]; }

    if (n % 6 == 0)
    {
        ord_min[n] = 1 + min(cal(n / 3), min(cal(n / 2), cal(n - 1)));
    }
    else if (n % 3 == 0)
    {
        ord_min[n] = 1 + min(cal(n / 3), cal(n - 1));
    }
    else if (n % 2 == 0)
    {
        ord_min[n] = 1 + min(cal(n / 2), cal(n - 1));
    }
    else
    {
        ord_min[n] = 1 + cal(n - 1);
    }
    return ord_min[n];
}
int main()
{
    cin >> N;
    cout << cal(N);
    return 0;
}*/

// 10844
/*#include <iostream>
using namespace std;
int N = 0;
int rec[101][10] = { 0 };
int res = 0;
int main()
{
    cin >> N;
    
    for (int i = 0;i <= 9;i++) { rec[1][i] = 1; }
    for (int i = 2;i <= N;i++)
    {
        for (int j = 0;j <= 9;j++)
        {
            if (j == 0) { rec[i][j] = rec[i - 1][j + 1]; }
            else if (j == 9) { rec[i][j] = rec[i - 1][j - 1]; }
            else { rec[i][j] = (rec[i - 1][j - 1] + rec[i - 1][j + 1]) % 1000000000; }
        }
    }
    for(int i=1;i<=9;i++) { res = (res + rec[N][i]) % 1000000000; }
    cout << res % 1000000000;

    return 0;
}*/

// 2156
/*#include <iostream>
using namespace std;
int n = 0;
int num[10001] = { 0 };
int f[10001] = { 0 };
// 1개... 1
// 2개... 1 2
// 3개... max(1&2,1&3,2&3)
// n개... f(n)... 이때 n은 3 이상
// n 안 마심 -> f(n-1)
// n 마시고 n-1 안 마심 -> n+f(n-2)
// n 마시고 n-1도 마심 -> n+(n-1)+f(n-3)
// 즉 f(n) = max(f(n-1),n+f(n-2),n+(n-1)+f(n-3))
int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++) { cin >> num[i]; }
    
    // f[0]=0
    f[1] = num[1]; f[2] = num[1] + num[2];
    for (int i = 3;i <= n;i++)
    {
        f[i] = max(f[i - 1], max(num[i] + f[i - 2], num[i] + num[i - 1] + f[i - 3]));
    }
    cout << f[n];

    return 0;
}*/

// 11053
/*#include <iostream>
using namespace std;
int N = 0;
int arr[1001] = { 0 };
// 10, 20, 10, 30, 20, 50
    // 10 -> ...
    //    -> 20 -> ...
    //          -> 10 (X)
    //          -> 30 -> ...
    //                -> 20 (X)
    //                -> 50 -> ...
    //    -> 10 (X)
    //    -> 30 -> ...
    //          -> 20 (X)
    //          -> 50 -> ...
    //    -> 20 -> ...
    //          -> 50 -> ...
    //    -> 50 -> ...
int res[1001] = { 0 };
int cal(int idx)
{
    // already calculated
    if (res[idx] > 0) { return res[idx]; }

    // initial
    if (idx == 0)
    {
        int maxx = 0;
        int temp = 0;
        for (int i = 1;i <= N;i++)
        {
            temp = cal(i);
            if (temp > maxx) { maxx = temp; }
        }
        return maxx;
    }

    // last
    if (idx == N) { res[idx] = 1; return res[idx]; }

    // 0<idx<N
    int maxx2 = 1;
    int temp2 = 0;
    for(int i=idx+1;i<=N;i++)
    {
        if (arr[idx] < arr[i])
        {
            temp2 = cal(i) + 1;
            if (temp2 > maxx2) { maxx2 = temp2; }
        }
    }
    res[idx] = maxx2;
    return res[idx];
}
int main()
{
    cin >> N;
    for (int i = 1;i <= N;i++) { cin >> arr[i]; }

    cout << cal(0);

    return 0;
}*/

// 11054
/*#include <iostream>
using namespace std;
int N = 0;
int arr[1001] = { 0 };
int res[1001][2] = { 0 };
int cal(int idx, int updown) // updown 1(up) 2(down)
{
    // already calculated
    if (res[idx][updown] > 0) { return res[idx][updown]; }

    // initial -> no matter with updown value!
    if (idx == 0)
    {
        int maxx = 0;
        int temp = 0;
        for (int i = 1;i <= N;i++)
        {
            temp = cal(i, 0);
            if (temp > maxx) { maxx = temp; }
            temp = cal(i, 1);
            if (temp > maxx) { maxx = temp; }
        }
        return maxx;
    }

    // last
    if (idx == N) { res[idx][updown] = 1; return res[idx][updown]; }

    // 0<idx<N
    int maxx2 = 1;
    int temp2 = 0;
    for (int i = idx + 1;i <= N;i++)
    {
        if (updown == 1) // until now is "down"
        {
            if (arr[idx] > arr[i])
            {
                temp2 = cal(i, 1) + 1;
                if (temp2 > maxx2) { maxx2 = temp2; }
            }
        }
        else // until now is "up"
        {
            if (arr[idx] > arr[i])
            {
                temp2 = cal(i, 1) + 1;
                if (temp2 > maxx2) { maxx2 = temp2; }
                temp2 = cal(i, 0) + 1;
                if (temp2 > maxx2) { maxx2 = temp2; }
            }
        }
    }
    res[idx][updown] = maxx2;
    return res[idx][updown];
}
int main()
{
    cin >> N;
    for (int i = 1;i <= N;i++) { cin >> arr[i]; }

    cout << cal(0, 0);

    for (int i = 1;i <= 10;i++)
    {
        cout << res[i][0] << " " << res[i][1] << "\n";
    }
    
    return 0;
}*/
#include <iostream>
using namespace std;
int N = 0;
int arr[1001] = { 0 };
int res[1001] = { 0 };
int rres[1001] = { 0 };
int cal(int idx)
{
    // already calculated
    if (res[idx] > 0) { return res[idx]; }

    // initial
    if (idx == 0)
    {
        int maxx = 0;
        int temp = 0;
        for (int i = 1;i <= N;i++)
        {
            temp = cal(i);
            if (temp > maxx) { maxx = temp; }
        }
        return maxx;
    }

    // last
    if (idx == N) { res[idx] = 1; return res[idx]; }

    // 0<idx<N
    int maxx2 = 1;
    int temp2 = 0;
    for (int i = idx + 1;i <= N;i++)
    {
        if (arr[idx] < arr[i])
        {
            temp2 = cal(i) + 1;
            if (temp2 > maxx2) { maxx2 = temp2; }
        }
    }
    res[idx] = maxx2;
    return res[idx];
}
int rcal(int idx)
{
    // already calculated
    if (rres[idx] > 0) { return rres[idx]; }

    // initial
    if (idx == 0)
    {
        int maxx = 0;
        int temp = 0;
        for (int i = N;i >= 1;i--)
        {
            temp = cal(i);
            if (temp > maxx) { maxx = temp; }
        }
        return maxx;
    }

    // last
    if (idx == 1) { rres[idx] = 1; return rres[idx]; }

    // 1<idx<=N
    int maxx2 = 1;
    int temp2 = 0;
    for (int i = idx - 1;i >= 1;i--)
    {
        if (arr[idx] < arr[i])
        {
            temp2 = rcal(i) + 1;
            if (temp2 > maxx2) { maxx2 = temp2; }
        }
    }
    rres[idx] = maxx2;
    return rres[idx];
}
int realmax = 0;

int main()
{
    cin >> N;
    for (int i = 1;i <= N;i++) { cin >> arr[i]; }

    cout << cal(0);

    return 0;
}

// 2565

// 9251

// 1912

// 12865

// 16. 그리디 알고리즘
// 