#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    long long solve(vector<string>& grid, long long n){
        long long ans = 0;

        for(int i=0; i<=(n-1)/2; i++){
            for(int j=0; j<n/2; j++){
                long long ones = 0;

                ones += grid[i][j] - '0';
                ones += grid[j][n-1-i] - '0';
                ones += grid[n-1-i][n-1-j] - '0';
                ones += grid[n-1-j][i] - '0';

                ans += min(ones, 4 - ones);
            }
        }
        return ans;
    }
};

int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<string> grid(n, string(n, '0'));

        for(int i=0; i<n; i++){
            cin >> grid[i];
            
        }
        Solution obj;
        cout << obj.solve(grid, n) << endl;
    }
    return 0;
}