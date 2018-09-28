// 1星-50 The Grazing Cow 

// 先輸入幾個case
// 輸入橢圓形焦距和2倍長軸長
// 依照分別case輸出橢圓形面積

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int cases;
	cin >> cases;
	while (cases--)
	{
		int d, l;
		cin >> d >> l;
		cout << setprecision(3) << fixed << sqrt((l + d)*(l - d))*l*acos(0) / 2 << endl;
	}
}