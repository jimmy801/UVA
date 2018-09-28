// 1星-04 Jolly Jumpers

// 先輸入一組序列有多少數字
// 輸入數字
// 如果序列中相鄰的2個數其差的絕對值恰好為1到n-1輸出"Jolly"
// 否則輸出"Not jolly"

#include <iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int sort[3001] = { 0 };
		int cmp[3000] = { 0 };
		bool jolly[3001] = { 0 };
		for (int i = 0; i < n; i++)	cin >> sort[i];
		for (int i = 1; i < n; i++)	cmp[i] = (abs(sort[i] - sort[i - 1]));
		for (int i = 1; i < n; i++){
			for (int j = 1; j <= n; j++){
				if (cmp[i] == j){ jolly[j] = 1; break; }
			}
		}
		bool jolly1 = true;
		for (int i = 1; i < n; i++)if (!jolly[i]){
			jolly1 = false; break;
		}
		if (jolly1)cout << "Jolly\n";
		else cout << "Not jolly\n";
	}
}