// 1星-64 Necklace

// 先輸入黏土數和每做一個會消耗多少黏土
// 盤子的直徑總和公式=0.3*sqrt(total / k - v)*k
// 如果有最大且唯一的盤子直徑總和
// 輸出該盤子數，否則輸出0

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float total, v;
	while (cin >> total >> v&&total)
	{
		if (v >= total){ cout << "0\n"; continue; }
		float d[60000] = {}; int k = 1;
		for (; k<total; ++k)d[k] = 0.3*sqrt(total / k - v)*k;
		int max = 1;
		for (int i = 2; i<k; ++i){ if (d[i]>d[max])max = i; else if (d[i] == d[max]){ max = 0; break; } }
		cout << max << endl;
	}
}