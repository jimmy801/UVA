// 1�P-24 Hardwood species 

// ����J���X�����
// ��J�Ӹ�ƨC����ơA�H�Ť@��@����
// ���W�٦r�����ǿ�X�ӼƩҥe��Ƥ������(��p�Ʋĥ|��)

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string target[100];
	int cases;
	cin >> cases;
	while (cases--)
	{
		int line = 0;
		while (getline(cin, target[line]))
		{
			if (target[line] != "")line++;
			else{ if (line)break; }
		}
		sort(target, target + line);
		for (int i = 1, ans = 1; i <= line; ++i)
		{
			if (target[i] == target[i - 1])ans++;
			else{ cout << target[i - 1] << " " << fixed << setprecision(4) << float(ans) / line * 100 << endl; ans = 1; }
		}
		if (cases)cout << endl;
	}
}