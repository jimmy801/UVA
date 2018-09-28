// 1星-34 Babelfish 

// 先輸入單字和要輸入甚麼會對應到單字
// 再輸入一個字串看他有沒有在建立的字典裡
// 如果有輸出該單字，沒則輸出"eh"

#include <iostream>

using namespace std;

int main()
{
	char dic[100][100], word[100][100], str[1000]; int j = 0;
	while (cin.getline(str,1000,'\n'))
	{
		bool jump = false;
		if (!strcmp(str,""))break;
		for (int i = 0, m = 0; i < strlen(str); i++)
		{
			if (str[i] == ' ')
			{
				i++;
				for (int k = 0; i < strlen(str); i++, k++)word[j][k] = str[i];
				j++;
				jump = true;
			}
			if (jump){ jump = false; m = 0; continue; }
			dic[j][m] = str[i]; 
			m++;
		}
	}
	while (cin >> str)
	{
		for (int i = 0; i <= j; i++)
		{
			if (!strcmp(str, word[i])){ for (int k = 0; k < strlen(dic[i]); k++)cout << dic[i][k]; cout << endl; break; }
			if(i == j) cout << "eh\n";
		}
	}
}