// A. Maximize One MEX
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int f[n], a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<bool> v(n+1, false);
        int cmex = 0;

        for(int i = 0; i < n; i++){
            int ele = a[i];
            if(ele <= n){
                v[ele] = true;
            }
            while(ele <= n && v[ele]){
                cmex++;
            }
            f[i] = cmex;
        }       
    }
}