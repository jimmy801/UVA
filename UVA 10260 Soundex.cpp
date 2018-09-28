// 1琍-30 Soundex

// 沮Soundex絏

// B, F, P, V 计1
// C, G, J, K, Q, S, X, Z 计2
// D, T 计3
// L 计4
// M, N 计5
// R 计6

// 块﹃﹃
// 块赣﹃柑才Soundex絏计(计硈尿ダぃ狡瞷)

#include <iostream>

using namespace std;

int main()
{
	char a[][9] = { "BFPV", "CGJKQSXZ", "DT", "L", "MN", "R" };
	char str[20];
	while (cin.get(str, 20, '\n'))
	{
		cin.ignore();
		int out[20] = { 0 };
		for (int i = 0; i < strlen(str); i++)
		{
			for (int j = 0; j < 6; j++)
			{
				for (int k = 0; k < 9; k++)
				{
					if (a[j][k] == '\0')break;
					if (!i)if (a[j][k] == str[i]){ out[i] = j + 1; cout << j + 1; break; }
					if (a[j][k] == str[i])out[i] = j + 1;
					if (a[j][k] == str[i] && out[i - 1] != j + 1){ out[i] = j + 1; cout << j + 1; break; }
				}
			}
		}
		cout << endl;
	}
}