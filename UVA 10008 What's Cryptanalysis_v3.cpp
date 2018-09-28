// 1星-01 What's Cryptanalysis? 

// 先輸入幾行
// 輸入任意字串
// 依照輸入字母由最多輸出到最少(相同時依照字母序列輸出)

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