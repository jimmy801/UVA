// 1�P-13 An Easy Problem! 

// ��J�Ʀr
// ��X�ӼƦr�i��|�O�X�i���
//(�Q�i��]�t�^��r���A�Q���i��]�t�j�g�^��r��A=10~F=15�A���Q�G�i��]�t�j�g�^��r��A=10~Z=35,�p�g�^��r��a=36~z=61)

#include <iostream>

using namespace std;

int main()
{
	char in[10000];
	while (cin >> in)
	{
		int num = 0, tem = 0, max = 1;
		for (int i = 0; i < strlen(in); i++)
		{
			if (isdigit(in[i]))tem = in[i] - 48;
			if (isupper(in[i]))tem = in[i] - 55;
			if (islower(in[i]))tem = in[i] - 61;
			num += tem; max = max < tem ? tem : max;
		}
		for (int i = max; i <= 62; i++)
		{
			if (num%i == 0)
			{
				cout << i + 1 << endl; break;
			}
			if (i == 62)
				cout << "such number is impossible!" << endl;
		}
	}
}