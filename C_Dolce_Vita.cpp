#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    long long solve(vector<long long>& arr, long long n, long long x){
        long long count = 0;
        sort(arr.begin(), arr.end());

        vector<long long> pref(n+1);
        pref[0] = 0;
        for(int i=1; i<=n; i++){
            pref[i] = pref[i-1] + arr[i-1];
        }

        for(int k=1; k<=n; k++){
            if(pref[k] > x){
                break;
            } 

            long long day = (x -  pref[k]) / k+1LL;

            count += day;
            
        }


        return count;
    }
};  

int main (){
    int t;
    cin >> t;
    Solution obj;
    while(t--){
        long long n,x;
        cin >> n >> x;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        cout << obj.solve(arr, n, x) << endl;
    }
    return 0;
}