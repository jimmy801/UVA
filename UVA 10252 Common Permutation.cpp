// 1星-28 Common Permutation 

// 先輸入兩組字串
// 依照字母順序輸出兩字串皆有的字母

#include <iostream>

using namespace std;

int main()
{
	char s1[1000], s2[1000];
	while (cin.get(s1, 1000, '\n'))
	{
		cin.ignore();
		cin.get(s2, 1000, '\n'); cin.ignore();
		int le[26] = { 0 }, letter[26] = { 0 };
		for (int i = 0; i < strlen(s1); i++)
		{
			le[s1[i] - 'a']++;
		}
		for (int i = 0; i < strlen(s2); i++)
		{
			letter[s2[i] - 'a']++;
		}
		for (int i = 0; i < 26; i++)if (letter[i]>0)letter[i] = letter[i]>le[i] ? le[i] : letter[i];
		for (int i = 0; i < 26; i++)if (letter[i]>0)for(;letter[i]>0;letter[i]--)cout << (char)(i + 'a');
		cout << endl;
	}
}