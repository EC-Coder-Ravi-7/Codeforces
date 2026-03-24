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

        
        vector<long long> ans(n);

        for(int i=0; i<n; i++){
            long long greater = 0;
            long long smaller = 0;
            for(int j=i+1; j<n; j++){
                if(arr[j] > arr[i]){
                    greater++;
                }
                
                if(arr[j] < arr[i]){
                    smaller++;
                }
            }
            ans[i] = max(greater, smaller);
        }

        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;

    }
    return 0;
}