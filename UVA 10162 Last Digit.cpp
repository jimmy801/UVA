// 1琍-15 Last Digit

// 块计N
// 块1^1+2^2+3^3+...+N^N程计
// 砏玥:1->1, 2->5,3->2,4->8,5->3,6->9,7->2,8->8,9->7,10->7,11->8,12->4,13->7,14->3,15->8,16->4,17->1,18->5,19->4,20->4
// –20碻吏τ20计常4
// ┮100=20*5->4*5=>0

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string n;
	int num, table[] = { 1, 5, 2, 8, 3, 9, 2, 8, 7, 7, 8, 4, 7, 3, 8, 4, 1, 5, 4 };
	while (cin >> n)
	{
		if (n == "0")break;
		num = n.size()>2 ? atoi(n.substr(n.size() - 2).c_str()) : atoi(n.c_str());
		if (num % 20)cout << (num / 20 * 4 + table[num % 20 - 1]) % 10 << endl;
		else cout << (num / 5) % 10 << endl;
	}
}