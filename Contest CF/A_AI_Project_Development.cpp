#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, x, y, z;
        cin >> n >> x >> y >> z;
        
        int wa = (n + (x+y) - 1) / (x+y);
        int write = z * x;
        int remain = n - write;
        int speed = x + 10*y;
        int extra = (remain + speed - 1) / speed;
        int wai = z + extra;

        cout << min(wai, wa)<< "\n";
    }
    return 0;
}