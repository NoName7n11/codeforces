#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        long long l, c;
        cin >> n >> l;
        long long arr[n];
        long long pref[n]; 
        vector<long long> sol;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr, arr + n, greater<long long>());
        long long y = arr[0]; 

        pref[0] = arr[0];
        for(int i = 1; i < n; i++){
            pref[i] = pref[i-1] + arr[i];
        }

        long long limit = sqrt(l-1);
        int p = n - 1; 

        for(long long i = 0; i <= limit; i++){ 
            long long ops = 0;
            
            while(p >= 1 && arr[p] <= i){
                p--;
            }
            if(p >= 1){
                ops = (pref[p] - pref[0]) - (p * i);
            }

            if(i == 0){
                c = 0;
            }
            else{
                long long max_allowed = (l - 1) / i;
                if(y > max_allowed) {
                    c = y - max_allowed;
                } else {
                    c = 0;
                }
            }
            long long f = ops + c;
            sol.push_back(f);            
        }
        cout << *min_element(sol.begin(), sol.end()) << "\n";
    }
}