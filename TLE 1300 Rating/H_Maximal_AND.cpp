#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        long long ans = 0;
        for(int bit=30; bit>=0; bit--){
            int need = 0;
            for(int i=0; i<n; i++){
                if(((arr[i] >> bit) & 1) == 0){
                    need++;
                }
            }
            if(need <= k){
                k-=need;
                ans |= (1LL << bit);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}   