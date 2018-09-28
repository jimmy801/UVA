// 1星-01 What's Cryptanalysis? 

// 先輸入幾行
// 輸入任意字串
// 依照輸入字母由最多輸出到最少(相同時依照字母序列輸出)

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	map <char, int> anw;
	string save;

	int times;
	cin >> times;
	// cin.ignore();

	while (getline(cin, save)){
		for (int i = 0; i < save.size(); i++){//判斷是否為英文字母
			if (isalpha(save[i]))
				anw[toupper(save[i])]++;
		}
	}

	for (int i = 1000; i >= 0; i--){//由大到小
		for (auto ptr = anw.begin(); ptr != anw.end(); ptr++){
			if (ptr->second == i){
				cout << ptr->first << " " << ptr->second << endl;
			}
		}
	}
	return 0;
}