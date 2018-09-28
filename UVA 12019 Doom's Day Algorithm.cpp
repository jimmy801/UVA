// 1星-87 Doom's Day Algorithm 

// 2011年的Doom's Day 1/10, 2/21, 3/7, 4/4, 5/9, 6/6, 7/11, 8/8, 9/5, 10/10, 11/7, 12/12為星期一
// 輸入幾組測資
// 輸入每組的日期
// 輸出該日是星期幾


#include <iostream>

using namespace std;

int main()
{
	int t, m, d, month[] = { 0, 10, 21, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12 };
	char day[7][9] = { "Monday", "Tuesday", "Wendsday", "Thursday", "Friday", "Saturday", "Sunday" };
	cin >> t;
	while (t--)
	{
		cin >> m >> d;
		if (d<month[m])d = (7 - month[m] + d) % 7;
		else d = (d - month[m]) % 7;
		cout << day[d] << endl;
	}
}