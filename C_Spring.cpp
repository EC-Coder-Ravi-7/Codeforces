#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        long long a, b, c, m;
        cin >> a >> b >> c >> m;

        long long alice = 0, bob = 0, carol = 0;

        // lcm(a,b) = (a / gcd(a,b)) * b

        long long l1 = (a/ __gcd(a, b)) * b;
        long long alc = (a/ __gcd(a, c)) * c;
        long long lbc = (b/ __gcd(b, c)) * c;
        long long labc = (l1/ __gcd(l1, c)) * c;

        long long A = m / a;
        long long B = m / b;
        long long C = m / c;
        long long AB = m / l1;
        long long AC = m / alc;
        long long BC = m / lbc;
        long long ABC = m / labc;

        long long onlyA = A - AB - AC + ABC;
        long long onlyB = B - AB - BC + ABC;
        long long onlyC = C - AC - BC + ABC;

        long long AB_only = AB - ABC;
        long long AC_only = AC - ABC;
        long long BC_only = BC - ABC;

        alice = onlyA * 6 + AB_only * 3+ AC_only * 3 + ABC * 2;
        bob = onlyB * 6 + AB_only * 3 + BC_only * 3 + ABC * 2;
        carol = onlyC * 6 + AC_only * 3 + BC_only * 3 + ABC * 2;

        cout << alice  << " " << bob << " " << carol << endl;

    }
    return 0;
}