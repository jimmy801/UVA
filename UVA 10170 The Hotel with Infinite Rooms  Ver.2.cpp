// 1�P-16 The Hotel with Infinite Rooms

// �Ĥ@�����n�������l�Ʀrn��n+1�����n+1+n+1-1����n+1
// ����J��l�Ʀr�M�n�䪺�ĴX��
// ��X�n�䪺�������Ʀr

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