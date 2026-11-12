#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        int count = 0, n;
        cin >> n;
        cin >> s;
        char expected_color = 'R'; 
        for(int i = 0; i < n; i++){
            if(s[i] != expected_color){
                count++;
            }
            if(s[i] == 'R'){
                expected_color = 'B';
            } else {
                expected_color = 'R';
            }
        }
        cout << count << endl;
    } 
    return 0;
}