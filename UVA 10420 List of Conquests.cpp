// 1星-42 List of Conquests  

// 先輸入有幾個case
// 輸入每筆會有哪些國家，後面輸入該國家遇到的人(不重要)
// 按國家首字母順序輸出去過該國家次數

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	string name, country[2001];
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> country[i];
		getline(cin, name);
	}
	sort(country, country + n);
	int j = 1;
	for (int i = 0; i < n; i++){
		cout << country[i];
		int number = 1;
		for (int j = i + 1; j < n; j++){
			if (country[j] != country[i])
				break;
			else
				number++;
			i = j;
		}
		cout << " " << number << endl;
	}
}