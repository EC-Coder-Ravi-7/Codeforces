#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    int solve(vector<int>&a, vector<int>&b, int n, int c){
        bool flag1 = true, flag2 = true;
        int Wcost = 0;
        for(int i=0; i<n; i++){
            if(a[i] < b[i]){
                flag1 = false;
                break;
            }
            Wcost += (a[i] - b[i]);
        }

        vector<int> x = a, y = b;

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        int cost = c;

        for(int i=0; i<n; i++){
            if(x[i] < y[i]){
                flag2 = false;
                break;
            }
            cost += (x[i] - y[i]);
        }
        if(!flag1 && !flag2) return -1;
        if(!flag1) return cost;
        if(!flag2) return Wcost;

        return min(cost, Wcost);
    }
};

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution obj;
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        cout << obj.solve(a, b, n, c) << "\n";
    }
    return 0;
}