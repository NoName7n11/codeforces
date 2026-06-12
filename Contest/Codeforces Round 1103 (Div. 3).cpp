// B - Tatar TV Show

#include <iostream>
using namespace std;

int main(){
    int n,k,t;
    string s, a = "YES";
    cin >> t;

    for(int j=0; j<t; j++){
        cin >> n >> k >> s;
        for(int i=1; i <= (n-k); i++){
            if(s[i-1] == '1'){
                s[i-1] = '0';
                s[i+k-1] = (s[i+k-1]=='0') ? '1' : '0';
            }
        }
    
        for(int i=0; i<n; i++){
            if(s[i] == '0'){
                a = "YES";
            }
            else{
                a = "NO";
                break;
            }
        }
        cout << a << endl;
    }
}