#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    long long solve(vector<long long>& arr, long long n, long long m){
        sort(arr.rbegin(), arr.rend());
        long long ans = 0;
        for(int i=0; i<n; i++){
            ans += (arr[i] * m);
            m--;
            if(m == 0) break;
        }
        return ans;
    }
};

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    Solution obj;
    while(t--){
        long long n, m;
        cin >> n >> m;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        
        cout << obj.solve(arr, n, m) << "\n";
    }
    return 0;
}