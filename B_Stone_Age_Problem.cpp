#include <bits/stdc++.h>
using namespace std;

int main (){
    long long n, q;
    cin >> n >> q;
    
    vector<long long> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    long long sum = accumulate(arr.begin(), arr.end(), 0LL);

    long long lastSetValue = 0;
    bool isGlobalSet = false;
    vector<bool> updated(n, false);
    
    while(q--){
        long long t;
        cin >> t;

        if(t == 1){
            long long i, x;
            cin >> i >> x;
            i--; // convert to 0-based index

            long long oldValue;
            if (isGlobalSet && !updated[i]) {
                oldValue = lastSetValue;
            } else {
                oldValue = arr[i];
            }

            sum = sum - oldValue + x;
            arr[i] = x;
            updated[i] = true;

            cout << sum << endl;

        } else if(t==2){
            long long x;
            cin >> x;

            lastSetValue = x;
            sum = n * x;
            isGlobalSet = true;
            fill(updated.begin(), updated.end(), false);

            cout << sum << endl;
        }

    }
    return 0;
}