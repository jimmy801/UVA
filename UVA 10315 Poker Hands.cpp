// UVA 10315 Poker Hands

#include <iostream>
#include <string>

using namespace std;

string Flush = "23456789TJQKA";

int getRK(char(*cards)[2])
{
	int same = 1, pair = 0;
	bool three = 0, straight = 1, SF = 1;
	for (int i = 1; i < 5; ++i)
	{
		if (straight && Flush.find(cards[i][0]) - 1 != Flush.find(cards[i - 1][0]))straight = 0;
		if (SF)if (cards[i][1] != cards[i - 1][1])SF = 0;
		if (!straight)
		{
			if (cards[i][0] == cards[i - 1][0])++same;
			if (cards[i][0] != cards[i - 1][0] || i > 3)
			{
				if (same == 2)++pair;
				else if (same == 3)++three;
				else if (same > 3)return 7;
				same = 1;
			}
		}
	}
	if (straight){ if (SF)return 8; else return 4; }
	if (three){ if (pair)return 6; else return 3; }
	if (SF)return 5;
	if (pair){ if (pair > 1)return 2; else return 1; }
	return 0;
}

int main()
{
	char player1[5][2], player2[5][2];
	while (cin >> player1[0])
	{
		for (int i = 1; i < 5; ++i)cin >> player1[i];
		for (int i = 0; i < 5; ++i)cin >> player2[i];
		for (int i = 0; i < 5; ++i)
		for (int j = i + 1; j < 5; ++j)
		{
			if (Flush.find(player1[i][0]) > Flush.find(player1[j][0]))swap(player1[i], player1[j]);
			if (Flush.find(player2[i][0]) > Flush.find(player2[j][0]))swap(player2[i], player2[j]);
		}
		int PL1RK = getRK(player1), PL2RK = getRK(player2);
		if (PL1RK == PL2RK)
		{
			int PL1Same = Flush.find(player1[0][0]), PL2Same = Flush.find(player2[0][0]);
			int pair1[2], pair2[2], alone1 = Flush.find(player1[0][0]), alone2 = Flush.find(player2[0][0]);
			int Pair1, Pair2, OneIgnore, TwoIgnore;
			switch (PL1RK)
			{
			case 8:
			case 4:
				if (Flush.find(player1[4][0]) > Flush.find(player2[4][0]))++PL1RK;
				else if (Flush.find(player1[4][0]) < Flush.find(player2[4][0]))++PL2RK;
				break;
			case 7:
				if (player1[0][0] != player1[1][0])PL1Same = Flush.find(player1[1][0]);
				if (player2[0][0] != player2[1][0])PL2Same = Flush.find(player2[1][0]);
				if (PL1Same > PL2Same)++PL1RK;
				else if (PL1Same < PL2Same)++PL2RK;
				break;
			case 6:
			case 3:
				PL1Same = Flush.find(player1[2][0]);
				PL2Same = Flush.find(player2[2][0]);
				if (PL1Same > PL2Same)++PL1RK;
				else if (PL1Same < PL2Same)++PL2RK;
				break;
			case 5:
			case 0:
				for (int i = 4; i >= 0; --i)
				{
					if (Flush.find(player1[i][0]) < Flush.find(player2[i][0])){ ++PL2RK; break; }
					else if (Flush.find(player1[i][0]) > Flush.find(player2[i][0])){ ++PL1RK; break; }
				}
				break;
			case 2:
				for (int i = 1, tmp1 = 0, tmp2 = 0; i < 5; ++i)
				{
					if (player1[i][0] == player1[i - 1][0])pair1[tmp1++] = Flush.find(player1[i][0]);
					else if (player1[i][0] != player1[i + 1][0])alone1 = Flush.find(player1[i][0]);
					if (player2[i][0] == player2[i - 1][0])pair2[tmp2++] = Flush.find(player2[i][0]);
					else if (player2[i][0] != player2[i + 1][0])alone2 = Flush.find(player2[i][0]);
				}
				for (int i = 1; i >= 0; --i)
				{
					if (pair1[i] > pair2[i]){ ++PL1RK; break; }
					else if (pair1[i] < pair2[i]){ ++PL2RK; break; }
				}
				if (PL1RK == PL2RK)
				{
					if (alone1 > alone2)++PL1RK;
					else if (alone1 < alone2)++PL2RK;
				}
				break;
			case 1:
				for (int i = 1; i < 5; ++i)
				{
					if (player1[i][0] == player1[i - 1][0])Pair1 = Flush.find(player1[i][0]), OneIgnore = i;
					if (player2[i][0] == player2[i - 1][0])Pair2 = Flush.find(player2[i][0]), TwoIgnore = i;
				}
				if (Pair1 > Pair2)++PL1RK;
				else if (Pair1 < Pair2)++PL2RK;
				if (PL1RK == PL2RK)
				for (int i = 4, j = 4; i >= 0, j >= 0;)
				{
					if (i == OneIgnore){ i -= 2; continue; }
					if (j == TwoIgnore){ j -= 2; continue; }
					if (Flush.find(player1[i][0]) < Flush.find(player2[j][0])){ ++PL2RK; break; }
					else if (Flush.find(player1[i][0]) > Flush.find(player2[j][0])){ ++PL1RK; break; }
					--i, --j;
				}
				break;
			}
		}
		if (PL1RK > PL2RK)cout << "Black wins.\n";
		else if (PL1RK < PL2RK)cout << "White wins.\n";
		else cout << "Tie.\n";
	}
}