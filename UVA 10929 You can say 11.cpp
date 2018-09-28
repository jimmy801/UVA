// 1星-59 You can say 11 

// 先輸入數字
// 輸出該數字是不是11的倍數

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	string num;
	while (cin >> num)
	{
		if (num == "0")break;
		int odd = 0, even = 0;
		for (int i = 0; i<num.size(); ++i){ if (i % 2)odd += num[i] - '0'; else even += num[i] - '0'; }
		cout << num;
		if (abs(odd - even) % 11)cout << " is not a multiple of 11.\n";
		else cout << " is a multiple of 11.\n";
	}
}