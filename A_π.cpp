#include <bits/stdc++.h>
using namespace std;

int main (){
    double d;
    cin >> d;

    double pi = acos(-1);
    double area = pi* d * d / 4;

    cout << fixed << setprecision(15) << area;


    return 0;
}