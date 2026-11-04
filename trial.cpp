#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, scr;
        string s;

        cin >> n;
        cin >> s;
        vector<int> arr(n);

        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                arr[i] = s[i+1];
            }
        }
        scr = *max_element(arr.begin(), arr.end()) - *min_element(arr.begin(), arr.end());
        cout << scr;
    }
}