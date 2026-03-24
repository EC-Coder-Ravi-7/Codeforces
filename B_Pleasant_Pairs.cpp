#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        vector<int> pos(2*n+1, -1);

        for(int i=0; i<n; i++){
            pos[arr[i]] = i+1;
        }
        
        int count = 0;

        for(int i=0; i<n; i++){
            for(int k=arr[i]; k<=2*n; k+=arr[i]){
                int x = k / arr[i];
                
                int j = pos[x];
                int i1 = i+1;
                if(i1 < j && i1 + j == k){
                    count++;
                }
            }
        }

        cout << count << endl;


    }
    return 0;
}