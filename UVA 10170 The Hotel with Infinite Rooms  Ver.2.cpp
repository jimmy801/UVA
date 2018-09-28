// 1星-16 The Hotel with Infinite Rooms

// 第一項到第n項為其初始數字n第n+1項到第n+1+n+1-1項為n+1
// 先輸入初始數字和要找的第幾項
// 輸出要找的那項的數字

#include <iostream>
using namespace std;

int main()
{
	long long int S, D;
	long long area;

	while (cin >> S >> D){
		for (int i = 0;; i++){
			area = (S + (S + i))*(i + 1) / 2;
			if (area >= D){
				cout << S + i << endl;
				break;
			}
		}
	}
}