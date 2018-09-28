// 1星-22 Satellites

// 先輸入從地球表面(不包含地球半徑6440 km)到衛星的距離s
// 再輸入衛星運行角度a(以地球為圓心)
// 接著輸入字串"min"或"deg"代表該運行的角度是以"分"計算或以"度"計算
// 輸出該衛星運行的弧長和該衛星運行的起點和終點的距離(弦長),輸出接取至小數點後第六位

#include <iostream>
#include <iomanip>
#include <math.h>

#define pi 2*acos(0.0)

using namespace std;

int main()
{
	double s, a; char str[4];
	while (cin >> s >> a >> str)
	{
		s += 6440;
		if (strcmp("min", str) == 0)a /= 60;
		if (a > 180)a = 360 - a;
		cout << fixed << setprecision(6) << s * 2 * pi * a / 360 << " " << 2 * sin(a * pi / 360)*s << endl;
	}
}