#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long solve(vector<long long>& arrA, vector<long long>& arrB, long long n, long long m){ 
        long long odd = 0;
        long long even = 0;
        
        for(auto &b : arrB){
            if(b % 2 != 0){
                odd++;
            } else {
                even++;
            }
        }
        
        vector<long long> O, E;
        long long totalS = 0;
        
        for(long long i = 0; i < n; i++){
            totalS += arrA[i];
            if((i + 1) % 2 != 0){
                O.push_back(arrA[i]);
            } else {
                E.push_back(arrA[i]);
            }
        }
        
        sort(O.rbegin(), O.rend());
        sort(E.rbegin(), E.rend());
        
        long long mSum = 0;
        
        if(odd > 0 && !O.empty()){
            mSum += O[0];
            long long limit = min((long long)O.size(), odd);
            for(long long i = 1; i < limit; i++){
                if(O[i] > 0){
                    mSum += O[i];
                }
            }
        }
        
        if(even > 0 && !E.empty()){
            mSum += E[0];
            long long limit = min((long long)E.size(), even);
            for(long long i = 1; i < limit; i++){
                if(E[i] > 0){
                    mSum += E[i];
                }
            }
        }
        
        return totalS - mSum;
    }
};

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    Solution obj;
    while(t--){
        long long n, m;
        cin >> n >> m;
        vector<long long> arr(n), arrx(m);
        for(long long i=0; i<n; i++){
            cin >> arr[i];
        }
        for(long long i=0; i<m; i++){
            cin >> arrx[i];
        }
        cout << obj.solve(arr, arrx, n, m) << "\n";
    }
    return 0;
}