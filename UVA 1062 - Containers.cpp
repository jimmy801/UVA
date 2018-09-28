// UVA 1062 - Containers

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int cases = 0;
	string str, container[100];
	while (getline(cin, str) && str != "end")
	{
		int ans = 1, tem1;
		for (int i = 0; i < str.size(); ++i)
		{
			for (int j = 0; j <= ans; ++j)
			{
				if (!container[j].size() || str[i] <= container[j][container[j].size() - 1]){ container[j] += str[i]; break; }
				else if (!container[j + 1].size() || container[j + 1][container[j + 1].size() - 1] >= str[i])
				{
					if (!container[j + 1].size())ans++;
					container[++j] += str[i]; break;
				}
			}
		}
		cout << "Case " << ++cases << ": " << ans << endl;
		for (int i = 0; i < ans; ++i)container[i].clear();
	}
}