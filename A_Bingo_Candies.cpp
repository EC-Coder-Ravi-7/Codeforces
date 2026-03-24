#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<vector<int>> arr(n, vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> arr[i][j];
            }
        }
        
        unordered_map<int,int> freq;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                freq[arr[i][j]]++;
            }
        }

        bool ok = true;

        for(auto &x : freq){
            if(x.second > n*(n-1)){
                ok = false;
                break;
            }
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
            
    }
    return 0;
}