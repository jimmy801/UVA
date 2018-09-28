// 1�P-01 What's Cryptanalysis? 

// ����J�X��
// ��J���N�r��
// �̷ӿ�J�r���ѳ̦h��X��̤�(�ۦP�ɨ̷Ӧr���ǦC��X)

#include <iostream>
#include <string>

using namespace std;

int main(){
	int line, max = 0;
	int letter[26] = { 0 };
	string in;
	cin >> line;
	while(getline(cin, in)){
		for (int i = 0; i < in.size(); ++i){
			if (isalpha(in[i])){
				int tmp = ++letter[toupper(in[i]) - 'A'];
				max = max > tmp ? max : tmp;
			}
		}
	}
	max++;
	while(max--)
		for (int i = 0; i < 26; ++i)
			if (letter[i] == max)
				cout << char(i + 'A') << " " << max << endl;
}