// 1星-05 Vito's family

// 先輸入有幾組資料
// 再依序先輸入每筆資料分別位於哪幾條街
// 蓋在離所有接最近的一條街
// 計算每筆資料至少需要走幾條街並輸出

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int r;
	cin >> r;
	while(r--)
	{
		int sN, s[30001] = { 0 };
		cin >> sN;
		for (int i = 0; i < sN; i++)cin >> s[i];
		sort(s, s + sN);
		int num = 0;
		for (int i = 0; i < sN; i++)num += abs(s[sN/2] - s[i]);
		cout << num << endl;
	}
}