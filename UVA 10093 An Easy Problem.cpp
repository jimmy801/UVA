// 1星-13 An Easy Problem! 

// 輸入數字
// 輸出該數字可能會是幾進位制
//(十進制不包含英文字母，十六進制包含大寫英文字母A=10~F=15，六十二進制包含大寫英文字母A=10~Z=35,小寫英文字母a=36~z=61)

#include <iostream>

using namespace std;

int main()
{
	char in[10000];
	while (cin >> in)
	{
		int num = 0, tem = 0, max = 1;
		for (int i = 0; i < strlen(in); i++)
		{
			if (isdigit(in[i]))tem = in[i] - 48;
			if (isupper(in[i]))tem = in[i] - 55;
			if (islower(in[i]))tem = in[i] - 61;
			num += tem; max = max < tem ? tem : max;
		}
		for (int i = max; i <= 62; i++)
		{
			if (num%i == 0)
			{
				cout << i + 1 << endl; break;
			}
			if (i == 62)
				cout << "such number is impossible!" << endl;
		}
	}
}