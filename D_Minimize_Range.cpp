#include <bits/stdc++.h>
using namespace std;

int main (){
    long long n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<long long> rem(n);

    for(int i=0; i<n; i++){
        rem[i] = arr[i] % k;
    }
    long long maxGap = LLONG_MIN;
    sort(rem.begin(), rem.end());

    for(int i=0; i<n-1; i++){
        if(abs(rem[i+1] - rem[i]) >= maxGap){
            maxGap = abs(rem[i] - rem[i+1]);
        }
    }
    if((rem[0] + k) - rem[n-1] >= maxGap){
        maxGap = (rem[0] + k) - rem[n-1];
    }
    cout << k - maxGap << endl;
}