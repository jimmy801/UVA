// 1星-24 Hardwood species 

// 先輸入有幾筆資料
// 輸入該資料每筆資料，以空一行作結束
// 按名稱字母順序輸出該數所占資料中的比例(到小數第四位)

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string target[100];
	int cases;
	cin >> cases;
	while (cases--)
	{
		int line = 0;
		while (getline(cin, target[line]))
		{
			if (target[line] != "")line++;
			else{ if (line)break; }
		}
		sort(target, target + line);
		for (int i = 1, ans = 1; i <= line; ++i)
		{
			if (target[i] == target[i - 1])ans++;
			else{ cout << target[i - 1] << " " << fixed << setprecision(4) << float(ans) / line * 100 << endl; ans = 1; }
		}
		if (cases)cout << endl;
	}
}