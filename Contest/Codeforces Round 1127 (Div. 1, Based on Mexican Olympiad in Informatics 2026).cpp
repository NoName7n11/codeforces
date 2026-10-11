// 12-10-2026

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, p = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i <n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                p = p + a[i];
            }
            else{
                p = p - a[i];
            }
        }
        cout << p << endl;
    }
}