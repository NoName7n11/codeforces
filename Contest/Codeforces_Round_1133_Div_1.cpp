#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, l, c;
        cin >> n >> l;
        int arr[n];
        vector<int> sol;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr, arr + n);
        int y = arr[0];

        int limit = sqrt(l-1);
        for(int i = 0; i <= limit; i++){
            int ops = 0;
            for(int j = 0; j < n; j++){
                ops = ops + arr[j] - i;
            }

            if(i == 0){
                c = 0;
            }
            else{
                c = y - y/2;
            }
            int f = ops + c;
            sol.push_back(f);            
        }
        cout << *min_element(sol.begin(), sol.end());
    }
}