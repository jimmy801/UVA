// 1�P-94 Rotating Sentences 

// ��J�h�զr��
// �q�̫�@�զr��}�l������X

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string target[100];
	int line = 0;
	while (getline(cin, target[line]))line++;
	int max = 0;
	for (int i = 0; i < line; i++)
	if (target[i].size() > max)max = target[i].size();
	for (int j = 0; j < max; j++)
	{
		for (int i = line - 1; i >= 0; i--)
		{
			if (j < target[i].size())cout << target[i][j];
			else if (i)cout << " ";
		}
		cout << endl;
	}
}