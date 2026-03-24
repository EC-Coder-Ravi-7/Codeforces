#include <bits/stdc++.h>
using namespace std;
int mod = 1e9+7;

long long power(long long base, long long exp){
    long long ans = 1;
    base%=mod;
    while(exp > 0){
        if(exp%2 == 1){
            ans = (ans * base) % mod;
        }
        base = (base * base) % mod;
        exp/=2;
    }
    return ans;
}

int main (){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        cout << power(n, k) % mod << endl;
    }
    return 0;
}