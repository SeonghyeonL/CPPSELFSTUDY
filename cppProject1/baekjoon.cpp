
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
    // ���� �� 3�� = 10000 + ���� �� * 1000
    // ���� �� 2�� = 1000 + ���� �� * 100
    // ��� �ٸ��� = ���� ū �� * 100
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
        cout << "\"����Լ��� ������?\"" << endl;
        pnt(cnt);
        cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << endl;
        pnt(cnt);
        cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << endl;
        pnt(cnt);
        cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << endl;
        jh(n, cnt + 1);
        pnt(cnt);
        cout << "��� �亯�Ͽ���." << endl;
    }
    else // n == cnt
    {
        pnt(cnt);
        cout << "\"����Լ��� ������?\"" << endl;
        pnt(cnt);
        cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << endl;
        pnt(cnt);
        cout << "��� �亯�Ͽ���." << endl;
    }
    return 0;
}
int main()
{
    int N;
    cin >> N;
    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << endl;
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
    cout << floor(double(temp) / double(N) + 0.5) << endl; // ������
    sort(nums, nums + N);
    cout << nums[N / 2] << endl; // �߾Ӱ�
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
    cout << cbres << endl; // �ֺ�
    cout << nums[N - 1] - nums[0] << endl; // ����
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

#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}