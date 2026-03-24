#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        unordered_map<long long, long long> mp;
        
        for(int i=0; i<n; i++){
            long long val = arr[i] - (i+1);
            mp[val]++;
        }
        long long ans = 0;
        for(auto &x : mp){
            ans += (x.second * (x.second - 1)) / 2;
        }

        cout << ans << endl;
    }
    return 0;
}