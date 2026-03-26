#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;


        long long a = n - (k-1) % n;
        long long b = (k-1) % n + 1;
        long long ans, skip;
        if(n%2 == 0){
            ans = b;
        } else {
            skip = (k-1) / (n / 2);
            ans = ((k-1 + skip) % n) + 1;
        }

        cout << ans << '\n';

    }
    return 0;
}