// UVA 118 Mutant Flatworld Explorers

// 先輸入棋盤大小
// 輸入機器人初始位置和面對方向
// 輸入機器人路徑(R:右轉 L:左轉 F:前進)
// 輸出機器人最終在棋盤上的位置(如果掉出棋盤輸出其在棋盤上最後的位置並多輸出"LOST")
// PS:會記錄每次掉出棋盤上的位置，並不再會在那格掉出

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