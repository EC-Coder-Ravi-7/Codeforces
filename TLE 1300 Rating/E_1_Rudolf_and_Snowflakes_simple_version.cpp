#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    bool solve(long long n){
        for(int k=2; k<=1000; k++){
            long long sum = 1;
            long long curr = 1;
            int terms = 1;

            while(sum < n){
                if(curr > n / k) break;
                curr *= k;
                sum += curr;
                terms++;
            }

            if(sum == n && terms >= 3) return true;
        }
        return false;
    }
};

int main () {
    int t;
    cin >> t;
    Solution obj;
    while(t--){
        long long n;
        cin >> n;

        if(obj.solve(n)){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}