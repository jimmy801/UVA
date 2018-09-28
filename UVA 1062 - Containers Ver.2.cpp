// UVA 1062 - Containers

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int cases = 0;
	string str, container;
	while (getline(cin, str) && str != "end")
	{
		container = "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		for (int i = 0; i < str.size(); ++i)
			for (int j = 0; j <= container.size(); ++j)
				if (str[i] <= container[j]){ container[++j] = str[i]; break; }
		cout << "Case " << ++cases << ": " << container.find('~') << endl;
	}
}