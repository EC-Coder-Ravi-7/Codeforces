#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        set<int> win;
        for(int start=0; start <n; start++){
            vector<int> dish = arr;
            int remain = accumulate(arr.begin(), arr.end(), 0);
            int turn = start;
            while(remain > 0){
                if(dish[turn] > 0){
                    dish[turn]--;
                    remain--;
                }
                turn = (turn +1) % n;
                if(remain == 0){
                    win.insert(turn);
                }
            }
        }
        cout << win.size() << "\n";
    }
    return 0;
}