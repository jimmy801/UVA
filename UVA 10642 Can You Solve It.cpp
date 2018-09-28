// 1星-49 Can You Solve It? 

// 先輸入幾個case
// 輸入2點座標
// 依照分別case輸出從第一點到第2點會經過多少點(包括第2點)

#include <iostream>

using namespace std;

#define P(X,Y) (int)((X+Y+1)*(X+Y)/2+X)

int main()
{
	int n;
	cin >> n;
	int cases = 1;
	while (n--)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << "Case " << cases++ << ": " << P(x2, y2) - P(x1, y1) << endl;
	}
}