// 1星-19 All You Need Is Love 

// 輸入幾組case
// 輸入每組的兩個二進制數字
// 若兩個二進制數字至少都能夠減另一個二進制數字L且減到最後等於L，輸出"Pair #n: All you need is love!"
// 若兩個二進制數字沒有共同的L或該L只有一個位數，輸出"Pair #n: Love is not all you need!"

#include <iostream>

using namespace std;

int trans(char a[])
{
	int num = 0;
	for (int i = strlen(a) - 1, j = 1; i >= 0; i--, j *= 2)
		num += (a[i] - '0') * j;
	return num;
}

int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			char s1[31], s2[31];
			cin >> s1 >> s2;
			int S1 = trans(s1), S2 = trans(s2);
			while((S1 %= S2)&&(S2 %= S1));
			if (S1 + S2  == 1){cout << "Pair #" << i + 1 << ": Love is not all you need!\n"; continue; }
			cout << "Pair #" << i + 1 << ": All you need is love!\n"; 
		}
	}
}