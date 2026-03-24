#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;

    for(int i=n; i>=1; i--){
        cout << i;
        if(i == 1){
            break;
        } else {
            cout << ",";
        }
    }
    cout << endl;
}