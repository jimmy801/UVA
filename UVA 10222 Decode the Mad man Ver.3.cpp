// 1�P-23 Decode the Mad man 

// ��J�@��r��
// �̷Ӷ��ǿ�X�Ӧr��U�r�������Ӧr��

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a = "qwertyuiop[]\\asdfghjkl;\'zxcvbnm,./";
	string str;
	while (getline(cin, str))
	{
		for (int i = 0; i < str.size();i++){
			int j = a.find(tolower(str[i]));
			if(j != string::npos)cout << a[j - 2];
			else cout << str[i];
		}
		cout << endl;
	}
}