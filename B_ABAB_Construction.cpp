#include <bits/stdc++.h>
using namespace std;

bool check(string &s, long long n){
    int l=0;
    if(n%2 != 0){
        if(s[0] == 'b') return false;

        l = 1;
    }

    for(int i=l; i<n; i+=2){
        if(s[i] == 'a' && s[i+1] == 'a'){
            return false;
        }
        if(s[i] == 'b' && s[i+1] == 'b'){
            return false;
        }
    }
    return true;
}

int main (){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;

        // bool flag = true;

        // for(int i=0; i<n-1; i++){
        //     if(s[i] == s[i+1]){
        //         flag = false;
        //     }
        // }

        // if(check(s, n)){
        if(check(s, n)){
            cout << "YES" << endl;
        } else {
            cout <<"NO" << endl;
        }
    }
    return 0;
}