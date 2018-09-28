// 1星-40 Die Game

// 先輸入有幾個case
// 輸入每筆會怎樣轉
// 輸出最後骰子幾點

/*first round
top  -> 1, north -> 2, west ->3*/

#include <iostream>
#include <string>

using namespace std;

const string direction[4] = { "north", "east", "south", "west" };

int main(){
	int times;
	cin >> times;

	string cmd;

	int top = 1;
	int north = 2;
	int west = 3;
	int temp = top;

	while (true){

		if (!times)break;

		cin >> cmd;

		if (cmd == direction[0]){
			top = 7 - north;
			north = temp;
		}

		else if (cmd == direction[1]){
			top = west;
			west = 7 - temp;
		}

		else if (cmd == direction[2]){
			top = north;
			north = 7 - temp;
		}

		else if (cmd == direction[3]){
			top = 7 - west;
			west = temp;
		}

		times--;
		if (!times){
			cout << top << endl;
			cin >> times;
			top = 1;
			north = 2;
			west = 3;
		}

		temp = top;
	}
	return 0;
}