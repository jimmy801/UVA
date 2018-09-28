// UVA1644-Prime Gap
// 輸入數字(2~1299719)
// 輸出他鄰近的2個質數的差

#include <iostream>

using namespace std;

int main(){
	int table[100001];
	table[0] = 2;
	for(int n = 3, k = 1; n < 1299710; n += 2){
		bool prime = true;
		for (int i = 2; i <= sqrt(n); i++)
			if (n % i == 0){ prime = false; break;}
		if(prime)table[k++] = n;
	}
	int n;
	while(cin >> n && n){
		int min = 0, max = 0;
		for(int i = 0; i < 100001; ++i){
			if(table[i] < n)min = table[i];
			else if(table[i] == n){ cout << "0\n"; break;}
			else if(table[i] > n){ max = table[i]; break;}
		}
		if(min && max)cout << max - min << endl;
	}
}