#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int minC = n;
        for(auto &x : arr){
            int leftC = 0;
            int rightC = 0;

            for(auto &x1 : arr){
                if(x1 < x){
                    leftC++;
                } else if (x1 > x){
                    rightC++;
                }
            }
            int cal = max(leftC, rightC);
            minC = min(minC, cal);
        }
        cout << minC << "\n";
    }
    return 0;
}