// 1星-14 Bangla Numbers

// 先輸入一串數字
// 輸出該數字包含是幾kuti(10,000,000),幾lakh(100,000),幾hajar(1,000),幾shata(100)

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	long long a; int b = 1; 
	while (cin >> a)
	{
		bool out = false;
		cout << setw(4) << b << ".";
		if (a >= 10000000){
			if (a / 10000000 >= 10000000){ if (a / 10000000 / 10000000 > 0) cout << " " << a / 10000000 / 10000000 << " kuti"; else cout << " kuti"; a %= 100000000000000; }
			if (a / 10000000 >= 100000){ if (a / 10000000 / 100000 > 0) cout << " " << a / 10000000 / 100000 << " lakh"; else cout << " lakh"; a %= 1000000000000; }
			if (a / 10000000 >= 1000){ if (a / 10000000 / 1000 > 0) cout << " " << a / 10000000 / 1000 << " hajar"; else cout << " hajar"; a %= 10000000000; }
			if (a / 10000000 >= 100){ if (a / 10000000 / 100 > 0) cout << " " << a / 10000000 / 100 << " shata"; else cout << " shata"; a %= 1000000000; }
			if (a / 10000000 > 0)cout << " " << a / 10000000 << " kuti"; else cout << " kuti"; a %= 10000000; out = true;
		}
		if (a >= 100000){
			if (a / 10000000 >= 1000){ if (a / 100000 / 1000 > 0) cout << " " << a / 100000 / 1000 << " hajar"; else cout << " hajar"; a %= 100000000; }
			if (a / 10000000 >= 100){ if (a / 100000 / 100 > 0) cout << " " << a / 100000 / 100 << " shata"; else cout << " shata"; a %= 10000000; }
			if (a / 100000 > 0)cout << " " << a / 100000 << " lakh"; else cout << " lakh"; a %= 100000; out = true;
		}
		if (a >= 1000){
			if (a / 10000000 >= 100){ if (a / 1000 / 100 > 0) cout << " " << a / 1000 / 100 << " shata"; else cout << " shata"; a %= 100000; }
			if (a / 1000 > 0)cout << " " << a / 1000 << " hajar"; else cout << " hajar"; a %= 1000; out = true;
		}
		if (a >= 100){ if (a / 100 > 0) cout << " " << a / 100 << " shata"; else cout << " shata"; a %= 100; out = true; }
		if (!out || (out&&a != 0))
			cout << " " << a;cout << endl; b++;
	}
}

/*測資
23764
45897458973958
0
999999999999999
45897008973958
10000000
1000000000  26572  31130  2977  28933  26358
*/

/*答案
1. 23 hajar 7 shata 64
2. 45 lakh 89 hajar 7 shata 45 kuti 89 lakh 73 hajar 9 shata 58
3. 0
4. 9 kuti 99 lakh 99 hajar 9 shata 99 kuti 99 lakh 99 hajar 9 shata 99
5. 45 lakh 89 hajar 7 shata kuti 89 lakh 73 hajar 9 shata 58
6. 1 kuti
7. 1 shata kuti
8. 26 hajar 5 shata 72
9. 31 hajar 1 shata 30
10. 2 hajar 9 shata 77
11. 28 hajar 9 shata 33
12. 26 hajar 3 shata 58
*/