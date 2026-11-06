#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> p(n);
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            p[i] = 1LL << a;
    }
    sort(p.rbegin(), p.rend());
    long long sum1 = 0;
    long long sum2 = 0;
    
    for (long long x : p) {
        if (sum1 < sum2) {
            sum1 += x;
        } else {
            sum2 += x;
        }
    }
    cout << sum1 * sum2 << endl;
    }
}