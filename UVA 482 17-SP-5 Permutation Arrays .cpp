#include<iostream>
#include<string>
#include<sstream>
#include<map>
using namespace std;
//先輸入要幾組case
//接著先輸入數字(這些數字代表排列的順序號碼)，接著輸入各個號碼對應的數字
//要求把對應的數字按照順序輸出出來 ex : (3 1 2) (32.0 57.4 -2)，ans : 57.4 -2 32.0  
int main()
{
	int cases = 0;
	cin >> cases;
	cin.ignore();
	bool check = false;
	while(cases--)
	{
		cin.ignore();
		if(check)cout << endl;
		int n = 0, order[50] = {0};
		string input, number;
		stringstream ss;
		map<int, string>tmp;
		getline(cin, input);//input是存取順序的數字
		ss << input;//先將他以string型態存入串流
		while(ss >> order[n])n++;//接著以int型態存進order
		for(int i = 0;i < n;++i)
		{
			cin >> number;//number是存入要對應的數字
			tmp[order[i]] = number;//直接利用map對應
		}
		for(auto it = tmp.begin();it != tmp.end();++it)cout << it->second << endl;
		check = true;
		cin.ignore();
	}
}