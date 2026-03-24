#include <bits/stdc++.h>
using namespace std;

int main (){
    int h, w, q;
    cin >> h >> w >> q;

    int row = h;
    int col = w;

    while(q--){
        int type;
        cin >> type;

        if(type == 1){
            int r;
            cin >> r;

            cout << r * col << endl;
            row -= r;
        } else {
            int c;
            cin >> c;

            cout << c * row << endl;
            col -= c;
        }
    }
    return 0;
}