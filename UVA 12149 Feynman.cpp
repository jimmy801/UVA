// UVA 12149 Feynman
// ��J�Ʀr
// ��X�ӼƦrn*n�ҧΦ�������Τ��i�H���X�Ӥp�����
// (�Y��1~n������M)

#include <iostream>

using namespace std;

int main()
{
	int num;
	while (cin >> num && num)
		cout << num*(num + 1)*(2 * num + 1) / 6 << endl;
}