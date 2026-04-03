#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    vector<long long> solve(vector<long long>& arrA, vector<long long>& arrB, long long n){
        vector<long long> val(n), maxIdx;
        for(int i=0; i<n; i++){
            val[i] = arrA[i] - arrB[i];
        }

        long long maxE = LLONG_MIN;

        for(int i=0; i<n; i++){
            if(val[i] > maxE){
                maxE = val[i];
            }
        }
        for(int i=0; i<n; i++){
            if(val[i] == maxE){
                maxIdx.push_back(i+1);
            }
        }
        return maxIdx;
    }
};

int main () {
    int t;
    cin >> t;
    Solution obj;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> arrA(n), arrB(n);
        for(int i=0; i<n; i++){
            cin >> arrA[i];
        }
        for(int i=0; i<n; i++){
            cin >> arrB[i];
        }

        vector<long long> ans = obj.solve(arrA, arrB, n);
        cout << ans.size() << "\n";
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}