// 1星-86 Do Your Own Homework!

// 輸入幾組測資
// 輸入每組有幾樣作業
// 輸入每組作業名稱和所需時間
// 輸入自己的作業名稱和所需時間
// 和自己作業名稱相同的作業所需天數如果再自己作業所需時間+5日以內(含)但大於自己作業所需時間輸出Late
// 和自己作業名稱相同的作業所需天數如果小於等於自己作業所需時間輸出Yesss
// 如果沒有相同作業或所需天數大於自己作業所需時間+5日輸出Do your own homework!


#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t, cases = 1, n, day[100];
	string name[100];
	cin >> t;
	while (t--)
	{
		cout << "Case " << cases++ << ": ";
		cin >> n;
		int i = 0;
		while (n--)cin >> name[i] >> day[i++];
		cin >> day[i] >> name[i];
		for (int j = 0; j<i; ++j)
		{
			if (name[j] == name[i])
			{
				if (day[i] >= day[j])cout << "Yesss\n";
				else if (day[j]>day[i] + 5)cout << "Do your own homework!\n";
				else cout << "Late\n";
				break;
			}
			if (j == i - 1)cout << "Do your own homework!\n";
		}
	}
}