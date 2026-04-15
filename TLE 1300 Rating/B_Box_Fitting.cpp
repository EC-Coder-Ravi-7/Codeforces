#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--){
        long long n, W;
        cin >> n >> W;
        vector<long long> w(n);
        multiset<long long> st;
        for(int i=0; i<n; i++){
            cin >> w[i];
            st.insert(w[i]);
        }
        long long rem = W;
        long long count = 1;
        while(!st.empty()){
            auto it = st.upper_bound(rem);
            if(it == st.begin()){
                rem = W;
                count++;
            } else {
                it--;
                long long val = *it;
                rem -= val;
                st.erase(it);
            }
        }
        cout << count << "\n";
    }
    return 0;
}