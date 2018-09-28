// 1星-63 Bee

// 先輸入第幾年
// 每年一隻雌蜂會生出一隻雄蜂，而一隻雄蜂會生出一隻雌風和一隻雄蜂，但蜜蜂生產完就會死
// 如果有"一隻"不死雌蜂活了N年
// 輸出該年有的雄蜂和總共蜜蜂數

#include <iostream>

using namespace std;

int main()
{
	int year;
	while (cin >> year)
	{
		if (year<0)break;
		long long male = 0, female = 1;
		for (int i = 0; i<year; ++i){ long long tmp = male; male += female, female = ++tmp; }
		cout << male << " " << male + female << endl;
	}
}