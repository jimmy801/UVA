// 1�P-01 What's Cryptanalysis? 

// ����J�X��
// ��J���N�r��
// �̷ӿ�J�r���ѳ̦h��X��̤�(�ۦP�ɨ̷Ӧr���ǦC��X)

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
		for (int i = 0; i < save.size(); i++){//�P�_�O�_���^��r��
			if (isalpha(save[i]))
				anw[toupper(save[i])]++;
		}
	}

	for (int i = 1000; i >= 0; i--){//�Ѥj��p
		for (auto ptr = anw.begin(); ptr != anw.end(); ptr++){
			if (ptr->second == i){
				cout << ptr->first << " " << ptr->second << endl;
			}
		}
	}
	return 0;
}