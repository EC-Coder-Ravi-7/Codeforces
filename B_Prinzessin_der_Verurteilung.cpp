#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> st1;
        set<string> st2, st3;

        for(int i=0; i<n; i++){
            st1.insert(s[i]);
        }

        for(int i=0; i<n-1; i++){
            string temp = "";
            temp += s[i];
            temp += s[i+1];
            st2.insert(temp);
        }

        for(int i=0; i<n-2; i++){
            string temp = "";
            temp += s[i];
            temp += s[i+1];
            temp += s[i+2];
            st3.insert(temp);
        }

        bool found = false;
        for(char c='a'; c<='z'; c++){
            if(st1.find(c) == st1.end()){
                cout << c << endl;
                found = true;
                break;
            }
        }
        if(found){
            continue;
        }

        for(char c1='a'; c1<='z'; c1++){
            for(char c2='a'; c2<='z'; c2++){
                string temp = "";
                temp += c1;
                temp += c2;

                if(st2.find(temp) == st2.end()){
                    cout << temp << endl;
                    found = true;
                    break;
                }
            }
            if(found){
                break;
            }
        }
        if(found){
            continue;
        }

        for(char c1='a'; c1<='z'; c1++){
            for(char c2='a'; c2<='z'; c2++){
                for(char c3='a'; c3<='z'; c3++){
                    string temp = "";
                    temp += c1;
                    temp += c2;
                    temp += c3;

                    if(st3.find(temp) == st3.end()){
                        cout << temp << endl;
                        found = true;
                        break;
                    }
                }
                if(found){
                    break;
                }
            }
            if(found){
                break;
            }
        }
        if(found){
            continue;
        }

    }

    return 0;
}