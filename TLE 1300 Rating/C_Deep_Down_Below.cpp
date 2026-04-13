#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    long long DeepDown(vector<vector<long long>>& caves){
        // {req_pow, size_of_cave}
        vector<pair<long long, long long>> v;
        long long ans = 0;
        long long currG = 0;

        for(auto &k : caves){
            long long reqPower = 0;
            for(long long j=0; j<k.size(); j++){
                reqPower = max(reqPower, k[j] - j + 1LL);
            }
            v.push_back({reqPower, k.size()});
        }
        sort(v.begin(), v.end());

        for(auto &it : v){
            long long req = it.first;
            long long sz = it.second;
            ans = max(ans, req - currG);
            currG += sz;
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
        vector<vector<long long>> caves; 
        while(n--){
            int k;
            cin >> k;
            vector<long long> monsters(k);
            for(int i=0; i<k; i++){
                cin >> monsters[i];
            }
            caves.push_back(monsters);
        }
        cout << obj.DeepDown(caves) << "\n";
    }
    return 0;
}