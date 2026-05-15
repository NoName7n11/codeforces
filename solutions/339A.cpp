#include <bits/stdc++.h>
using namespace std;

int main(){
    int j=0;
    string s;
    cin >> s;
    vector<int> x = {};

    for(int i=0; i < s.length(); i+=2){
        x.push_back(s[i]);
        j++;
    }

    for(int i=0; i < x.size(); i++){
        if(x[i] > x[i+1]){
            int c = x[i];
            x[i] == x[i+1];
            x[i+1] == c;
        }
    }

    for(int i=0; i < x.size(); i++){
        cout << x[i] << "+";
    }
    return 0;
}