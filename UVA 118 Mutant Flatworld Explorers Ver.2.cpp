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
	char face; // 面對方向
	string way = "ESWNE";
	int x_d[] = {1, 0, -1, 0}; // E: X+1 W: X-1
	int y_d[] = {0, -1, 0, 1}; // S: Y-1 N: Y+1
	string steps;
	cin >> x_l >> y_l; // 輸入x limit, y limit(邊界))
	bool fall[55][55] = {}; // 紀錄掉落格子
	bool lost; // 這次是否掉落
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
				if(x < 0 || x > x_l || y < 0 || y > y_l){ // 超過邊界
					x -= x_d[f];
					y -= y_d[f];
					if(!fall[x][y]){ // 第一次在(X, Y)超過邊界
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