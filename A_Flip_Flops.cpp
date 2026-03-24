#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        long long n, c, k;
        cin >> n >> c >> k;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        
        for(int i=0; i<n; i++){
            if(arr[i] > c){
                break;
            } else {
                long long x = min(k, c - arr[i]);
                arr[i] += x;
                k -= x;
                c += arr[i];
            }
        }

        cout << c << endl;

    }
    return 0;
}