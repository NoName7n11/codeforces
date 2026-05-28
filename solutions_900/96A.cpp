// Football

#include <iostream>
using namespace std;

int main(){
    int a=0, b=0;
    string s, x="NO";
    cin >> s;

    for(char c : s){
        if(c == '0'){
            a++;
            if(a>7){
                x = "YES";
                cout << x;
                break;
            }
        }
        else if(c == '1'){
            b++;
            if(b>7){
                x = "YES";
                cout << x;
                break;
            }
        }
        else{
            a=0;
            b=0;
        }
    }
    cout << x;
}