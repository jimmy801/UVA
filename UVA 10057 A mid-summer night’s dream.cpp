// 1�P-09 A mid-summer night��s dream

// ����J���X�ռƦr
// ��J�Ʀr
// �p��X�C�ӼƦr��@�ӥ�����A������Ȭۥ[���̤p��
// ��XA
// (| X1 - A | + | X2 - A | + | X3 - A | + ... ���̤p��)

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, s[65537];
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)cin >> s[i];
		sort(s, s + n); 
		int c = 0; 
		int m = s[(n - 1) / 2], M = s[n / 2], z = M - m + 1;
		for (int i = 0; i < n; i++)if (s[i] == m || s[i] == M)c++;
		cout << m << " " << c << " " << z << endl;
	}
}