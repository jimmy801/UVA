// 1�P-12 WERTYU 

// ��J�@��r��
// ��X�Ӧr��U�r�������L��m����@�Ӧr��

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