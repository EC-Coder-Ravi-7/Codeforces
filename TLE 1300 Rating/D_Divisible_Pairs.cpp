#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    long long Divisible(vector<long long>& arr, long long n, long long x, long long y){
        long long ans = 0;

        // for(int i=0; i<n; i++){                                                          <------|
        //     for(int j=0; j<n; j++){                                                             |
        //         if(i < j && (arr[i] + arr[j])% x == 0 &&  (arr[i] - arr[j]) % y == 0) {         |
        //             ans++;                                                                      |~~~~~~Brute Force(TLE)
        //         }                                                                               |
        //     }                                                                                   |
        // }                                                                                <------|

        map<pair<long long, long long>, long long> mp;
        for(int i=0; i<n; i++){
            long long r1 = arr[i] % x;
            long long r2 = arr[i] % y;
            pair<long long, long long> need = {(x - r1)%x, r2};
            
            ans += mp[need];
            mp[{r1, r2}]++;
        }

        return ans;
    }
};

int main () {
    int t;
    cin >> t;
    Solution obj;
    while(t--){
        long long n, x, y;
        cin >> n >> x >> y;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        cout << obj.Divisible(arr, n, x, y) << "\n";
    }
    return 0;
}