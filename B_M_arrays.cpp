#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:

    long long solve(vector<long long>& arr, long long n, long long m){
        long long count = 0;
        vector<long long> rem(n);

        for(int i=0; i<n; i++){
            rem[i] = arr[i] % m;
        }
        unordered_map<long long, int> mp;
        for(auto &x : rem){
            mp[x]++;
        }
        for(int r=1; r<=(m-1)/2; r++){
            int x = mp[r];
            int y = mp[m-r];
            
            if(x == 0 && y == 0){
                continue;
            }
            else if(x == 0 && y != 0 || y == 0 && x != 0){
                count += max(x, y);
            }
            else count += 1 + max(0, abs(x - y)- 1);
        }

        if(mp[0] > 0){
                count += 1;
        }
        if(m%2 == 0 && mp[m/2] > 0){
                count+= 1;
            }


        return count;
    }
};

int main () {
    int t;
    cin >> t;
    Solution* obj = new Solution();
    while(t--){
        long long n, m;
        cin >> n >> m;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        cout << obj->solve(arr, n, m) << endl;
    }
    return 0;
}