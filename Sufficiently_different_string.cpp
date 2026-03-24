#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

class Solution {
    public:

    string solve(string &s, long long k){

    }
};

int main (){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    Solution obj;
    while(t--){
        string s;
        long long k;
        cin >> s >> k;

        string ans = obj.solve(s, k);
        cout << ans << endl;
    }
    return 0;
}