#include <bits/stdc++.h>
using namespace std;

// if array already sorted
//     print 0
// else if a[n-2] > a[n-1] OR a[n-1] < 0
//     print -1
// else
//     print n-2
//     for i = 1..n-2
//         print i n-1 n

int main (){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }


        if(arr[n-2] > arr[n-1]){
            cout << -1 << endl;
            continue;
        } else if(arr[n-1] >= 0){
            cout << n-2 << endl;
            for(int i = 1; i <= n-2; i++){
                cout << i << " " << n-1 << " " << n << endl;
            }
        } else {
            if(is_sorted(arr.begin(), arr.end())){
                cout << 0 << endl;
            } else {
                cout << -1 << endl;
            }
        }

        

        

        

    }
    return 0;
}