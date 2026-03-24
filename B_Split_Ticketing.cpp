#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    vector<vector<int>> C(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            cin >> C[i][j];
        }
    }
    bool flag = false;

    for(int a=0; a<n; a++){
        for(int b=a+1; b<n; b++){
            for(int c=b+1; c<n; c++){
                if(C[a][b] + C[b][c] < C[a][c]){
                    flag = true;
                    break;
                }
            }
        }
    }
    if(flag){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}