#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        
        for(int i=1; i<=n; i++){
            arr.push_back(i);
        }
        for(int i=n; i>=1; i--){
            arr.push_back(i);
        }
        for(int i=2; i<=n; i++){
            arr.push_back(i);
        }
        arr.push_back(1);

        arr.push_back(1);
        for(int i=n; i>=2; i--){
            arr.push_back(i);
        }
        for(auto &x : arr){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}