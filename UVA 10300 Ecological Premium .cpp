#include<iostream>
using namespace std;
//先輸入測試幾組case
//輸入一個case有幾個農夫
//輸入個別農夫農場面積，動物數目，環保等級
//輸出為平均居住空間*環保等級*動物數目
int main()
{
	int cases;
	cin >> cases;
	while(cases--)
	{
		double farmer = 0;
		double sum = 0;
		cin >> farmer;
		for(int i = 0;i < farmer;i++)
		{
			double area, number, level = 0;
			cin >> area >> number >> level;
			sum += (area / number) * level * number; 
		}
		cout << sum << endl;
	}
}