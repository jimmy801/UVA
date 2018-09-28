// 1星-00 3n+1

// 先輸入範圍起點a和終點b
// 輸出起點和終點的值
// 如果從起點到終點之間有偶數就除2
// 如果從起點到終點之間有奇數就乘以3再加1
// 重複上面兩步驟直到該值等於1
// 輸出起點到終點間可以執行"3n+1"的最多次數

#include <iostream>
using namespace std;
int main()
{
	int n, a, b, len, count;
	while (cin >> a >> b){
		cout << a << " " << b << " ";
		if (a > b)swap(a, b);
		len = 0;
		for (int i = a; i <= b; i++){
			n = i; count = 1;
			while (n != 1){ n = n % 2 ? 3 * n + 1 : n / 2; count++; }
			len = len < count ? count : len;
		}
		cout << len << endl;
	}
}