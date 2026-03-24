#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    long long solve(vector<long long>& arr, long long n, long long target){
        // long long sum = accumulate(arr.begin(), arr.end(), 0);

        // if(sum < target){
        //     return -1;
        // }
        // if(sum == target){
        //     return 0;
        // }
        // long long count = 0;

        
        // while(sum != target){
        //     if(arr[i] == 1){
        //         count++;
        //         sum--;
        //         i++;
        //     } else if(arr[j] == 1){
        //         count++;
        //         sum--;
        //         j--;
        //     } else if(arr[i] == 0 && arr[j] == 0){
            //         i++;
        //         j--;
        //         count++;
        //     } else if(arr[i] == 0 && arr[j] != 0){
            //         sum--;
        //         j--;
        //         count++;
        //     } else if(arr[i] == 1 && arr[j] != 1){
            //         sum--;
            //         i++;
            //         count++;
            //     }
            // }
            // return count;

        long long i=0, j = 0;

        long long currS = 0;
        long long maxL = -1;
        while(j < n){
            currS += arr[j];

            while(currS > target){
                currS -= arr[i];
                i++;
            }

            if(currS == target){
                maxL = max(maxL, j - i + 1);
            }
            j++;
        }
        return maxL == -1 ? -1 : n - maxL;
    }
};

int main (){
    int t;
    cin >> t;
    while(t--){
        long long n, s;
        cin >> n >> s;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        Solution obj;

        cout << obj.solve(arr, n, s) << endl;

    }
    return 0;
}