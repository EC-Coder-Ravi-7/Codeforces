#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        vector<long long> st;
        st.reserve(n);

        for (int i = n - 1; i >= 0; i--) {
            st.push_back(arr[i]);
            
            while (st.size() >= 2) {
                long long top1 = st.back();              
                long long top2 = st[st.size() - 2]; 
                
                if (top2 == top1 + 1) {
                    st.pop_back();
                    st.back() = top1;
                } else {
                    break;
                }
            }
        }
        cout << st.size() << endl;
    }
    return 0;
}