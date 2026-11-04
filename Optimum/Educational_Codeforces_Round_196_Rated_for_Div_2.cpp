#include <bits/stdc++.h>
using namespace std;

int main(){
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        
        int total_elements = (r - l) + 1;
        if (l > 0 || r < 0) {
            cout << total_elements - 1 << "\n";
        } 
        else {
            int L = abs(l);
            int R = r;
            int max_pairs = min(L, R);
            
            int max_kept;
            if (L == R) {
                max_kept = 2 * max_pairs + 1; 
            } else {
                max_kept = 2 * max_pairs + 2; 
            }
            cout << total_elements - max_kept << "\n";
        }
    }
    return 0;
}