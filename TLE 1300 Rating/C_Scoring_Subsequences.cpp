#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    vector<int> Scoringsequence(vector<int>& arr, int n){
        vector<int> ans;
        priority_queue<int> p;

        for(int i=0; i<n; i++){
            p.push(-1 * arr[i]);

            while(p.size() > (-1 * p.top())){
                p.pop();
            }
            int t1 = p.size();
            ans.push_back(max(1, t1));
        }
        return ans;
    }
};

int main () {
    int t;
    cin >> t;
    Solution obj;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        vector<int> ans = obj.Scoringsequence(arr, n);
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}