#include <bits/stdc++.h>
using namespace std;

int main (){

    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> ones;

        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                ones.push_back(i);
            }
        }

        if(ones.empty()){
            cout << 0 << " " << 0 << "\n";
            continue;
        }

        long long maxO = 0;
        long long minO = 0;

        long long first = ones[0];
        long long last = ones[0];

        for(int i = 1; i < ones.size(); i++){
            if(ones[i] - last > 2){
                long long len = last - first + 1;
                maxO += len;
                minO += (len / 2) + 1;
                first = ones[i];
            }
            last = ones[i];
        }

        long long len = last - first + 1;
        maxO += len;
        minO += (len / 2) + 1;

        cout << minO << " " << maxO << "\n";
    }

return 0;

}
