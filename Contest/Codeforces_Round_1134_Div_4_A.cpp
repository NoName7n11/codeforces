#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        
        if (b - a == 1 && c - b == 1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}