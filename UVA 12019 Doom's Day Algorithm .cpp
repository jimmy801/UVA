#include<iostream>
#include<string>
#include<map>
//先輸入要幾組case，然後輸入月份跟日期，求出那一天是星期幾。
//依照題目給的每個月為Monday的日期1/10 2/21 3/7 4/4 5/9 6/6 7/11 8/8 9/5 10/10 11/7 12/12
using namespace std;
int main()
{
	int cases = 0, month = 0, date = 0;
	cin >> cases;
	while(cases--)
	{
		int save[12] = {10, 21, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12}, tmp = 0;
		map<int, int>record;
		for(int i = 0;i < 12;++i)record[i + 1] = save[i];
		cin >> month >> date;
		for(auto it = record.begin();it != record.end();++it)
		{
			if(month == it->first)
			{
				if(date >= it->second)tmp = (date - it->second) % 7;
				else tmp = (date - it->second + 28) % 7;
				if(tmp == 0)cout << "Monday";
				if(tmp == 1)cout << "Tuesday";
				if(tmp == 2)cout << "Wednesday";
				if(tmp == 3)cout << "Thursday";
				if(tmp == 4)cout << "Friday";
				if(tmp == 5)cout << "Saturday";
				if(tmp == 6)cout << "Sunday";
				break;
			}
		}
		cout << endl;
	}
}