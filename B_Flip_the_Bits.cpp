#include <bits/stdc++.h>
using namespace std;

bool check(string a, string b, long long n, vector<bool>& canflip){
    int flip = 0;
    for(int i=n-1; i>=0; i--){
        char current = a[i];
        if(flip == 1){
            if(current == '0'){
                current = '1';
            } else {
                current = '0';
            }
        }
        if(current == b[i]){
            continue;
        } else {
            if(canflip[i] == false){
                return false;
            } else {
                flip = 1 - flip;
            }
        }
    }
    return true;
}

int main (){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;

        vector<bool> canflip(n);
        int count0 = 0, count1 = 0;
        for(int i=0; i<n; i++){
            if(a[i] == '0'){
                count0++;
            } else {
                count1++;
            }
            if(count0 == count1){
                canflip[i] = true;
            } else {
                canflip[i] = false;
            }
        }

        if(check(a, b, n, canflip)){
             cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}