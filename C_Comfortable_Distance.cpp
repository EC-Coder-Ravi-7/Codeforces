#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, l, r;
    cin >> n >> l >> r;
    string s;
    cin >> s;

    vector<vector<int>> pos(26);

    for(int i=0; i<n; i++){
        char c = s[i];
        int idx = c - 'a';
        pos[idx].push_back(i+1);
    }

    long long ans = 0;
    for(auto &v : pos){

        for(auto &i : v){
            int leftV = i + l;
            int rightV = i + r;

            auto leftIdx = lower_bound(v.begin(), v.end(), leftV);
            auto rightIdx = upper_bound(v.begin(), v.end(), rightV);

            int count = rightIdx - leftIdx;

            ans += count;
        }
    }
    cout << ans << endl;
}