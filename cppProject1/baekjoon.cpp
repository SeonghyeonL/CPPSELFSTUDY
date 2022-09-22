
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

/*
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int T = 0, N = 0, M = 0;
    int temp = 0, cnt = 0;
    cin >> T;
    for (int t = 0;t < T;t++)
    {
        vector<int> v, res;
        queue<pair<int, int>> q;
        cin >> N >> M;
        for (int i = 0;i < N;i++)
        {
            cin >> temp;
            v.push_back(temp);
            q.push(make_pair(i, temp));
        }
        sort(v.begin(), v.end(), greater<>());
        cnt = 0;
        while (cnt < N)
        {
            if (q.front().second != v[cnt])
            {
                q.push(q.front());
                q.pop();
            }
            else
            {
                res.push_back(q.front().first);
                q.pop();
                cnt += 1;
            }
        }
        for (int i = 0;i < N;i++)
        {
            if (res[i] == M)
            {
                cout << i + 1 << "\n";
                break;
            }
        }
    }
    return 0;
}
*/

// 10866

/*
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    int N = 0, temp = 0;
    string s = "";
    deque<int> dq;
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        cin >> s;
        if (s == "push_front")
        {
            cin >> temp; dq.push_front(temp);
        }
        else if (s == "push_back")
        {
            cin >> temp; dq.push_back(temp);
        }
        else if (s == "pop_front")
        {
            if (dq.empty()) cout << -1 << "\n";
            else
            {
                cout << dq.front() << "\n"; dq.pop_front();
            }
        }
        else if (s == "pop_back")
        {
            if (dq.empty()) cout << -1 << "\n";
            else
            {
                cout << dq.back() << "\n"; dq.pop_back();
            }
        }
        else if (s == "size") cout << dq.size() << "\n";
        else if (s == "empty") cout << dq.empty() << "\n";
        else if (s == "front")
        {
            if (dq.empty()) cout << -1 << "\n";
            else cout << dq.front() << "\n";
        }
        else if (s == "back")
        {
            if (dq.empty()) cout << -1 << "\n";
            else cout << dq.back() << "\n";
        }
    }
    return 0;
}
*/

// 1021

/*
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    int N = 0, M = 0;
    cin >> N >> M;
    deque<int> dq;
    for (int i = 1;i <= N;i++) dq.push_back(i);
    int temp = 0;
    int total = 0, cnt = 0;
    for (int i = 0;i < M;i++)
    {
        cin >> temp;
        cnt = 0;
        while (dq.front() != temp)
        {
            dq.push_back(dq.front());
            dq.pop_front();
            cnt += 1;
        }
        if (cnt > dq.size() / 2) cnt = dq.size() - cnt;
        total += cnt;
        dq.pop_front();
    }
    cout << total;
    return 0;
}
*/

// 5430

/*
#include <iostream>
#include <deque>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int T = 0;
    cin >> T;
    string rd = "", tp = "", tp2 = "";
    int num = 0, temp = 0;
    for (int i = 0;i < T;i++)
    {
        cin >> rd >> num >> tp;
        deque<int> dq;
        for (int j = 1;j < tp.size();j++)
        {
            if (tp[j] == '[') continue;
            else if (tp[j] >= '0' && tp[j] <= '9') tp2 += tp[j];
            else if (tp[j] == ',' || tp[j] == ']')
            {
                if (!tp2.empty())
                {
                    dq.push_back(stoi(tp2));
                    tp2 = "";
                }
            }
        }
        bool direc = true;
        bool error = false;
        for (int j = 0;j < rd.size();j++)
        {
            if (rd[j] == 'R') direc = !direc;
            else // D
            {
                if (dq.empty())
                {
                    error = true;
                    break;
                }
                else
                {
                    if (direc) dq.pop_front();
                    else dq.pop_back();
                }
            }
        }
        if (error) cout << "error\n";
        else
        {
            cout << "[";
            temp = dq.size();
            if (direc)
            {
                for (int j = 0;j < temp;j++)
                {
                    cout << dq.front();
                    dq.pop_front();
                    if (!dq.empty()) cout << ",";
                }
            }
            else
            {
                for (int j = 0;j < temp;j++)
                {
                    cout << dq.back();
                    dq.pop_back();
                    if (!dq.empty()) cout << ",";
                }
            }
            cout << "]\n";
        }
    }
    return 0;
}
*/

// 2630

/*
#include <iostream>
#include <vector>
using namespace std;
int arr[128][128];
int ans[2]; // w, b
void func(int x, int y, int size)
{
    int temp = arr[x][y];
    for (int i = x;i < x + size;i++)
    {
        for (int j = y;j < y + size;j++)
        {
            if (temp == -1) continue;
            else if (temp != arr[i][j]) temp = -1;
        }
    }
    if (temp != -1) ans[temp] += 1;
    else
    {
        func(x, y, size / 2);
        func(x + size / 2, y, size / 2);
        func(x, y + size / 2, size / 2);
        func(x + size / 2, y + size / 2, size / 2);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N = 0;
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        for (int j = 0;j < N;j++) cin >> arr[i][j];
    }
    func(0, 0, N);
    cout << ans[0] << "\n" << ans[1];
    return 0;
}
*/

// 1992

/*
#include <iostream>
#include <string>
using namespace std;
int arr[64][64];
int N = 0;
void func(int x, int y, int size)
{
    int temp = arr[x][y];
    for (int i = x;i < x + size;i++)
    {
        for (int j = y;j < y + size;j++)
        {
            if (temp == -1) continue;
            else if (temp != arr[i][j]) temp = -1;
        }
    }
    if (temp != -1) cout << temp;
    else
    {
        cout << "(";
        func(x, y, size / 2);
        func(x, y + size / 2, size / 2);
        func(x + size / 2, y, size / 2);
        func(x + size / 2, y + size / 2, size / 2);
        cout << ")";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string tp = "";
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        cin >> tp;
        for (int j = 0;j < N;j++) arr[i][j] = tp[j] - '0';
    }
    func(0, 0, N);
    return 0;
}
*/

// 1780

/*
#include <iostream>
#include <vector>
using namespace std;
int arr[2500][2500];
int ans[3]; // -1, 0, 1
void func(int x, int y, int size)
{
    int temp = arr[x][y];
    for (int i = x;i < x + size;i++)
    {
        for (int j = y;j < y + size;j++)
        {
            if (temp == 2) continue;
            else if (temp != arr[i][j]) temp = 2;
        }
    }
    if (temp != 2) ans[temp + 1] += 1;
    else
    {
        func(x, y, size / 3);
        func(x + size / 3, y, size / 3);
        func(x + size / 3 * 2, y, size / 3);
        func(x, y + size / 3, size / 3);
        func(x + size / 3, y + size / 3, size / 3);
        func(x + size / 3 * 2, y + size / 3, size / 3);
        func(x, y + size / 3 * 2, size / 3);
        func(x + size / 3, y + size / 3 * 2, size / 3);
        func(x + size / 3 * 2, y + size / 3 * 2, size / 3);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N = 0;
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        for (int j = 0;j < N;j++) cin >> arr[i][j];
    }
    func(0, 0, N);
    cout << ans[0] << "\n" << ans[1] << "\n" << ans[2];
    return 0;
}
*/

// 1629

/*
#include <iostream>
#include <vector>
using namespace std;
long long A, B, C, res;
long long func(long long a, long long b)
{
    if (b == 0) return 1;
    else if (b == 1) return a % C;
    else if (b % 2 == 0)
    {
        long long temp = func(a, b / 2) % C;
        return (temp * temp) % C;
    }
    else if (b % 2 == 1) return (func(a, b - 1) * a) % C;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> A >> B >> C;
    cout << func(A, B);
    return 0;
}
*/

// 11401

/*
#include <iostream>
using namespace std;
long long N, K, A = 1, B = 1;
long long func(long long x)
{
    if (x == 0) return 1;
    else if (x % 2 == 0)
    {
        long long temp = func(x / 2);
        return (temp * temp) % 1000000007;
    }
    else if (x % 2 == 1)
    {
        return (B * func(x - 1)) % 1000000007;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> K;
    for (int i = N;i > N - K;i--) A = (A * i) % 1000000007;
    for (int i = K;i > 0;i--) B = (B * i) % 1000000007;
    cout << (A * func(1000000007 - 2)) % 1000000007;
    return 0;
}
*/

// 2740

/*
#include <iostream>
using namespace std;
int N, M, K;
int A[100][100], B[100][100];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int n = 0;n < N;n++)
        for (int m = 0;m < M;m++)
            cin >> A[n][m];
    cin >> M >> K;
    for (int m = 0;m < M;m++)
        for (int k = 0;k < K;k++)
            cin >> B[m][k];
    int temp;
    for (int n = 0;n < N;n++)
    {
        for (int k = 0;k < K;k++)
        {
            temp = 0;
            for (int m = 0;m < M;m++)
                temp += A[n][m] * B[m][k];
            cout << temp << " ";
        }
        cout << "\n";
    }
    return 0;
}
*/

// 10830

/*
#include <iostream>
using namespace std;
long long N, B;
long long n[5][5];
long long temp[5][5], ans[5][5];
void func_c(long long a[5][5], long long b[5][5])
{
    for (int i = 0;i < N;i++)
        for (int j = 0;j < N;j++)
        {
            temp[i][j] = 0;
            for (int k = 0;k < N;k++)
                temp[i][j] += a[i][k] * b[k][j];
            temp[i][j] %= 1000;
        }
    for (int i = 0;i < N;i++)
        for (int j = 0;j < N;j++)
            a[i][j] = temp[i][j];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> B;
    for (int i = 0;i < N;i++)
    {
        for (int j = 0;j < N;j++)
            cin >> n[i][j];
        ans[i][i] = 1;
    }
    while (B > 0)
    {
        if (B % 2 == 1) func_c(ans, n);
        func_c(n, n);
        B /= 2;
    }
    for (int i = 0;i < N;i++)
    {
        for (int j = 0;j < N;j++)
            cout << ans[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
*/

// 11444

/*
#include <iostream>
using namespace std;
long long n;
long long f[2][2] = { {1,1},{1,0} };
long long ans[2][2] = { {1,0},{0,1} };
long long temp[2][2];
void func(long long a[2][2], long long b[2][2])
{
    for (int i = 0;i < 2;i++)
    {
        for (int j = 0;j < 2;j++)
        {
            temp[i][j] = 0;
            for (int k = 0;k < 2;k++)
                temp[i][j] += a[i][k] * b[k][j];
            temp[i][j] %= 1000000007;
        }
    }
    for (int i = 0;i < 2;i++)
        for (int j = 0;j < 2;j++)
            a[i][j] = temp[i][j];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    n -= 1;
    while (n > 0)
    {
        if (n % 2 == 1) func(ans, f);
        func(f, f);
        n /= 2;
    }
    cout << ans[0][0];
    return 0;
}
*/

// 6549

/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;
void segtree(vector<int> &a, vector<int> &t, int n, int s, int e)
{
    if (s == e) t[n] = s;
    else
    {
        int mid = (s + e) / 2;
        segtree(a, t, n * 2, s, mid);
        segtree(a, t, n * 2 + 1, mid + 1, e);
        if (a[t[n * 2]] <= a[t[n * 2 + 1]]) t[n] = t[n * 2];
        else t[n] = t[n * 2 + 1];
    }
}
int findmin(vector<int> &a, vector<int> &t, int n, int s, int e, int l, int r)
{
    if (l > e || r < s) return -1; // 벗어남
    if (l <= s && e <= r) return t[n]; // 포함
    int mid = (s + e) / 2;
    int tp1 = findmin(a, t, n * 2, s, mid, l, r);
    int tp2 = findmin(a, t, n * 2 + 1, mid + 1, e, l, r);
    if (tp1 == -1) return tp2;
    else if (tp2 == -1) return tp1;
    else
    {
        if (a[tp1] <= a[tp2]) return tp1;
        else return tp2;
    }
}
ll getmax(vector<int> &a, vector<int> &t, int s, int e)
{
    int arr_size = a.size();
    int min_h = findmin(a, t, 1, 0, arr_size - 1, s, e);
    ll area = (ll)(e - s + 1) * (ll)a[min_h];
    if (s < min_h)
    {
        ll temp = getmax(a, t, s, min_h - 1);
        if (area < temp) area = temp;
    }
    if (e > min_h)
    {
        ll temp = getmax(a, t, min_h + 1, e);
        if (area < temp) area = temp;
    }
    return area;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while (1)
    {
        int n;
        cin >> n;
        if (n == 0) break;
        vector<int> arr(n);
        for (int i = 0;i < n;i++) cin >> arr[i];
        int h = (int)(ceil(log2(n))+1e-9);
        int tree_size = (1 << (h + 1));
        vector<int> tree(tree_size);
        segtree(arr, tree, 1, 0, n - 1);
        cout << getmax(arr, tree, 0, n - 1) << "\n";
    }
    return 0;
}
*/

// 1920

/*
#include <iostream>
#include <algorithm>
using namespace std;
int N, M, temp;
int n[100001]; // vector is slower
int fd(int a)
{
    int s = 0, e = N - 1;
    int mid;
    while (e>=s)
    {
        mid = (s + e) / 2;
        if (n[mid] == a) return 1;
        else if (n[mid] > a) e = mid - 1;
        else if (n[mid] < a) s = mid + 1;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 0;i < N;i++) cin >> n[i];
    sort(n, n + N);
    cin >> M;
    for (int i = 0;i < M;i++)
    {
        cin >> temp;
        cout << fd(temp) << "\n";
    }
    return 0;
}
*/

// 1654

/*
#include <iostream>
#include <vector>
using namespace std;
int K, N;
vector<int> centi(10001);
long long mid, lef, rig, las;
int maxx = 0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> K >> N;
    for (int i = 0;i < K;i++)
    {
        cin >> centi[i];
        if (maxx < centi[i]) maxx = centi[i];
    }
    mid = (1 + centi[0]) / 2;
    lef = 1;
    rig = maxx;
    las = 0;
    while (lef <= rig)
    {
        int sum = 0;
        mid = (lef + rig) / 2;
        for (int i = 0;i < K;i++) sum += centi[i] / mid;
        if (sum >= N)
        {
            if (las < mid) las = mid;
            lef = mid + 1;
        }
        else if (sum < N)
        {
            rig = mid - 1;
        }
    }
    cout << las;
    return 0;
}
*/

// 2805

/*
#include <iostream>
#include <vector>
using namespace std;
int N, M;
vector<int> meter;
long long mid, lef, rig, las;
int maxx = 0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int i = 0;i < N;i++)
    {
        int temp;
        cin >> temp;
        meter.push_back(temp);
        if (maxx < temp) maxx = temp;
    }
    lef = 0;
    rig = maxx;
    las = 0;
    while (lef <= rig)
    {
        long long sum = 0;
        mid = (lef + rig) / 2;
        for (int i = 0;i < N;i++)
        {
            if (meter[i]>mid) sum += meter[i] - mid;
        }
        if (sum >= M)
        {
            if (las < mid) las = mid;
            lef = mid + 1;
        }
        else if (sum < M)
        {
            rig = mid - 1;
        }
    }
    cout << las;
    return 0;
}
*/

// 2110

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, C;
vector<int> x;
long long mid, lef, rig, ans;
long long last_idx, cnt;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> C;
    for (int i = 0;i < N;i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end());
    lef = 0;
    rig = x[N - 1];
    ans = 0;
    while (lef <= rig)
    {
        mid = (lef + rig) / 2;
        last_idx = 0;
        cnt = 1;
        for (int i = 1;i < N;i++)
        {
            if (x[i] - x[last_idx] >= mid)
            {
                last_idx = i;
                cnt++;
            }
        }
        if (cnt >= C)
        {
            if (ans < mid) ans = mid;
            lef = mid + 1;
        }
        else if (cnt < C)
        {
            rig = mid - 1;
        }
    }
    cout << ans;
    return 0;
}
*/

// 1300

/*
#include <iostream>
#include <algorithm>
using namespace std;
long long N, k;
long long lef, rig, mid, ans, cnt;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> k;
    lef = 1, rig = N * N, ans = 0;
    while (lef <= rig)
    {
        cnt = 0;
        mid = (lef + rig) / 2;
        for (int i = 1;i <= N;i++) cnt += min(mid / i, N);
        if (cnt < k) lef = mid + 1;
        else if (cnt >= k) ans = mid, rig = mid - 1;
    }
    cout << ans;
    return 0;
}
*/

// 12015

/*
#include <iostream>
#include <vector>
using namespace std;
int N, a;
int lef, rig, mid;
vector<int> res;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        cin >> a;
        if (i == 0) res.push_back(a);
        else
        {
            if (res.back() < a) res.push_back(a);
            else
            {
                lef = 0, rig = res.size() - 1;
                while (lef < rig)
                {
                    mid = (lef + rig) / 2;
                    if (a <= res[mid]) rig = mid;
                    else lef = mid + 1;
                }
                res[rig] = a;
            }
        }
    }
    cout << res.size();
    return 0;
}
*/

// 11005

/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, B, temp;
    vector<int> chng;
    cin >> N >> B;
    while (N >= B)
    {
        temp = N % B;
        chng.push_back(temp);
        N = N / B;
    }
    chng.push_back(N);
    char alpha; // A = 65
    for (int i = chng.size() - 1;i >= 0;i--)
    {
        if (chng[i] > 9)
        {
            alpha = chng[i] - 10 + 65;
            cout << alpha;
        }
        else cout << chng[i];
    }
    return 0;
}
*/

// 2671

/*
#include <iostream>
#include <string>
using namespace std;
string s;
bool tf = true;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s;
    int cnt = 0;
    while (cnt < s.size() && tf==true)
    {
        if (s[cnt] == '1')
        {
            if (cnt + 2 <= s.size() && s[cnt + 1] == '0' && s[cnt + 2] == '0')
            {
                cnt += 1;
                while (cnt <= s.size() && s[cnt] == '0') cnt += 1;
                if (cnt < s.size()) // 100~'1'
                {
                    cnt += 1;
                    while (s[cnt] == '1')
                    {
                        if (cnt < s.size())
                        {
                            if (s[cnt + 1] == '1') cnt += 1;
                            else if (s[cnt + 1] == '0') // 뒤가 0인 1 등장
                            {
                                // 101 -> 1 제거, 100 -> 1 유지
                                if (cnt + 2 <= s.size() && s[cnt + 2] == '1') cnt += 1;
                                else if (cnt + 2 > s.size()) tf = false;
                                break;
                            }
                        }
                    }
                }
                else tf = false; // 100~ 뒤에 1 없음
            }
            else tf = false; // 1 뒤에 00 없음
        }
        else if (s[cnt] == '0')
        {
            if (s[cnt + 1] == '1') cnt += 2;
            else tf = false; // 00 (X)
        }
    }
    if (tf) cout << "SUBMARINE";
    else cout << "NOISE";
    return 0;
}
*/

// 2003

/*
#include <iostream>
#include <vector>
using namespace std;
int N, temp, cnt;
long long M;
vector<long long> A;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    A.push_back(0);
    for (int i = 0;i < N;i++)
    {
        cin >> temp;
        if (i == 0) A.push_back(temp);
        else A.push_back(temp + A[i]);
    }
    cnt = 0;
    for (int i = 0;i < A.size()-1;i++)
    {
        for (int j = i + 1;j < A.size();j++)
        {
            if (A[j] - A[i] == M) cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}
*/

// 1920

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, M, temp;
vector<int> A;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        cin >> temp; A.push_back(temp);
    }
    sort(A.begin(), A.end());
    cin >> M;
    for (int i = 0;i < M;i++)
    {
        cin >> temp;
        int lef = 0;
        int rig = A.size() - 1;
        int mid;
        bool exi = false;
        while (lef<=rig)
        {
            mid = (lef + rig) / 2;
            if (A[mid] > temp) rig = mid - 1;
            else if (A[mid] < temp) lef = mid + 1;
            else if (A[mid] == temp)
            {
                exi = true; break;
            }
        }
        if (exi) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}
*/

// 11279

/*
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, x;
    priority_queue<int> heap; // 내림차순 정렬
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        cin >> x;
        if (x == 0)
        {
            if (heap.empty()) cout << 0 << "\n";
            else
            {
                cout << heap.top() << "\n";
                heap.pop();
            }
        }
        else heap.push(x);
    }
    return 0;
}
*/

// 1927

/*
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, temp;
    priority_queue<int, vector<int>, greater<int>> heap;
    // priority_queue<int, vector<int>, greater<int>> 오름차순
    // priority_queue<int, vector<int>, less<int>> 내림차순
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        cin >> temp;
        if (temp == 0)
        {
            if (heap.empty()) cout << 0 << "\n";
            else
            {
                cout << heap.top() << "\n";
                heap.pop();
            }
        }
        else heap.push(temp);
    }
    return 0;
}
*/

// 11286

/*
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, temp;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> heap;
    // 절댓값, 원본값 (first 기준 정렬, 같으면 second 기준 정렬)
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        cin >> temp;
        if (temp == 0)
        {
            if (heap.empty()) cout << 0 << "\n";
            else
            {
                cout << heap.top().second << "\n";
                heap.pop();
            }
        }
        else heap.push({ abs(temp),temp });
    }
    return 0;
}
*/

// 1655

/*
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<int, vector<int>, greater<>> upheap; // 오름
    priority_queue<int, vector<int>, less<>> downheap; // 내림
    int N, temp, uptemp, downtemp;
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        cin >> temp;
        if (i == 0) downheap.push(temp); // 처음엔 최대에
        else if (i == 1) upheap.push(temp); // 두 번째는 최소에
        else if (upheap.size() < downheap.size()) upheap.push(temp); // 최대>=최소
        else downheap.push(temp);

        if (i>0 && (upheap.top() < downheap.top())) // empty 방지
        {
            uptemp = upheap.top();
            downtemp = downheap.top();
            upheap.pop(); downheap.pop();
            upheap.push(downtemp);
            downheap.push(uptemp); // 서로의 top 바꾸기
        }

        cout << downheap.top() << "\n"; // 최대의 top이 항상 답
    }
    return 0;
}
*/

// 11066

/*
#include <iostream>
#include <algorithm>
using namespace std;
#define INF 1000000000
int sum[502];
int findmin[502][502];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, K, temp;
    cin >> T;
    for (int i = 0;i < T;i++)
    {
        cin >> K;
        for (int j = 1;j <= K;j++)
        {
            cin >> temp;
            sum[j] = sum[j - 1] + temp;
        }
        for (int j = 1;j <= K;j++)
        {
            for (int k = 1;k <= K - j;k++)
            {
                findmin[k][j + k] = INF;
                for (int m = k;m <= j + k - 1;m++)
                {
                    findmin[k][j + k] = min(findmin[k][j + k],
                        findmin[k][m] + findmin[m + 1][j + k] + sum[j + k] - sum[k - 1]);
                }
            }
        }
        cout << findmin[1][K] << "\n";
    }
    return 0;
}
*/

// 11049

/*
#include <iostream>
using namespace std;
#define INF 1000000000
int N;
int m[502][2];
int dp[502][502];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 1;i <= N;i++) cin >> m[i][0] >> m[i][1];
    for (int i = 1;i <= N - 1;i++)
    {
        for (int j = 1;j <= N - i;j++)
        {
            dp[j][i + j] = INF;
            for (int k = j;k < i + j;k++)
            {
                dp[j][i + j] = min(dp[j][i + j],
                    dp[j][k] + dp[k + 1][i + j] + m[j][0] * m[k][1] * m[i + j][1]);
            }
        }
    }
    cout << dp[1][N];
    return 0;
}
*/

// 1520

#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}