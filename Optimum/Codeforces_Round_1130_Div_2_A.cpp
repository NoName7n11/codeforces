#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[105], pos[105];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            pos[a[i]] = i;
        }

        int p = n - k + 1;
        bool seen[105] = {false};
        int mx = 1;
        for(int i = 1; i <= p; i++){
            seen[a[i]] = true;
            if(a[i] > a[mx]) mx = i;
        }

        int m = 0;
        while(seen[m]) m++;

        if(m == p) cout << -1 << endl;
        else cout << mx << " " << pos[m] << endl;
    }
}
