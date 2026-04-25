#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int p;
        cin >> p;
        int cL = 0;
        for(int i = 0; i < p - 1; i++) {
            if(a[i] != a[i+1]) {
                cL++;
            }
        }
        
        int cR = 0;
        for(int i = p - 1; i < n - 1; i++) {
            if(a[i] != a[i+1]) {
                cR++;
            }
        }
        
        int ans = max(cL, cR);
        if(ans % 2 != 0) {
            ans++;
        }
        
        cout << ans << "\n";
    }
    return 0;
}