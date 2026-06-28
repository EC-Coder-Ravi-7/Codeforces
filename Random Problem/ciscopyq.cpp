// Problem Statement
// You are given:
// An integer array arr
// Three integers x, y, and z

// These represent the maximum number of non-overlapping subarrays you may choose:
// x = maximum subarrays of length 1
// y = maximum subarrays of length 2
// z = maximum subarrays of length 3

// Your task is to choose:
// at most x subarrays of size 1
// at most y subarrays of size 2
// at most z subarrays of size 3

// such that:
// No two chosen subarrays overlap.
// The total sum of all selected elements is maximized.
// Return the maximum possible sum.
// Input Format
// t
// For each testcase:
// n
// arr[0] arr[1] ... arr[n-1]
// x y z


#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int n1;
    vector<vector<vector<vector<long long>>>> memo;
    vector<int> arr1;

    long long solveDP(int i, int a, int b, int c, int x, int y, int z){
        if(i >= n1) return 0;

        if(memo[i][a][b][c] != -1) return memo[i][a][b][c];

        long long ans = solveDP(i+1, a, b, c, x, y, z);

        if(a < x){
            ans = max(ans, arr1[i] + solveDP(i+1, a+1, b, c, x, y, z));
        }
        if(b < y && i + 1 < n1){
            ans = max(ans, arr1[i] + arr1[i + 1] + solveDP(i + 2, a, b + 1, c, x, y, z));
        }
        if(c < z && i + 2 < n1){
            ans = max(ans, arr1[i] + arr1[i + 1] + arr1[i + 2] + solveDP(i + 3, a, b, c + 1, x, y, z));
        }
        return memo[i][a][b][c] = ans;
    }

    long long solve(vector<int>& arr, int n, int x, int y, int z){
        arr1 = arr, n1 = n;
        memo.assign(n, vector<vector<vector<long long>>>(x + 1, 
                       vector<vector<long long>>(y + 1, 
                       vector<long long>(z + 1, -1))));

        return solveDP(0, 0, 0, 0, x, y, z);
    }
};

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution obj;
    int t;
    cin >> t;
    while(t--){
        int n, x, y, z;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        cin >> x >> y >> z;
        long long ans = obj.solve(arr, n, x, y, z);
        cout << ans << "\n";
    }
    return 0;
}