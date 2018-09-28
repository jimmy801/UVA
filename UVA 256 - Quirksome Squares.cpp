#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int anw[4][10];
	int count[4] = {};

	for (int i = 0; i < 1000; i++){
		for (int j = 0; j < 1000; j++){

			int len = 10;
			for (int k = 0; k < 3; k++, len *= 10){
				if ((i + j) * (i + j) == i * len + j &&
					i / len == 0 && j / len == 0)
					anw[k][count[k]++] = i * len + j;
			}

		}
	}

	int num;
	bool do8 = {};

	while (cin >> num){
		if (num == 8 && !do8){
			for (int i = 0; i < 10000; i++){
				for (int j = 0; j < 10000; j++){

					if ((i + j) * (i + j) == i * 10000 + j &&
						i / 10000 == 0 && j / 10000 == 0)
						anw[3][count[3]++] = i * 10000 + j;

				}
			}
		}

		for (int i = 0; i < count[num / 2 - 1]; i++){
			cout << setfill('0') << setw(num) << anw[num / 2 - 1][i] << endl;
		}
	}
}