#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    long long Virus(vector<long long> &arr, long long n, long long m){
        sort(arr.begin(), arr.end());

        vector<long long> gaps;
        for(int i=1; i<m; i++){
            gaps.push_back(arr[i] - arr[i-1] - 1);
        }
        gaps.push_back(arr[0] + n - arr[m-1] - 1);
        sort(gaps.begin(), gaps.end(), greater<long long>());

        long long saved = 0, days = 0;

        for(auto &gap : gaps){
            int currG = gap - days * 2;
            if(currG > 0){
                saved++;

                currG -= 2;

                if(currG > 0){
                    saved += currG;
                }
                days += 2;
            }
        }
        return n - saved;
    }
};

int main (){
    int t;
    cin >> t;
    while(t--){
        long long n,m;
        cin >> n >> m;
        vector<long long> arr(m);
        for(int i=0; i<m; i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.Virus(arr, n, m) << endl;
    }
    return 0;
}