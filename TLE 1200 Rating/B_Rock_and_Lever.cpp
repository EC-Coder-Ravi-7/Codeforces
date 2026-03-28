#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    long long solve(vector<long long>& arr, long long n){
        long long ans = 0;

        // for(int i=0; i<n; i++){                                   < ------|
        //     for(int j=0; j<n; j++){                                       |
        //         if(i < j && (arr[i] & arr[j]) >= (arr[i] ^ arr[j])){      |
        //             ans++;                                                |~~~~~~~~~~(Brute force) -----(TLE)!
        //         }                                                         |
        //     }                                                             |
        // }                                                         <-------|
                                        
        unordered_map<long long, long long> mp;
        for(int i=0; i<n; i++){
            long long val = 31 - __builtin_clz(arr[i]);
            mp[val]++;
        }
        for(auto &x : mp){
            ans += (x.second * (x.second - 1)) / 2;
        }
        return ans;
    }
};

int main () {
    int t;
    cin >> t;
    Solution obj;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        cout << obj.solve(arr, n) << '\n';
    }
    return 0;
}