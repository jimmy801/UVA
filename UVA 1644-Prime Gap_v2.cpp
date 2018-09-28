// UVA1644-Prime Gap
// ��J�Ʀr(2~1299719)
// ��X�L�F��2�ӽ�ƪ��t

#include <iostream>

using namespace std;

bool get_prime(int n){
	for (int i = 2; i <= sqrt(n); i++)
	if (n % i == 0)return false;
	return true;
}

int main(){
	int n;
	while (cin >> n && n){
		int min = 0, max = 0;
		while (!get_prime(n + max))max++;
		while (!get_prime(n + min))min--;
		cout << max - min << endl;
	}
}