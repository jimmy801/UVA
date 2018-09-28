// 1星-44 To Carry or not to Carry 

// 先輸入2個數字
// 輸出2個數字的互斥或(XOR)

#include<iostream>
using namespace std;

int main()
{
	int A, B;
	while (cin >> A >> B)cout << (A^B) << endl;
}