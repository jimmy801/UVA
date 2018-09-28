// 1�P-36 Dog and Gopher

// ����J���X�Ӭ}�i�H�Ѫ��ṫ�k�]
// ��J���ṫ��l��m�M������l��m
// ���U�ӿ�J���ṫ�ӧO�}�ު��y��
// �p�G���ṫ�}�ަ�m�Z������m����ṫ��m��}�ަ�m���⭿�٤p�A��X"The gopher cannot escape.\n"
// �_�h��X"The gopher can escape through the hole at ("�}�ޮy��")\n"

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