// 1星-61 Throwing cards away I 

// 先輸入數字
// 規則是先丟出最上面的牌，再把(新的)最上面的牌放到最下面
// 輸出該數字丟牌順序和最後剩餘的牌

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		if (!num)break;
		vector<int>deck, discard;
		for (int i = 0; i < num; ++i)deck.push_back(i + 1);
		while (deck.size() > 1)
		{
			discard.push_back(deck[0]);
			deck.push_back(deck[1]);
			deck.erase(deck.begin());
			deck.erase(deck.begin());
		}
		cout << "Discarded cards:";
		if (discard.size())
		{
			cout << " " << discard[0]; 
			for (int i = 1; i < discard.size(); ++i)cout << ", " << discard[i];
		}
		cout << "\nRemaining card: " << deck[0] << endl;
	}
}