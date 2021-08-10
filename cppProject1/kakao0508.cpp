// 1
/*
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(string s) {
	vector<int> ans;
	for (int i = 0;i < s.size();i++)
	{
		if(s[i]-'0'>=0 && s[i] - '0' <= 9)
		{
			ans.push_back(s[i] - '0');
		}
		else
		{
			if (s[i] == 'z') { ans.push_back(0); i += 3; }
			else if (s[i] == 'o') { ans.push_back(1); i += 2; }
			else if (s[i] == 't')
			{
				if (s[i + 1] == 'w') { ans.push_back(2); i += 2; }
				else if (s[i + 1] == 'h') { ans.push_back(3); i += 4; }
			}
			else if (s[i] == 'f')
			{
				if (s[i + 1] == 'o') { ans.push_back(4); i += 3; }
				else if (s[i + 1] == 'i') { ans.push_back(5); i += 3; }
			}
			else if (s[i] == 's')
			{
				if (s[i + 1] == 'i') { ans.push_back(6); i += 2; }
				else if (s[i + 1] == 'e') { ans.push_back(7); i += 4; }
			}
			else if (s[i] == 'e') { ans.push_back(8); i += 4; }
			else if (s[i] == 'n') { ans.push_back(9); i += 3; }
		}
	}
	int answer = 0;
	for (int i = 0;i < ans.size();i++)
	{
		answer += ans[i] * pow(10, ans.size() - 1 - i);
	}
	return answer;
}


#include <iostream>

int main()
{
	string s;
	cin >> s;
	cout << solution(s);
	return 0;
}
*/

// 2
/*
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<string>> places) {
	vector<int> answer;
	for (int i = 0;i < 5;i++) // 대기실 번호
	{
		vector<pair<int, int>> Ps;
		int res = 1;
		for (int j = 0;j < 5;j++) // 세로
		{
			for (int k = 0;k < 5;k++) // 가로
			{
				if(places[i][j][k]=='P')
				{
					Ps.push_back(pair<int, int>(j, k));
				}
			}
		}
		for (int m = 0;m < Ps.size();m++)
		{
			for (int n = m + 1;n < Ps.size();n++)
			{
				if (Ps[m].first == Ps[n].first)
				{
					if (Ps[n].second - Ps[m].second == 1) { res = 0; break; }
					else if (Ps[n].second - Ps[m].second == 2 &&
						places[i][Ps[m].first][Ps[m].second + 1] != 'X')
					{ res = 0; break; }
				}
				else if (Ps[n].first - Ps[m].first == 1)
				{
					if (Ps[n].second == Ps[m].second) { res = 0; break; }
					else if (Ps[m].second - Ps[n].second == 1)
					{
						if (places[i][Ps[m].first][Ps[m].second - 1] != 'X'
							|| places[i][Ps[m].first + 1][Ps[m].second] != 'X')
						{ res = 0; break; }
					}
					else if (Ps[n].second - Ps[m].second == 1)
					{
						if (places[i][Ps[m].first][Ps[m].second + 1] != 'X'
							|| places[i][Ps[m].first + 1][Ps[m].second] != 'X')
						{ res = 0; break; }
					}
				}
				else if (Ps[n].first - Ps[m].first == 2)
				{
					if (Ps[n].second == Ps[m].second
						&& places[i][Ps[m].first + 1][Ps[m].second] != 'X')
					{ res = 0; break; }
				}
			}
		}
		answer.push_back(res);
	}

	return answer;
}


#include <iostream>
int main()
{
	return 0;
}
*/


// 3
/*
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int n, int k, vector<string> cmd) {
	string answer = "";
	vector<int> Zs;
	for (int i = 0;i < n;i++) { answer += 'O'; } // o
	for (int i = 0;i < cmd.size();i++)
	{
		if (cmd[i][0] == 'U')
		{
			int cnt = 0;
			for (int j = k - 1;j >= 0;j--)
			{
				if (answer[j] == 'O') { cnt += 1; }
				if (cnt == cmd[i][2] - '0') { k = j; break; }
			}
		}
		else if (cmd[i][0] == 'D')
		{
			int cnt = 0;
			for (int j = k + 1;j < n;j++)
			{
				if (answer[j] == 'O') { cnt += 1; }
				if (cnt == cmd[i][2] - '0') { k = j; break; }
			}
		}
		else if (cmd[i] == "C")
		{
			answer[k] = 'X'; Zs.push_back(k);
			int temp = k;
			int cnt = 0;
			for (int j = k + 1;j < n;j++)
			{
				if (answer[j] == 'O') { cnt += 1; }
				if (cnt == 1) { k = j; break; }
			}
			if (cnt == 0)
			{
				for (int x = temp - 1;x >= 0;x--)
				{
					if (answer[x] == 'O') { cnt += 1; }
					if (cnt == 1) { k = x; break; }
				}
			}
		}
		else if (cmd[i] == "Z")
		{
			answer[Zs.back()] = 'O';
			Zs.erase(Zs.end()-1);
		}
	}

	return answer;
}
*/
/*
string solution(int n, int k, vector<string> cmd) {
	string answer = "";
	vector<int> origin;
	vector<int> clears;
	for (int i = 0;i < n;i++) { origin.push_back(i); answer += 'O'; }
	for (int i = 0;i < cmd.size();i++)
	{
		if (cmd[i][0] == 'U')
		{
			k -= cmd[i][2] - '0';
		}
		else if (cmd[i][0] == 'D')
		{
			k += cmd[i][2] - '0';
		}
		else if (cmd[i] == "C")
		{
			clears.push_back(origin[k]);
			answer[origin[k]] = 'X';
			origin.erase(origin.begin() + k);
			if (k == origin.size()) { k -= 1; }
		}
		else if (cmd[i] == "Z")
		{
			origin.push_back(clears.back());
			answer[clears.back()] = 'O';
			if (origin[k] > clears.back()) { k += 1; }
			sort(origin.begin(), origin.end());
			clears.pop_back();
		}
	}
	return answer;
}


int main()
{
	return 0;
}
*/

// 4
/*
#include <string>
#include <vector>

using namespace std;

int solution(int n, int start, int end, vector<vector<int>> roads, vector<int> traps) {
	int answer = 0;
	return answer;
}
*/

// 5

#include <string>
#include <vector>

using namespace std;

int solution(int k, vector<int> num, vector<vector<int>> links) {
	int maxx = 0;


	int answer = 0;
	return answer;
}


