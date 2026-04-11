#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    long long ChatBan(long long k, long long x){
        long long left = 1, right = (2*k - 1);
        long long ans = (2*k - 1);
        while(left <= right){
            long long mid = left + (right - left) / 2;
            long long sum;

            if(mid <= k){
                sum = mid * (mid + 1) / 2;
            } else {
                long long first = k * (k + 1) / 2;
                long long rem = mid - k;

                long long second = rem * (2*k - rem - 1) / 2;

                sum = first + second;
            }
            if(sum >= x){
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};

int main () {
    int t;
    cin >> t;
    Solution obj;
    while(t--){
        long long k, x;
        cin >> k >> x;

        cout << obj.ChatBan(k, x) << "\n";
    }
    return 0;
}