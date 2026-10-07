#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> cls(n + 1);
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            cls[x] = i % 2;
        }

        bool can[2] = {false, false};
        can[cls[n]] = true;
        int len = 1;

        for(int v = n - 1; v >= 1; v--){
            int c = cls[v];
            bool nxt[2] = {false, false};
            for(int pl = 0; pl < 2; pl++){
                if(!can[pl]) continue;
                int pr = pl ^ ((len - 1) & 1);
                if((pl ^ 1) == c) nxt[c] = true;
                if((pr ^ 1) == c) nxt[pl] = true;
            }
            can[0] = nxt[0];
            can[1] = nxt[1];
            len++;
        }

        cout << (can[0] ? "YES" : "NO") << "\n";
    }
}
