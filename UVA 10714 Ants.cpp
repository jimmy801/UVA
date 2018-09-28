// 1星-53 Ants

// 先輸入數字
// 輸出該數字有幾個質因數

#include <iostream>
#include <string>
using namespace std;

int main(){
	int times;
	cin >> times;

	while (times--){

		int length, antc;
		cin >> length >> antc;

		int antp, max = 0, min = 0;

		while (antc--){
			cin >> antp;
			/*7 > 10 - 7 (antp 在遠處)*/
			if (antp > length - antp)
				antp = length - antp; //(把遠處座標換成近處座標)
			if (length - antp > max)max = length - antp;
			if (antp > min)min = antp;
		}

		cout << min << " " << max << endl;

	}
}