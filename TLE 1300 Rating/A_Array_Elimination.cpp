#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    vector<long long> solve(vector<long long>& arr, long long n){
        vector<long long> ans;
        vector<long long> bitCount(30, 0);
        for(int j=0; j<n; j++){
            for(int i=0; i<30; i++){
                if((arr[j] >> i) & 1)
                    bitCount[i]++;
            }
        }
        long long g = 0;
        for(auto &co : bitCount){
            g = __gcd(g, co);
        }
        for(int i=1; i*i<=g; i++){
            if(g%i == 0){
                ans.push_back(i);

                if(i != g/i)
                    ans.push_back(g/i);
            }
        }
        
        sort(ans.begin(), ans.end());
        if(g == 0){
            for(int i=1; i<=n; i++){
                ans.push_back(i);
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
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        vector<long long> ans = obj.solve(arr, n);

        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout <<"\n";
    }
    return 0;
}