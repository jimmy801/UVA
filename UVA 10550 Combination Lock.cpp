// 1星-47 Combination Lock 

// 先輸入初始刻度位置和連續3個密碼
// 要先順時針轉2圈
// 再順時針轉至第一個密碼的位置
// 接著逆時針轉一圈
// 再逆時針轉至第二個密碼的位置
// 再順時針轉至第三個密碼的位置
// 所以至少會要有轉一定要轉的順時針2圈和逆時針1圈(一共1080度)

#include <iostream>

using namespace std;

int main()
{
	int start, first, second, third;
	while (cin >> start >> first >> second >> third)
	{
		if (!start&&!first&&!second&&!third)break;
		int angle = 1080;
		angle += start<first ? (start - first + 40) * 9 : (start - first) * 9;
		angle += first>second ? (second - first + 40) * 9 : (second - first) * 9; // 逆時針
		angle += second<third ? (second - third + 40) * 9 : (second - third) * 9;
		cout << angle << endl;
	}
}