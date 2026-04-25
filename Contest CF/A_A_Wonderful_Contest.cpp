#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool solve(vector<int>& arr, int n){ 
        for(auto &x : arr){
            if(x == 100){
                return true;
            }
        }
        return false;
    }
};

int main () {
    int t;
    cin >> t;
    Solution obj;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        if(obj.solve(arr, n)){
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}