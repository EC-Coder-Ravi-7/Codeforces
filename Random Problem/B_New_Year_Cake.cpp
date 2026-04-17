#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int solve(int a, int b){
        int count = 0;
        int size = 1;
        bool color = true;

        while(true){
            if(color){
                if(a >= size){
                    a-= size;
                } else {
                    break;
                }
            } else {
                if(b >= size){
                    b-=size;
                } else {
                    break;
                }
            }
            count++;
            size *= 2;
            color = !color;
        }

        return count;
    }
};

int main () {
    int t;
    cin >> t;
    Solution obj;
    while(t--){
        int a, b;
        cin >> a >> b;
        int ans1 = obj.solve(a, b) ;
        int ans2 = obj.solve(b, a) ;
        cout <<max(ans1, ans2) << "\n";

    }
    return 0;
}