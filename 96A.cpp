#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 0;
    string s, x = "NO";
    cin >> s;

    for(char c : s){
        if(c == '0'){
            a++;
            b = 0; 
            if(a >= 7){
                x = "YES";
                break;
            }
        }
        else if(c == '1'){
            b++;
            a = 0;
            if(b >= 7){
                x = "YES";
                break;
            }
        }
    }
    cout << x << endl; 
    return 0;
}