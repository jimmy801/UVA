// 1星-26 Simply Emirp

// 先輸入數字n
// 如果n是質數且n反過來也是質數則輸出"n is emirp."
// 如果n是質數且n反過來不是質數則輸出"n is prime."
// 如果n不是質數且n則輸出"n is not prime."

#include <iostream>

using namespace std;

int main()
{
	char s[100];
	while (cin >> s)
	{
		int n = 0, m = 0;
		bool out = false;
		for (int i = strlen(s) - 1, j = 1; i >= 0; i--, j *= 10)n += (s[i] - '0') * j;
		if (n % 2 == 0 && n != 2){ cout << n << " is not prime.\n"; continue; }
		if (n == 2 || n == 3){ cout << n << " is prime.\n"; continue; }
		for (int i = 2; i <= sqrt(n); i++){ if (n%i == 0){ cout << n << " is not prime.\n"; out = true; break; } }
		if (out)continue;
		for (int i = 0, j = 1; i < strlen(s); i++, j *= 10)m += (s[i] - '0') * j;
		for (int i = 2; i <= sqrt(m); i++){ if (m%i == 0 || m == n){ cout << n << " is prime.\n"; out = true; break; } }
		if (!out)cout << n << " is emirp.\n";
	}
}