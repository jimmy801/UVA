// 1星-92 Palindromes

// 輸入字串
// Palindrome就是會把一些特定字元變另外一個並且和另一半沒變化的字元對稱
// 輸出字串有沒有一般對稱和Palindrome


#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Reverse = "A3HILJMO2TUVWXY51SEZ8", reverse = "AEHIJLMOSTUVWXYZ12358", str;
	while (cin >> str)
	{
		cout << str << " -- is ";
		bool palindrome = 1, mirrored = 1;
		for (int i = 0, j = str.size() - 1; i<str.size() / 2 && (palindrome || mirrored); ++i, --j)
		{
			if (str[i] != str[j])mirrored = 0;
			if (Reverse.find(str[i])>21 || reverse[Reverse.find(str[i])] != str[j])palindrome = 0;
		}
		if (!palindrome&&!mirrored)cout << "not a palindrome.\n\n";
		else if (!palindrome&&mirrored)cout << "a regular palindrome.\n\n";
		else if (palindrome&&!mirrored)cout << "a mirrored string.\n\n";
		else if (palindrome&&mirrored)cout << "a mirrored palindrome.\n\n";
	}
}