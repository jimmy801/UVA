// 1星-58 Krakovia 

// 先輸入有筆資金和幾個朋友
// 再分別輸入每筆資金多少
// 輸出資金總和和每個人要出多少

#include <iostream>

using namespace std;

int main()
{
	int data, friends, Bill = 1;;
	while (cin >> data >> friends)
	{
		if (!data)break;
		unsigned long long money, total = 0;
		for (int i = 0; i<data; ++i){ cin >> money; total += money; }
		cout << "Bill #" << Bill++ << " costs " << total << ": each friend should pay "
			<< total / friends << endl << endl;
	}
}