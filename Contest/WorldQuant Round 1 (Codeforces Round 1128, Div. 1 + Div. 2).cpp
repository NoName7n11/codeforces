#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, scr, count = 1;
        string s;

        cin >> n;
        cin >> s;
        vector<int> arr;

        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                arr.push_back(count);
            }
            count++;
        }

        if(arr.size() == 2){
            cout << 1 << endl;
            continue;
        }
        
        scr = *max_element(arr.begin(), arr.end()) - *min_element(arr.begin(), arr.end());
        cout << scr << endl;
    }
}