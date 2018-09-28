#include <iostream>

using namespace std;

int main()
{
	int num;
	int anw[35];

	while (cin >> num && num){
		int size = 0, count = 0;

		cout << "The parity of ";
		while (num){
			anw[size] = num % 2;
			if (anw[size])count++;
			num /= 2;
			size++;
		}
		for (int i = size - 1; i >= 0; i--)
			cout << anw[i];

		cout << " is " << count << " (mod 2)." << endl;
	}
}