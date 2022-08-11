
// 10926

/*
#include <iostream>
using namespace std;
int main()
{
    char a[51];
    cin >> a;
    cout << a << "??!" << endl;
    return 0;
}
*/


// 18108

/*
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cout << a - (2541-1998) << endl;
    return 0;
}
*/


// 25083

/*
#include <iostream>
using namespace std;
int main()
{
    cout << "         ,r\'\"7" << endl;
    cout << "r`-_   ,\'  ,/" << endl;
    cout << " \\. \". L_r\'" << endl;
    cout << "   `~\\/" << endl;
    cout << "      |" << endl;
    cout << "      |" << endl;
    return 0;
}
*/

// 2525

/*
#include <iostream>
using namespace std;
int main()
{
    int hour, min, need;
    cin >> hour >> min >> need;
    min += need;
    if (min > 59)
    {
        hour += min / 60;
        min = min % 60;
    }
    if (hour > 23)
        hour = hour % 24;
    cout << hour << " " << min << endl;
    return 0;
}
*/

// 2480

/*
#include <iostream>
#include <algorithm> // max
using namespace std;
int main()
{
    // 같은 눈 3개 = 10000 + 같은 눈 * 1000
    // 같은 눈 2개 = 1000 + 같은 눈 * 100
    // 모두 다르면 = 가장 큰 눈 * 100
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c)
        cout << 10000 + a * 1000;
    else if (a == b || b == c)
        cout << 1000 + b * 100;
    else if (a == c)
        cout << 1000 + a * 100;
    else // a!=b, b!=c, c!=a
        cout << max({ a, b, c }) * 100;
    return 0;
}
*/

// 17478

/*
#include <iostream>
using namespace std;
int pnt(int rep)
{
    for (int i = 0;i < rep;i++)
        cout << "____";
    return 0;
}
int jh(int n, int cnt)
{
    if (n > cnt)
    {
        pnt(cnt);
        cout << "\"재귀함수가 뭔가요?\"" << endl;
        pnt(cnt);
        cout << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어." << endl;
        pnt(cnt);
        cout << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지." << endl;
        pnt(cnt);
        cout << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"" << endl;
        jh(n, cnt + 1);
        pnt(cnt);
        cout << "라고 답변하였지." << endl;
    }
    else // n == cnt
    {
        pnt(cnt);
        cout << "\"재귀함수가 뭔가요?\"" << endl;
        pnt(cnt);
        cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" << endl;
        pnt(cnt);
        cout << "라고 답변하였지." << endl;
    }
    return 0;
}
int main()
{
    int N;
    cin >> N;
    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << endl;
    jh(N, 0);
    return 0;
}
*/

// 2108

/*
#include <iostream>
#include <cmath> // floor
#include <algorithm> // sort
using namespace std;
int nums[500001] = {};
int pairs[8001] = {};
int main()
{
    int N = 0;
    cin >> N;
    for (int i = 0;i < N;i++)
        cin >> nums[i];
    int temp = 0;
    for (int i = 0;i < N;i++)
        temp += nums[i];
    cout << floor(double(temp) / double(N) + 0.5) << endl; // 산술평균
    sort(nums, nums + N);
    cout << nums[N / 2] << endl; // 중앙값
    for (int i = 0;i < N;i++)
        pairs[nums[i] + 4000] += 1;
    int max = pairs[0];
    for (int i = 1;i < 8001;i++)
        if (pairs[i] > max)
            max = pairs[i];
    bool a = false;
    int cbres = 0;
    for (int i = 0;i < 8001;i++)
    {
        if (pairs[i] == max && a == false)
        {
            a = true;
            cbres = i - 4000;
        }
        else if (pairs[i] == max && a == true)
        {
            cbres = i - 4000;
            break;
        }
    }
    cout << cbres << endl; // 최빈값
    cout << nums[N - 1] - nums[0] << endl; // 범위
    return 0;
}
*/

// 10815

/*
#include <iostream>
using namespace std;
int Ns[20000002] = {};
int Ms[500001] = {};
int main()
{
    int N = 0, M = 0, temp = 0;
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        cin >> temp;
        Ns[temp + 10000000] = 1;
    }
    cin >> M;
    for (int i = 0;i < M;i++)
        cin >> Ms[i];
    for (int i = 0;i < M;i++)
        cout << Ns[Ms[i] + 10000000] << " ";
    return 0;
}
*/

// 14425

/*
#include <iostream>
#include <map> // map
using namespace std;
string str = "";
map<string, bool> m;
int main()
{
    int N = 0, M = 0, cnt = 0;
    cin >> N >> M;
    for (int i = 0;i < N;i++)
    {
        cin >> str;
        m.insert(pair<string, bool>(str, true));
    }
    for (int i = 0;i < M;i++)
    {
        cin >> str;
        if (m[str] == true)
            cnt += 1;
    }
    cout << cnt;
    return 0;
}
*/

// 1620

/*
#include <iostream>
#include <map>
#include <string> // stoi
using namespace std;
int N = 0, M = 0;
map<string, int> msi;
map<int, string> mis;
string str;
char quest[21];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    for (int i = 1;i <= N;i++)
    {
        cin >> str;
        msi.insert(make_pair(str, i));
        mis.insert(make_pair(i, str));
    }
    for (int i = 0;i < M;i++)
    {
        cin >> quest;
        if (quest[0] < 'A')
            cout << mis[atoi(quest)] << '\n';
        else
            cout << msi[quest] << '\n';
    }
    return 0;
}
*/

// 10816

/*
#include <iostream>
using namespace std;
int Ns[20000002] = {};
int Ms[500001] = {};
int main()
{
    int N = 0, M = 0, temp = 0;
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        cin >> temp;
        Ns[temp + 10000000] += 1;
    }
    cin >> M;
    for (int i = 0;i < M;i++)
        cin >> Ms[i];
    for (int i = 0;i < M;i++)
        cout << Ns[Ms[i] + 10000000] << " ";
    return 0;
}
*/

// 1764

/*
#include <iostream>
#include <algorithm> // sort
#include <map>
using namespace std;
map<string, int> Ns;
string Ms[500001];
string temp;
char name[21];
int main()
{
    int N, M;
    cin >> N >> M;
    for (int i = 0;i < N;i++)
    {
        cin >> temp;
        Ns.insert(make_pair(temp, i));
    }
    int cnt = 0;
    for (int i = 0;i < M;i++)
    {
        cin >> name;
        if (Ns.find(name) != Ns.end())
        {
            Ms[cnt] = name;
            cnt += 1;
        }
    }
    sort(Ms, Ms + cnt);
    cout << cnt << endl;
    for (int i = 0;i < cnt;i++)
        cout << Ms[i] << endl;
    return 0;
}
*/

// 1269

/*
#include <iostream>
using namespace std;
bool a[100000001];
bool b[100000001];
int main()
{
    int A, B, temp;
    cin >> A >> B;
    for (int i = 0;i < A;i++)
    {
        cin >> temp;
        a[temp] = true;
    }
    for (int i = 0;i < B;i++)
    {
        cin >> temp;
        b[temp] = true;
    }
    int cnt = 0;
    for (int i = 0;i < 100000001;i++)
    {
        if ((a[i] && !b[i]) || (!a[i] && b[i]))
            cnt += 1;
    }
    cout << cnt;
    return 0;
}
*/

// 11478

/*
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
string str;
int main()
{
    cin >> str;
    vector<string> v;
    for (int i = 0;i < str.length();i++)
    {
        for (int j = 1;j <= str.length() - i;j++)
            v.insert(v.end(), str.substr(i, j));
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << v.size();
    return 0;
}
*/

// 	2477

/*
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int N = 0;
    int len[6], temp;
    string ways = "";
    cin >> N;
    for (int i = 0;i < 6;i++)
    {
        cin >> temp >> len[i];
        ways += to_string(temp);
    }
    // 동 서 남 북
    // ㄱ -> 남동남동북서 3'13'1"42"
    // ┏ -> 동북동북서남 1'41'4"23"
    // ┗ -> 북서북서남동 4'24'2"31"
    // ┛ -> 서남서남동북 2'32'3"14"
    if (ways == "313142" || ways == "141423" || ways == "424231" || ways == "232314")
        cout << N * (len[4] * len[5] - len[1] * len[2]);
    else if (ways == "131423" || ways == "414231" || ways == "242314" || ways == "323142")
        cout << N * (len[3] * len[4] - len[0] * len[1]);
    else if (ways == "314231" || ways == "142314" || ways == "423142" || ways == "231423")
        cout << N * (len[2] * len[3] - len[5] * len[0]);
    else if (ways == "142313" || ways == "423141" || ways == "231424" || ways == "314232")
        cout << N * (len[1] * len[2] - len[4] * len[5]);
    else if (ways == "423131" || ways == "231414" || ways == "314242" || ways == "142323")
        cout << N * (len[0] * len[1] - len[3] * len[4]);
    else if (ways == "231314" || ways == "314142" || ways == "142423" || ways == "423231")
        cout << N * (len[5] * len[0] - len[2] * len[3]);
    return 0;
}
*/

// 1004

/*
#include <iostream>
using namespace std;
int calc(int x, int y, int xx, int yy)
{
    float dis = 0.0;
    dis = (x - xx) * (x - xx) + (y - yy) * (y - yy);
    return dis;
}
int main()
{
    int T = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0, n = 0;
    int cx = 0, cy = 0, r = 0;
    cin >> T;
    for (int i = 0;i < T;i++)
    {
        int cnt = 0;
        bool res[50] = { false };
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;
        for (int j = 0;j < n;j++)
        {
            cin >> cx >> cy >> r;
            r = r * r;
            if (calc(x1, y1, cx, cy) < r && calc(x2, y2, cx, cy) > r)
                res[j] = true;
            else if (calc(x1, y1, cx, cy) > r && calc(x2, y2, cx, cy) < r)
                res[j] = true;
        }
        for (int j = 0;j < n;j++)
        {
            if (res[j])
                cnt += 1;
        }
        cout << cnt << endl;
    }
    return 0;
}
*/

// 1358

/*
#include <iostream>
using namespace std;
float calc(int x, int y, int xx, int yy)
{
    float dis = 0.0;
    dis = (x - xx) * (x - xx) + (y - yy) * (y - yy);
    return dis;
}
int main()
{
    int W = 0, H = 0, X = 0, Y = 0, P = 0;
    int x = 0, y = 0, cnt = 0;
    cin >> W >> H >> X >> Y >> P;
    for (int i = 0;i < P;i++)
    {
        cin >> x >> y;
        if (x < X)
        {
            if (calc(x, y, X, Y + H / 2) <= (H / 2) * (H / 2))
                cnt += 1;
        }
        else if (x >= X && x <= X + W)
        {
            if (y >= Y && y <= Y + H)
                cnt += 1;
        }
        else // x > X + W
        {
            if (calc(x, y, X + W, Y + H / 2) <= (H / 2) * (H / 2))
                cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}
*/

// 2981

/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}
int main()
{
    int N = 0;
    cin >> N;
    vector<int> n(N);
    for (int i = 0;i < N;i++)
    {
        cin >> n[i];
    }
    sort(n.begin(), n.end());
    int res = n[1] - n[0];
    for (int i = 2;i < N;i++)
    {
        res = gcd(res, n[i] - n[i - 1]);
    }
    vector<int> result;
    for (int i = 2;i <= sqrt(res);i++)
    {
        if (res % i == 0)
        {
            result.push_back(i);
            result.push_back(res / i);
        }
    }
    result.push_back(res);
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());
    for (int i = 0;i < result.size();i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
*/

// 3036

/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int gcf(int a, int b)
{
    if (a % b == 0)
        return b;
    return gcf(b, a % b);
}
int main()
{
    int N;
    cin >> N;
    int fst, n, fac;
    cin >> fst;
    for (int i = 1;i < N;i++)
    {
        cin >> n;
        fac = gcf(fst, n);
        cout << fst / fac << "/" << n / fac << endl;
    }
    return 0;
}
*/

// 11050

/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int N = 0, K = 0;
    cin >> N >> K;
    int upper = 1, lower = 1;
    for (int i = 0;i < K;i++)
    {
        upper *= N - i;
        lower *= K - i;
    }
    cout << upper / lower << endl;
    return 0;
}
*/

// 11051

/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
long long DP[1001][1001];
// DP[N][K] =DP[N-1][K-1] + DP[N-1][K] 
int main()
{
    int N = 0, K = 0;
    cin >> N >> K;
    DP[0][0] = 1;
    DP[1][0] = 1;
    DP[1][1] = 1;
    for (int i = 2;i <= N;i++)
    {
        
        for (int j = 0;j <= i;j++)
        {
            if (j == 0 || j == i) DP[i][j] = 1;
            else DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j]) % 10007;
        }
    }
    cout << DP[N][K] << endl;
    return 0;
}
*/

// 1010

/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
long long DP[31][31];
// DP[N][K] =DP[N-1][K-1] + DP[N-1][K]
int main()
{
    int T, N, M;
    DP[0][0] = 1;
    DP[1][0] = 1;
    DP[1][1] = 1;
    cin >> T;
    for (int i = 0;i < T;i++)
    {
        cin >> N >> M;
        // M C N
        for (int i = 2;i <= M;i++)
        {

            for (int j = 0;j <= i;j++)
            {
                if (j == 0 || j == i) DP[i][j] = 1;
                else DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j]);
            }
        }
        cout << DP[M][N] << endl;
    }
    return 0;
}
*/

// 9375

/*
#include <iostream>
#include <map>
using namespace std;
int main()
{
    int T, t;
    string name, type;
    cin >> T;
    for (int i = 0;i < T;i++)
    {
        cin >> t;
        map<string, int> m;
        int res = 1;
        for (int j = 0;j < t;j++)
        {
            cin >> name >> type;
            m[type] += 1;
        }
        for (auto iter = m.begin(); iter != m.end(); ++iter)
        {
            res *= (iter->second) + 1;
        }
        cout << res - 1 << endl;
    }
    return 0;
}
*/

// 1676

/*
#include <iostream>
using namespace std;
int main()
{
    int N = 0, ans = 0;
    cin >> N;
    // 0의 개수 = 2&5의 개수 ~ 5의 개수
    for (int i = 1;i <= N;i++)
    {
        if (i % 5 == 0)
        {
            if (i % 125 == 0)
                ans += 3;
            else if (i % 25 == 0)
                ans += 2;
            else
                ans += 1;
        }
    }
    cout << ans;
    return 0;
}
*/

// 2004

/*
#include <iostream>
using namespace std;
long long cal(long long a, long long num)
{
    long long cnt = 0;
    for (long long i = num;i <= a;i *= num)
        cnt += a / i;
    return cnt;
}
int main()
{
    long long n = 0, m = 0;
    long long ans2 = 0, ans5 = 0;
    cin >> n >> m;
    // nCm = n! / (n-m)! * m!
    ans2 = cal(n, 2) - cal(n - m, 2) - cal(m, 2);
    ans5 = cal(n, 5) - cal(n - m, 5) - cal(m, 5);
    cout << min(ans2, ans5);
    return 0;
}
*/

// 24416

/*
#include <iostream>
using namespace std;
int cnt_fib1 = 0;
int cnt_fib2 = 0;
int fib1(int a)
{
    if (a == 1 || a == 2)
        cnt_fib1 += 1;
    else
        return (fib1(a - 1) + fib1(a - 2));
    return 0;
}
int fib2(int a)
{
    for (int i = 3;i <= a;i++)
        cnt_fib2 += 1;
    return 0;
}
int main()
{
    int n = 0;
    cin >> n;
    fib1(n), fib2(n);
    cout << cnt_fib1 << " " << cnt_fib2 << endl;
    return 0;
}
*/

// 11659

/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, i, j;
    cin >> N >> M;
    vector<long> n(N + 1);
    n[0] = 0;
    for (int k = 0;k < N;k++)
    {
        long temp;
        cin >> temp;
        n[k + 1] = n[k] + temp;
    }
    for (int k = 0;k < M;k++)
    {
        cin >> i >> j;
        cout << n[j] - n[i - 1] << '\n';
    }
    return 0;
}
*/

// 2559

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    vector<long> n(N + 1);
    vector<long> n2(N + 1);
    n[0] = 0;
    for (int i = 1;i <= N;i++)
    {
        long temp;
        cin >> temp;
        n[i] = n[i - 1] + temp;
    }
    for (int i = 0;i <= N;i++)
    {
        if (i < K) n2[i] = n[i];
        else n2[i] = n[i] - n[i - K];
    }
    cout << *max_element(n2.begin() + K, n2.end());
    return 0;
}
*/

// 16139

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string S;
int q, l, r;
int sum[200001][26];
char alpha;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    cin >> S >> q;
    for (int i = 0;i < S.length();i++)
    {
        // 'a' = 97
        if (i == 0) sum[i][S[i] - 'a'] = 1;
        else
        {
            for (int j = 0;j < 26;j++)
            {
                if (j == S[i] - 'a') sum[i][j] = sum[i - 1][j] + 1;
                else sum[i][j] = sum[i - 1][j];
            }
        }
    }
    for (int i = 0;i < q;i++)
    {
        cin >> alpha >> l >> r;
        int alp = alpha - 'a';
        if (l == 0) cout << sum[r][alp] << "\n";
        else cout << sum[r][alp] - sum[l - 1][alp] << "\n";
    }
    return 0;
}
*/

// 10986

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int N = 0, M = 0;
    cin >> N >> M;
    vector<long long> cnt(1000);
    long long sum = 0;
    for (int i = 0;i < N;i++)
    {
        long long temp;
        cin >> temp;
        sum += temp;
        cnt[sum % M] += 1;
    }
    long long ans = cnt[0];
    for (int i = 0;i < 1000;i++)
    {
        ans += cnt[i] * (cnt[i] - 1) / 2;
    }
    cout << ans;
    return 0;
}
*/

// 11660

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int sum[1025][1025];
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int N, M, temp, x1, y1, x2, y2;
    cin >> N >> M;
    for (int i = 1;i <= N;i++)
    {
        for (int j = 1;j <= N;j++)
        {
            cin >> temp;
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + temp;
        }
    }
    for (int i = 0;i < M;i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
        cout << "\n";
    }
    return 0;
}
*/

// 10828

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> s;
    int N;
    string cmd;
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        cin >> cmd;
        if (cmd == "push")
        {
            int num;
            cin >> num;
            s.push_back(num);
        }
        else if (cmd == "pop")
        {
            if (s.empty()) cout << -1 << "\n";
            else
            {
                cout << s[s.size() - 1] << "\n";
                s.pop_back();
                s.shrink_to_fit();
            }
        }
        else if (cmd == "size")
        {
            cout << s.size() << "\n";
        }
        else if (cmd == "empty")
        {
            if (s.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if (cmd == "top")
        {
            if (s.empty()) cout << -1 << "\n";
            else
            {
                cout << s[s.size() - 1] << "\n";
            }
        }
    }
    return 0;
}
*/

// 10773

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int N, temp;
    long sum = 0;
    vector<int> m;
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        cin >> temp;
        if (temp == 0) m.pop_back();
        else m.push_back(temp);
    }
    for (int i = 0;i < m.size();i++) sum += m[i];
    cout << sum;
    return 0;
}
*/

// 9012

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int N, sum;
    bool res;
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        char ps[51] = {};
        cin >> ps;
        sum = 0;
        res = true;
        for (int j = 0;j < 51;j++)
        {
            if (ps[j] == '(') sum += 1;
            else if (ps[j] == ')') sum -= 1;
            if (sum < 0)
            {
                res = false;
                break;
            }
        }
        if (res == true && sum == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
*/

// 4949

/*
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    bool res;

    string p = "";
    getline(cin, p, '.');
    while (1)
    {
        if (p == "\n") break;
        vector<char> sum;
        res = true;
        for (int j = 0;j < p.length();j++)
        {
            if (p[j] == '(') sum.push_back('(');
            else if (p[j] == ')')
            {
                if (!sum.empty() && sum.back() == '(') sum.pop_back();
                else
                {
                    res = false;
                    break;
                }
            }
            else if (p[j] == '[') sum.push_back('[');
            else if (p[j] == ']')
            {
                if (!sum.empty() && sum.back() == '[') sum.pop_back();
                else
                {
                    res = false;
                    break;
                }
            }
        }
        if (res==true && sum.empty()) cout << "yes\n";
        else cout << "no\n";
        p = "";
        getline(cin, p, '.');
    }
    return 0;
}
*/

// 1874

/*
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n = 0, x = 0, cnt = 0;
    cin >> n;
    vector<int> ns;
    vector<char> ans;
    for (int i = 0;i < n;i++)
    {
        cin >> x;
        while (cnt < x)
        {
            ans.push_back('+');
            cnt += 1;
            ns.push_back(cnt);
        }
        if (ns.back() == x)
        {
            ns.pop_back();
            ans.push_back('-');
        }
        else
        {
            cout << "NO\n";
            return 0;
        }
    }
    for (int i = 0;i < ans.size();i++)
        cout << ans[i] << "\n";
    return 0;
}
*/

// 17298

/*
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int N = 0, temp = 0;;
    cin >> N;
    vector<int> sin, stp, res;
    for (int i = 0;i < N;i++)
    {
        cin >> temp;
        sin.push_back(temp);
    }
    for (int i = N - 1;i >= 0;i--)
    {
        while ((!stp.empty()) && (stp[stp.size() - 1] <= sin[i]))
            stp.pop_back();
        if (stp.empty())
            res.push_back(-1);
        else // stp[stp.size() - 1] > sin[i]
            res.push_back(stp[stp.size() - 1]);
        stp.push_back(sin[i]);
    }
    for (int i = N - 1;i >= 0;i--)
        cout << res[i] << " ";
    return 0;
}
*/

// 18258

/*
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    queue<int> s;
    int N;
    string cmd;
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        cin >> cmd;
        if (cmd == "push")
        {
            int num;
            cin >> num;
            s.push(num);
        }
        else if (cmd == "pop")
        {
            if (s.empty()) cout << -1 << "\n";
            else
            {
                cout << s.front() << "\n";
                s.pop();
            }
        }
        else if (cmd == "size")
        {
            cout << s.size() << "\n";
        }
        else if (cmd == "empty")
        {
            if (s.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if (cmd == "front")
        {
            if (s.empty()) cout << -1 << "\n";
            else cout << s.front() << "\n";
        }
        else if (cmd == "back")
        {
            if (s.empty()) cout << -1 << "\n";
            else cout << s.back() << "\n";
        }
    }
    return 0;
}
*/

// 2164

/*
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int N = 0, temp = 0;
    queue<int> q;
    cin >> N;
    for (int i = 1;i <= N;i++) q.push(i);
    while (q.size() > 1)
    {
        q.pop();
        temp = q.front();
        q.pop();
        q.push(temp);
    }
    cout << q.front();
    return 0;
}
*/

// 11866

/*
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int N = 0, M = 0;
    queue<int> q;
    vector<int> v;
    cin >> N >> M;
    for (int i = 1;i <= N;i++) q.push(i);
    while (q.size() > 1)
    {
        for (int i = 0;i < M - 1;i++)
        {
            q.push(q.front());
            q.pop();
        }
        v.push_back(q.front());
        q.pop();
    }
    v.push_back(q.front());
    cout << "<";
    for (int i = 0;i < N - 1;i++) cout << v[i] << ", ";
    cout << v[N - 1] << ">";
    return 0;
}
*/

// 1966

#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main()
{
    return 0;
}
