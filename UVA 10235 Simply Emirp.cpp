// 1�P-26 Simply Emirp

// ����J�Ʀrn
// �p�Gn�O��ƥBn�ϹL�Ӥ]�O��ƫh��X"n is emirp."
// �p�Gn�O��ƥBn�ϹL�Ӥ��O��ƫh��X"n is prime."
// �p�Gn���O��ƥBn�h��X"n is not prime."

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