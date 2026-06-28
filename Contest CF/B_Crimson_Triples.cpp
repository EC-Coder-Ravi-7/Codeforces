#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    long long solve(int n){
        long long count = 0;
        for(int a=1; a<=n; a++){
            long long mul = n/a;

            count += (mul * mul);
        }
        return count;
    }
};

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution obj;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << obj.solve(n) << "\n";
    }
    return 0;
}