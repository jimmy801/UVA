// 1星-27 Fourth Point!! 

// 先輸入4個座標(其中有兩組座標重複)
// 輸出可能為平行四邊形的第4個頂點的座標

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
        if(x1 == x3 && y1 == y3)
            cout << fixed << setprecision(3) << (x2+x4)-x1 << " " << (y2+y4)-y1 << endl;
        else if(x1 == x4 && y1 == y4)
            cout << fixed << setprecision(3) << (x2+x3)-x1 << " " << (y2+y3)-y1 << endl;
        else if(x2 == x3 && y2 == y3)
            cout << fixed << setprecision(3) << (x1+x4)-x2 << " " << (y1+y4)-y2 << endl;
        else
            cout << fixed << setprecision(3) << (x1+x3)-x2 << " " << (y1+y3)-y2 << endl;
    }
    return 0;
}