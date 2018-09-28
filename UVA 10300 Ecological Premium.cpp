// 1星-35 Ecological Premium 

// 先輸入測試幾組case
// 輸入測試第一組case有幾個農夫
// 輸入個別農夫農場面積，農場裡動物的數目，該農夫的環保等級
// 輸出動物平均居住空間*農場環保等級*動物數目

#include <iostream>

using namespace std;

int main()
{
	float a[3][20], n, m;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> m;
			for (int i = 0; i < m; i++)
			for (int j = 0; j < 3; j++)
				cin >> a[j][i];
			float t = 0;
			for (int i = 0; i < m; i++)	t += (((a[0][i] / a[1][i])) * a[2][i])*a[1][i];
			cout << t << endl;
		}
	}
}