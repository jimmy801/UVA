// 1�P-23 Decode the Mad man 

// ��J�@��r��
// �̷Ӷ��ǿ�X�Ӧr��U�r�������Ӧr��

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	char c;
	char s[] = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

	while (cin.get(c)){
		char a = 'a';
		if (c >= 'A' && c <= 'Z')
			c += (a - 'A');
		char *p = strchr(s, c);

		if (p){
			cout << *(p - 2);
		}
		else cout << c;
	}
	return 0;
}