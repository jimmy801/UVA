// 1星-46 Where is the Marble? 

// 先輸入球數和問題數
// 輸入每顆球的數字
// 依照問題數輸入要找的數字
// 依照每次不同的球數和問題數輸出是CASE幾
// 並輸出要找的數字是按順序排第幾個或找不到

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int ball, questions;
	int cases = 1;
	while (cin >> ball >> questions)
	{
		if (!ball || !questions)break;
		cout << "CASE# " << cases++ << ":\n";
		int num[10000];
		for (int i = 0; i<ball; ++i)cin >> num[i];
		sort(num, num + ball);
		int find;
		while (questions--)
		{
			cin >> find;
			for (int i = 0; i<ball; ++i)
			{
				if (num[i] == find){ cout << find << " found at " << i + 1 << endl; break; }
				if (i == ball - 1)cout << find << " not found\n";
			}
		}
	}
}