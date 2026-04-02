#include <bits/stdc++.h>
using namespace std;

void getPrime(long long p, unordered_map<long long, long long>& mp){
    while(p%2 == 0){
        mp[2]++;
        p/=2;
    }
    for(long long i=3; i*i<=p; i+=2){
        while(p%i == 0){
            mp[i]++;
            p/=i;
        }
    }
    if(p > 1){
        mp[p]++;
    }
}

int main () {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        unordered_map<long long, long long> mp;
        for(int i=0; i<n; i++){
            long long b;
            cin >> b;
            getPrime(b, mp);
        }
        bool flag = true;
        for(auto &m : mp){
            if(m.second % n != 0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}