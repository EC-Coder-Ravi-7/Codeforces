#include <bits/stdc++.h>
using namespace std;

int solve(string &s, char rem){
    int count = 0;
    int l = 0, r = s.length()-1;

    while(l < r){
        if(s[l] == s[r]){
            l++;
            r--;
        } else {
            if(s[l] == rem){
                l++, count++;
            } else if(s[r] == rem){
                r--, count++;
            } else{
                return INT_MAX;
            }
        }
    }
    return count;
}

int main (){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;

        int l = 0, r = n-1;
        int count = 0;

        while(l < r){
            if(s[l] == s[r]){
                l++,r--;
            } else{
                break;
            }
        }

        if(l >= r){
            cout << 0 << endl;
            continue;
        }
        int ans1 = solve(s, s[l]);
        int ans2 = solve(s, s[r]);

        if(ans1 == INT_MAX && ans2 == INT_MAX){
            cout << -1 << endl;;
        } else {
            cout << min(ans1, ans2)<< endl;
        }
    }
    return 0;
}