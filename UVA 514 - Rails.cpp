// UVA 514 - Rails

#include <iostream>

using namespace std;

int main()
{
	int num, box[1000], block;
	bool b;
	while (cin >> num && num)
	{
		b = 0;
		while (1)
		{
			int k = 0, j = 0;
			bool found = 0;
			for (int i = 0; i < num; ++i)
			{
				cin >> block;
				if (!block){ ++b; cout << endl; break; }
				if (!k || (k && box[k - 1] != block))
				for (; j < block; ++j)
					box[k++] = j + 1;

				if (box[k - 1] != block){ if (!found){ cout << "No\n"; found++; } }
				else --k;
			}
			if (b)break;
			if (!k)cout << "Yes\n";
		}
	}
}