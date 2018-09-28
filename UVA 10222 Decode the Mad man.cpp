// 1星-23 Decode the Mad man 

// 輸入一串字串
// 依照順序輸出該字串各字元左邊兩個字元

#include <iostream>

using namespace std;

int main()
{
	char a[] = "qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char s[1000];
	while (cin.getline(s,1000,'\n'))
	{
		for (int i = 0; i < strlen(s);i++)
		for (int j = 0; j < strlen(a); j++)
		{
			if (s[i] == ' '){ cout << " "; break; }
			if (s[i] == a[j] || s[i] == a[j] - 32 ){ cout << a[j - 2]; break; }
		}
		cout << endl;
	}
}