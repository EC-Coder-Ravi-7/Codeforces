#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        long long x, y;
        cin >> x >> y;

        if((x-2*y)%3 == 0 && y <= x/2 && y >= -x/4){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
    return 0;
}