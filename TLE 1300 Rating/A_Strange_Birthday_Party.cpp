#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    long long solve(vector<long long>& k, vector<long long>& c, long long n, long long m){
        sort(k.begin(), k.end());
        long long ans = 0;
        long long p = 0;
        for(int i=n-1; i>=0; i--){
            if(p < m && c[p] <= c[k[i]-1]){
                ans += c[p];
                p++;
            } else {
                ans += c[k[i]-1];
            }
        }

        return ans;
    }
};


int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    Solution obj;
    while(t--){
        long long n, m;
        cin >> n >> m;
        vector<long long> k(n), c(m);
        for(int i=0; i<n; i++){
            cin >> k[i];
        }
        for(int i=0; i<m; i++){
            cin >> c[i];
        }
        cout << obj.solve(k, c, n, m) << "\n";
    }
    return 0;
}