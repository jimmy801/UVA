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
	char face; // �����V
	string way = "ESWNE";
	int x_d[] = {1, 0, -1, 0}; // E: X+1 W: X-1
	int y_d[] = {0, -1, 0, 1}; // S: Y-1 N: Y+1
	string steps;
	cin >> x_l >> y_l; // ��Jx limit, y limit(���))
	bool fall[55][55] = {}; // ����������l
	bool lost; // �o���O�_����
	while(cin >> x >> y >> face){
		cin >> steps;
		lost = false;
		for(int i = 0; i < steps.size(); ++i){
			int f = way.find(face);
			if(steps[i] == 'R')face = way[f + 1];
			else if(steps[i] == 'L')face = way[way.find_last_of(face) - 1];
			else if(steps[i] == 'F'){
				x += x_d[f];
				y += y_d[f];
				if(x < 0 || x > x_l || y < 0 || y > y_l){ // �W�L���
					x -= x_d[f];
					y -= y_d[f];
					if(!fall[x][y]){ // �Ĥ@���b(X, Y)�W�L���
						lost = fall[x][y] = true;
						break;
					}
				}
			}
		}
		cout << x << " " << y << " " << face;
		if(lost)cout << " LOST";
		cout << endl;
	}
}