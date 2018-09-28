// 1星-20 Is This Integration? 

/*使用PI=3.14159可能不夠精確，請用2.0*acos(0.0)作為PI的值。*/

// 先輸入邊長
// 在輸出Z,4Y,4X四捨五入取道小數第3位(參照圖片)

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	double a;
	while (cin >> a)
	{
		double z = pow(a, 2)*(1 - sqrt(3) + 2.0 * acos(0.0) / 3), y4 = (2 * (pow(a, 2) * 2.0 * acos(0.0) / 4 - pow(a, 2) / 2) - z) * 2, x4 = pow(a, 2) - z - y4;
		cout << fixed << setprecision(3) << z << " " << y4 << " " << x4 << endl;
	}
}