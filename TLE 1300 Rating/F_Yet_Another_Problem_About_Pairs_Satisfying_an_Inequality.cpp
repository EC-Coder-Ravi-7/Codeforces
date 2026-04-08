#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    long long solve(vector<long long>& arr, long long n){
        vector<long long> pref(n+1, 0);
        for(int i=1; i<=n; i++){
            pref[i] = pref[i-1] + (arr[i] < i);
        }
        long long ans = 0;
        for(int i=1; i<=n; i++){
            if(arr[i] < i){
                if(arr[i] != 0){
                    ans += pref[arr[i]-1];
                }
            }
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
        vector<long long> arr(n+1);
        for(int i=1; i<=n; i++){
            cin >> arr[i];
        }
        

        cout << obj.solve(arr, n) << "\n";
    }
    return 0;
}
