// 1星-83 Alternate Task 

// 輸入數字
// 輸出某一個最大數字的所有因數和為該數字
// 若不存在該數字輸出-1

#include <iostream>

using namespace std;

int main()
{
	int num, table[1000] = {}, cases = 1;
	for (int i = 1; i<1000; ++i)
	for (int j = 1; j <= i; ++j)
	if (!(i%j))table[i] += j;
	while (cin >> num&&num)
	{
		cout << "Case " << cases++ << ": ";
		bool o = 0;
		for (int i = num; i>0; --i)
		if (table[i] == num){ cout << i << endl; ++o; break; }
		if (!o)cout << "-1\n";
	}
}