// 1星-36 Dog and Gopher

// 先輸入有幾個洞可以供金花鼠逃跑
// 輸入金花鼠初始位置和狗的初始位置
// 接下來輸入金花鼠個別洞穴的座標
// 如果金花鼠洞穴位置距狗的位置比金花鼠位置到洞穴位置的兩倍還小，輸出"The gopher cannot escape.\n"
// 否則輸出"The gopher can escape through the hole at ("洞穴座標")\n"

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	double g_x, g_y, d_x, d_y, h_x, h_y, hole;
	while (cin >> hole >> g_x >> g_y >> d_x >> d_y)
	{
		bool es = false;
		for (int i = 0; i < hole; i++)
		{
			cin >> h_x >> h_y;
			if (!es && (sqrt(pow((h_x - d_x), 2) + pow((h_y - d_y), 2)) > 2 * sqrt(pow((h_x - g_x), 2) + pow((h_y - g_y), 2))))
			{
				cout << "The gopher can escape through the hole at (" << fixed << setprecision(3) << h_x << ',' << h_y << ").\n"; es = true;
			}
		}
		if (!es)cout << "The gopher cannot escape.\n";
	}
}