// 1�P-20 Is This Integration? 

/*�ϥ�PI=3.14159�i�ण����T�A�Х�2.0*acos(0.0)�@��PI���ȡC*/

// ����J���
// �b��XZ,4Y,4X�|�ˤ��J���D�p�Ʋ�3��(�ѷӹϤ�)

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