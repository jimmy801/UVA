// 1星-10 Tell me the frequencies!

// 輸入字串
// 依頻率由小到大輸出其頻率多寡和ASII碼

#include <iostream>

using namespace std;

int main()
{
	char str[1000]; int time = 0;
	while (cin.get(str,1000,'\n'))
	{
		cin.ignore();
		if (time)cout << endl;
		int num[1000] = {}, letter[1000] = {};
		for (int i = 0; i < strlen(str); i++)
		{
			for (int j = 0;; j++)
			{
				if (letter[j] == 0 || letter[j] == str[i]){
					letter[j] = str[i]; num[j]++; break;
				}
			}
		}
		for (int i = 0; i<strlen(str); i++)
		{
			for (int j = i + 1;; j++)
			{
				if (num[j] == 0)break;
				if (num[i] > num[j]){
					num[i] ^= num[j] ^= num[i] ^= num[j]; letter[i] ^= letter[j] ^= letter[i] ^= letter[j];
				}
				if (num[i] == num[j])if (letter[i]<letter[j])letter[i] ^= letter[j] ^= letter[i] ^= letter[j];
			}
		}
		for (int i = 0;; i++){ if (num[i] == 0)break; cout << letter[i] << " " << num[i] << endl; }time++;
	}
}