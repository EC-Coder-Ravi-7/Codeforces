#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    string solve(string &s, int n){

        int count0 = 0;
        for(auto &x : s){
            if(x == '0'){
                count0++;
            }
        }
        if(count0 % 2 == 0 || count0 == 1){
            return "BOB";
        } else {
            return "ALICE";
        }
    }
};

int main (){
    int t;
    cin >> t;
    Solution obj;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        cout << obj.solve(s, n) << endl;

    }
    return 0;
}