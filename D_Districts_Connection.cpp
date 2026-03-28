#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n+1);
        for(int i=1; i<=n; i++){
            cin >> arr[i];
        }
        vector<array<int, 2>> edges;
        int val1 = 1, val2 = -1;
        for(int i=2; i<=n; i++){
            if(arr[i] != arr[1]){
                edges.push_back({1, i});
                val2 = i;
                break;
            }
        }
        if(val2 == -1){
            cout << "No\n";
            continue;
        }
        for(int i=2; i<=n; i++){
            if(i == val2){
                continue;
            }
            if(arr[i] != arr[val1]){
                edges.push_back({val1, i});
            } else {
                edges.push_back({val2, i});

            }
        }
        cout << "Yes\n";
        for(auto &e : edges){
            cout << e[0] <<" " << e[1]<<"\n";
        }
    }
    return 0;
}