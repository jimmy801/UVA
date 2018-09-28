// 1星-72 GOURMET GAMES

// 輸入共有幾組測資
// 分別輸入每組參賽者和每輪要幾個參賽者
// 輸出有沒有可能實現，如果能實現，可以幾輪
// 每輪都會淘汰m-1個參賽者

#include <iostream>

using namespace std;

int main()
{
	int cases, n, m, count;
	cin >> cases;
	while (cases--)
	{
		cin >> n >> m;
		if (n<m){ cout << "cannot do this\n"; continue; }
		count = 0;
		while (n >= m)++n -= m, ++count;
		if (n == 1)cout << count << endl;
		else cout << "cannot do this\n";
	}
}