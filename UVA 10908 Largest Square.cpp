// 1星-56 Largest Square 

// 先輸入會有幾個圖
// 輸入該圖的長寬和有幾組座標
// 輸入圖形
// 輸出每個以座標為中心的正方形最大邊長會是多少

#include <iostream>
using namespace std;

int main(){

	int times;
	cin >> times;

	char input[100][100];

	int length, height, casenum;

	int casepoint[2];

	cin >> height >> length >> casenum;
	cout << height << " " << length << " " << casenum << endl;

	while (times--){

		for (int i = 0; i < height; i++){ // 地圖
			for (int j = 0; j < length; j++)
				cin >> input[i][j];
		}

		while (casenum--){

			cin >> casepoint[0] >> casepoint[1]; // 中心點(因為每次都不一樣，所以不須要把之前的留著，可以只用2個變數)

			int square = 0;
			bool same = true; // 判斷是不是真的正方形

			while (same){ // 每次都多一個邊跑做確認(最後的square會是邊長的一半多一個)

				for (int i = -square; i < 1 + square; i++){ 
					for (int j = -square; j < 1 + square; j++){
						if (casepoint[0] + i < 0 || casepoint[1] + j < 0 
						|| casepoint[0] + i >= height || casepoint[1] + j >= length){ // 超過邊界，所以不可能再變大
							same = false;
							break;
						}

						if (input[casepoint[0] + i][casepoint[1] + j] != input[casepoint[0]][casepoint[1]]){ // 有其中一點不同
							same = false;
							break;
						}
					}
					if (!same)break; // 不是正方形，不用再進下次迴圈
				}

				if (!same)break; // 不是正方形
				else square++; // 是正方形，所以再試試可不可以變更大
			}

			cout << 2 * (square - 1) + 1 << endl; // 因為只記錄邊的一半，但因為會有包含中心點的那列，所以要*2要先扣掉中心點(中心點不會對稱)，然後再加回中心點的1

		}
	}
}