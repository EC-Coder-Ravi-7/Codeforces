#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> arr(n+1), b(n+1);
        for(int i=1; i<=n; i++){
            cin >> arr[i];
        }
        b[n] = -1;
        for(int i=n-1; i>=1; i--){
            if(arr[i] == arr[i+1]){
                b[i] = b[i+1];
            } else {
                b[i] = i+1;
            }
        }
        
        long long q;
        cin >> q;
        while(q--){
            long long l, r;
            cin >> l >> r;
            if(b[l] == -1){
                cout << -1 << " " << -1 << "\n";
            } else if(b[l] > r) {
                cout << -1 << " " << -1 << "\n";
            } else {
                cout << l << " " << b[l] << "\n";
            }
        }
        cout << endl;
    }
    return 0;
}