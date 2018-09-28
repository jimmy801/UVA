#include<iostream>
#include<iomanip>
#include<sstream>
#include<string>
using namespace std;
//給一個數字，若是10進制就轉16進制，16則轉10，-1則break。
int main()
{
	string input;
	stringstream ss;
	int convert;
	while(true)
	{
		cin >> input;
		if(input == "-1")break;
		if(input[0] == '0' && input[1] == 'x')
		{
			ss << setbase(16) << input;//<<把string型態變數寫入到stringstream
			ss >> convert;//把東西讀取出來寫到int型態
			cout << setbase(10) << convert << endl;
		}
		else 
		{
			ss << setbase(10) << input;
			ss >> convert;
			cout << "0x" << setbase(16) << uppercase << convert << endl;			
		}
		ss.str("");//重複用的話要清空
		ss.clear();
	}
}