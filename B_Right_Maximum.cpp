#include <bits/stdc++.h>
using namespace std;

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

        long long maxE = LLONG_MIN;
        int ops = 0;

        for(int i=0; i<n; i++){
            if(arr[i] >= maxE){
                ops++;
                maxE = arr[i];
            }
        }

        cout << ops << endl;
    }
    return 0;
}