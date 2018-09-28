// 1星-12 WERTYU 

// 輸入一串字串
// 輸出該字串各字元位於鍵盤位置左邊一個字元

#include <iostream>

using namespace std;

int main()
{
	char key[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	char in[10000];
	while (cin.getline(in, 10000, '\n'))
	{
		for (int i = 0; i < strlen(in); i++)
		{
			bool trans = true;
			if (in[i] == ' '){ cout << " "; continue; }
			for (int j = 0; j < strlen(key); j++)
			{
				if (in[i] == key[j]){ cout << (char)(key[j - 1]); break; }
			}
		}
		cout << endl;
	}
}