// 1�P-03 Primary Arithmetic

// ��J��ӼƦr
// ��X��Ӧ�Ƭۥ[�|�ݭn�i��X��
// ���J"0 0"�N��פ�

#include <iostream>

using namespace std;

int main()
{
	char a[10], b[10]; int carry = 0;
	while (cin >> a >> b)
	{
		if (atoi(a) == 0 && atoi(b) == 0)break;
		int a1[10] = { 0 }, b1[10] = { 0 };
		for (int i = 0; i < strlen(a); ++i)
			a1[i] = a[strlen(a) - i - 1] - '0';
		for (int i = 0; i < strlen(b); ++i)
			b1[i] = b[strlen(b) - i - 1] - '0';
		int sumSize = strlen(a)>strlen(b) ? strlen(a) : strlen(b);
		for (int i = 0; i < sumSize; i++)if (a1[i] + b1[i]>9){
			carry++; a1[i + 1]++;
		}
		if (carry == 0)cout << "No carry operation.\n";
		else if (carry == 1)cout << "1 carry operation.\n";
		else
		cout << carry << " carry operations.\n"; carry = 0;
	}
}