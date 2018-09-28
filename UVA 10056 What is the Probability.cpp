// 1星-08 What is the Probability?
// {[(1-p)^(i-1)]*p*1}/[1-(1-p)^n]

// 先輸入有幾筆資料
// 依照每筆資料分別依序輸入遊戲人數,一次遊戲獲勝機率,第幾個人獲勝
// 輸出第幾人獲勝的機率

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int c, people, which; double p;
	while (cin >> c)
	{
		for (int i = 0; i < c; i++)
		{
			cin >> people >> p >> which;
			if (p<0.00001)
				cout << "0.0000" << endl;
			else
			cout << setprecision(4) << fixed << (pow(1 - p, which - 1)*p) / (1 - pow(1 - p, people)) << endl;
		}
	}
}