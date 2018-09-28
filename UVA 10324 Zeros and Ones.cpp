// 1星-37 Zeros and Ones

// 先輸入一個1 0字串
// 輸入不同CASE有幾個測資
// 輸入範圍
// 範圍內若最小和最大不同輸出"No"
// 否則輸出"Yes"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int cases = 1;
	while (cin >> s)
	{
		int time;
		cin >> time;
		cout << "Case " << cases++ << ":\n";
		while (time--)
		{
			int a, b;
			cin >> a >> b;
			if (a == b){ cout << "Yes"; continue; }
			if (b < a)swap(a, b);
			for (int i = a; i < b; ++i)
			{
				if (s[i] != s[i + 1]){ cout << "No\n"; break; }
				if (i == b - 1){ cout << "Yes\n"; }
			}
		}
	}
}