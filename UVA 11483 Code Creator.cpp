// 1星-81 Code Creator

// 輸入有幾個case
// 輸入分別case有幾個字串
// 輸入字串(可能包含空格和")
// 輸出該程式碼

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int cases = 1, line;
	string str;
	while (cin >> line&&line)
	{
		cout << "Case " << cases++ << ":\n#include<string.h>\n#include<stdio.h>\nint main()\n{\n";
		while (line--)
		{
			getline(cin, str);
			if (str == ""){ ++line; continue; }
			cout << "printf(\"";
			if (str[0] == '"'){ str = str.substr(1, str.size() - 2); cout << "\\\"" << str << "\\\"\\n\");\n"; }
			else cout << str << "\\n\");\n";
		}
		cout << "printf(\"\\n\");\nreturn 0;\n}\n";
	}
}