#include <bits/stdc++.h>
using namespace std;

int mod = 998244353;

int main () {
    int MAX = 200000;
    vector<long long> fact(MAX+1);
    fact[0] = 1;
    for(int i=1; i<=MAX; i++){
        fact[i] = (fact[i-1] * i) % mod;
    }

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();

        int count = 1;
        vector<int> group;

        for(int i=1; i<n; i++){
            if(s[i] == s[i-1]){
                count++;
            } else {
                group.push_back(count);
                count = 1;
            }
        }
        group.push_back(count);

        long long deletions = 0;
        for(auto &k : group){
            deletions += (k - 1);
        }
        
        long long ways = 1;
        for(auto k : group){
            ways = (ways * k) % mod;
        }
        ways = (ways * fact[deletions]) % mod;

        cout << deletions << " " << ways << "\n";
    }
    return 0;
}