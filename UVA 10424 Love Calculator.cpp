// 1星-43 Love Calculator 

// 先輸入2個名字(可能有特殊符號)
// 輸出2個名字合適比

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		int love1 = 0, love2 = 0;
		for (int i = 0; i<str1.size(); ++i)if (isalpha(str1[i]))love1 += tolower(str1[i]) - 'a' + 1;
		for (int i = 0; i<str2.size(); ++i)if (isalpha(str2[i]))love2 += tolower(str2[i]) - 'a' + 1;
		love1 = (love1 - 1) % 9 + 1;
		love2 = (love2 - 1) % 9 + 1;
		float max = love1>love2 ? love1 : love2, min = love1>love2 ? love2 : love1;
		cout << setprecision(2) << fixed << 100 * min / max << " %\n";
	}
}