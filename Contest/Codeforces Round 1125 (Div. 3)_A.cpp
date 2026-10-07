#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x0,y0,R;
        cin >> x0 >> y0 >> R;

        for(int x = x0-R; x <= x0+R; ++x){
            for(int y = y0-R; y <= y0+R; ++y){
                int dx = x0-x, dy = y0-y;
                if(dx*dx + dy*dy == R*R){
                    cout << x << " " << y << "\n";
                    goto found;
                }
            }
        }
        found:;
    }
}