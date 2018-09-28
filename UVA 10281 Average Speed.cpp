// 1�P-33 Average Speed 

// ����Jhour:min:sec speed
// �A��J�s���ɶ��A�Y�s�ɶ��᭱�ä��]�t�t�׫h��X�Ӯɶ��I���Ҧb��m
// �Y�s�ɶ��᭱���s���t�סA��ܸӳt�ק��ܡA�ä���X����F��

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char str[1000]; double pos = 0, speed = 0;
	cin.get(str, 1000, '\n'); cin.ignore();
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ' || str[i] == ':')
		{
			for (int j = i; j < strlen(str) - 1; j++)str[j] = str[j + 1];
			str[strlen(str) - 1] = '\0';
		}
	}
	double hour = (str[0] - '0') * 10 + str[1] - '0', min = (str[2] - '0') * 10 + str[3] - '0', sec = (str[4] - '0') * 10 + str[5] - '0';
	for (int i = strlen(str) - 1, c = 1; i > 5; i--, c *= 10)speed += (str[i] - '0')*c;
	bool transV = false;
	while (cin.get(str, 1000, '\n'))
	{
		cin.ignore();
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] == ' ' || str[i] == ':')
			{
				for (int j = i; j < strlen(str) - 1; j++)str[j] = str[j + 1];
				str[strlen(str) - 1] = '\0';
			}
		}
		double hour1 = (str[0] - '0') * 10 + str[1] - '0', min1 = (str[2] - '0') * 10 + str[3] - '0', sec1 = (str[4] - '0') * 10 + str[5] - '0';
		if (strlen(str) > 6)
		{
			int c = 1;
			pos = speed*((hour1 - hour) + (min1 - min) / 60 + (sec1 - sec) / 3600); 
			speed = 0;
			for (int i = strlen(str) - 1;i > 5; i--, c *= 10)speed += (str[i] - '0')*c;
			transV = true;
			hour = (str[0] - '0') * 10 + str[1] - '0', min = (str[2] - '0') * 10 + str[3] - '0', sec = (str[4] - '0') * 10 + str[5] - '0';
			continue;
		}
		if (strlen(str) < 7 && transV)
		{
			pos += speed*((hour1 - hour) + (min1 - min) / 60 + (sec1 - sec) / 3600);
			transV = false;
		}
		else pos = speed*((hour1 - hour) + (min1 - min) / 60 + (sec1 - sec) / 3600);
		if (strlen(str) < 7)
		{
			cout << fixed << setprecision(0) << setw(2) << setfill('0') << hour1 << ":" << setw(2) << setfill('0') << min1 << ":" << setw(2) << setfill('0') << sec1 << " ";
			cout << fixed << setprecision(2) << pos << " km\n";
		}
	}
}