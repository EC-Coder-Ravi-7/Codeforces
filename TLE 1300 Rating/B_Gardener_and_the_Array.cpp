#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> arr(n);
        for(int i=0; i<n; i++){
            int k;
            cin >> k;
            arr[i].resize(k);
            for(int j=0; j<k; j++){
                cin >> arr[i][j];
            }
        }
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            for(int bit : arr[i]){
                mp[bit]++;
            }
        }

        bool ok = false;
        for(int i=0; i<n; i++){
            bool remov = true;

            for(int bit : arr[i]){
                if(mp[bit] == 1){
                    remov = false;
                    break;
                }
            }
             if (remov) {
                ok = true;
                break;
            }
        }

        if(ok){
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}