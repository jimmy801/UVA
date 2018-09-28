// 1星-48 Geometry Paradox 

// 先輸入幾個case
// 這題如果給你2個數字代表r1, r2半徑，那就很好算出灰色部分面積。
// 依照公式：((r1 + r2) * (r1 + r2) - r1 * r1 - r2 * r2) * PI。
// 如果只給你1個數字代表2圓外切圓直徑t，要假設r1 = r2，則t / 4則為兩圓半徑
// 而灰色部分則是(t / 2 * t / 2 * PI) - t * t / 8 * PI = t * t / 8 * PI。

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int cases;
	string input;
	cin >> cases; cin.ignore();
	while (cases--)
	{
		getline(cin, input);
		if (input.find(' ') != string::npos)
		{
			float r1 = atof(input.c_str()), r2 = atof(input.substr(input.find(' ') + 1).c_str());
			cout << setprecision(4) << fixed << ((r1 + r2)*(r1 + r2) - r1*r1 - r2*r2) * 2 * acos(0) << endl;
		}
		else
		{
			float t = atof(input.c_str());
			cout << setprecision(4) << fixed << (t*t / 8) * 2 * acos(0) << endl;
		}
	}
}