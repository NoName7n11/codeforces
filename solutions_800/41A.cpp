// Translation

#include <iostream>
using namespace std;

int main(){
    string t, s, a = "YES";
    cin >> t >> s;
    int k = t.length(), l = s.length(), size;

    if(l==k){
        size = k;
    }
    else{
        cout << "NO";
        return 0;
    }

    for(char c : t){
        if(c != s[size-1] && size>0){
            a = "NO";
            break;
        }
        size--;
    }
    cout << a;
}