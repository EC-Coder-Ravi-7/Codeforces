#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    bool check(string &s){
        int y = 0;
        for(auto &x : s){
            if(x == 'Y') y++;
        }
        return y <= 1;
    }
};


int main () {
    int t;
    cin >> t;
    Solution obj;
    while(t--){
        string s;
        cin >> s;

        if(obj.check(s)){
            cout << "YES\n";
        } else {
            cout <<"NO\n";
        }
    }
    return 0;
}