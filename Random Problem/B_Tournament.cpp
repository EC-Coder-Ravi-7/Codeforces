#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool solve(vector<int>& arr, int n, int j, int k){
        int count = 0;
       if(k > 1) return true;
       else {
         for(auto &x : arr){
            if(x > arr[j-1]){
                count++;
            }
        }
       }
        return count < k;
    }
};

int main () {
    int t;
    cin >> t;
    Solution obj;
    while(t--){
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        if(obj.solve(arr, n, j, k)){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}