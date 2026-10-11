#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a[n], m, s = 0;
        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            s = s + a[i];
        }

        for(int i = 1; i < n; i++){
            m = max({a[i] - s, a[i], a[i] + s});
        }
        cout << m;
    }
}