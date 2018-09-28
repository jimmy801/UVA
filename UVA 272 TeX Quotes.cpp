// 1星-90 TeX Quotes

// 輸入字串
// 把字串裡前面的"換成``後面的"換成''
// 輸出字串


#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	bool front = 1;
	while (getline(cin, str))
	{
		string ans;
		for (int i = 0; i<str.size(); ++i)
		if (str[i] == '"')
		{
			str.erase(str.begin() + i);
			if (front){ front = 0; str.insert(i++, "``"); }
			else { ++front; str.insert(i++, "''"); }
		}
		cout << str << endl;
	}
}