#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    long long solve(vector<long long> arr, long long n, long long k, long long x){

        sort(arr.begin(), arr.end());
        vector<long long> gaps;

        for(int i=1; i<n; i++){
            if(arr[i] - arr[i-1] > x){
                long long gap = arr[i] - arr[i-1];
                long long needed = (gap - 1) / x;
                gaps.push_back(needed);
            }
        }
        long long groups = gaps.size() + 1;
        sort(gaps.begin(), gaps.end());

        for(auto &g : gaps){
            if(k >= g){
                k -= g;
                groups--;
            } else {
                break;
            }
        }
        return groups;
    }
};

int main (){
    long  long n, k, x;
    cin >> n >> k >> x;
    vector<long long> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    Solution obj;

    cout << obj.solve(arr, n, k, x) << endl;

    return 0;
}