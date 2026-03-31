#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        map<long long, long long> mp;
        mp[0] = 1;
        long long sum = 0, ans = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(i%2 != 0){
                arr[i] = -arr[i];
            }
            sum += arr[i];
            mp[sum]++;
            if(mp[sum] >= 2) {
                ans = 1;
            }
        }
        if(ans == 1){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        
    }
    return 0;
}