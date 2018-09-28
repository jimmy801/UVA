// UVA 118 Mutant Flatworld Explorers

// ����J�ѽL�j�p
// ��J�����H��l��m�M�����V
// ��J�����H���|(R:�k�� L:���� F:�e�i)
// ��X�����H�̲צb�ѽL�W����m(�p�G���X�ѽL��X��b�ѽL�W�̫᪺��m�æh��X"LOST")
// PS:�|�O���C�����X�ѽL�W����m�A�ä��A�|�b���汼�X

#include <iostream>
#include <string>

using namespace std;

int main(){
	int x_l, y_l, x, y;
	char face;
	string way = "ESWNE";
	string steps;
	cin >> x_l >> y_l;
	bool fall[55][55] = {}, lost;
	while(cin >> x >> y >> face){
		cin >> steps;
		lost = false;
		for(int i = 0; i < steps.size(); ++i){
			if(steps[i] == 'R')face = way[way.find(face) + 1];
			else if(steps[i] == 'L')face = way[way.find_last_of(face) - 1];
			else if(steps[i] == 'F'){
				if(face == 'E'){
					if(x + 1 > x_l){
						if(!fall[x][y]){
							fall[x][y] = lost = true;
							break;
						}
					}
					else x++;
				}
				else if(face == 'S'){
					if(y - 1 < 0){
						if(!fall[x][y]){
							fall[x][y] = lost = true;
							break;
						}
					}
					else y--;
				}
				else if(face == 'W'){
					if(x - 1 < 0){
						if(!fall[x][y]){
							fall[x][y] = lost = true;
							break;
						}
					}
					else x--;
				}
				else if(face == 'N'){
					if(y + 1 > y_l){
						if(!fall[x][y]){
							fall[x][y] = lost = true;
							break;
						}
					}
					else y++;
				}
			}
		}
		cout << x << " " << y << " " << face;
		if(lost)cout << " LOST";
		cout << endl;
	}
}