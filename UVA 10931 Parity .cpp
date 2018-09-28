#include<iostream>
#include<string>
#include<map>
using namespace std;
//給一個數字，找出此數字的二進為表示法，並在其中找出出現了幾次1。
int main()
{
	int number = 0;
	while(cin >> number)
	{
		if(number == 0)break;
		cout<< "The parity of ";
		int mod = 0, count = 0, ans = 0;
		map <int, int>tmp;//map真的屌屌ㄟ
		while(number > 0)
		{
			mod = number % 2;
			tmp[count] = mod;//從0開始對應一個mod後的數
			count++;//利用count可以找出有幾位數
			number /= 2;
		}
		for(int i = count - 1;i >= 0;i--)//反著輸出即為所求
		{
			cout << tmp[i];
			if(tmp[i] == 1)ans++;
		}
		cout << " is " << ans << " (mod 2)." << endl;
	}
}