// 1星-85 Mutant Flatworld Explorers 

// 輸入地圖是幾乘幾
// 輸入機器人初始座標和他面向的方位
// 輸入機器人會往哪裡轉
// 輸出機器人最終座標和他面向的方位，如果機器人超出地圖輸出LOST

#include <iostream>
#include <string>

using namespace std;

int main(){
	int mx, my;
	bool pre[100][100] = {};
	cin >> mx >> my;

	int px, py;
	char p;

	string mod;

	while (cin >> px >> py >> p){
		cin.ignore();
		getline(cin, mod);

		bool dead = false;

		for (int i = 0; i < mod.size(); i++){
			if (mod[i] == 'R'){
				if (p == 'N') p = 'E';
				else if (p == 'S') p = 'W';
				else if (p == 'E') p = 'S';
				else if (p == 'W') p = 'N';
			}

			else if (mod[i] == 'L'){
				if (p == 'N') p = 'W';
				else if (p == 'S') p = 'E';
				else if (p == 'E') p = 'N';
				else if (p == 'W') p = 'S';
			}

			else if (mod[i] == 'F'){
				if (p == 'N') py++;
				else if (p == 'S') py--;
				else if (p == 'E') px++;
				else if (p == 'W') px--;
			}

			if (py > my || px > mx || px < 0 || py < 0){
				if (p == 'N') py--;
				else if (p == 'S') py++;
				else if (p == 'E') px--;
				else if (p == 'W') px++;

				if (pre[px][py])continue;

				pre[px][py] = true;
				dead = true;
				break;
			}

		}

		cout << px << " " << py << " " << p << (dead ? " LOST\n" : "\n");

	}

	return 0;
}