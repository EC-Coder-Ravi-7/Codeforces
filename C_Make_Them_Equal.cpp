#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        bool ok = true;
        for(int i=0; i<n; i++){
            if(s[i] == c){
                continue;
            } else {
                ok = false;
            }
        }
        if(ok){
            cout << 0 << endl;
            continue;
        }

        bool found = false;
        for(int x=1; x<=n; x++){
            bool allpo = true;

            for(int i=x; i<=n; i+=x){
                if(s[i-1] != c){
                    allpo = false;
                    break;
                }
            }
            if(allpo){
                found = true;
                cout << 1 << endl;
                cout << x << endl;
                break;
            }
        }

        if(found){
            continue;
        } else {
            cout << 2 << endl;
            cout << n-1 << " " << n << endl;
        }
    }
    return 0;
}