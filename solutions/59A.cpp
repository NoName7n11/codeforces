// Word

#include <iostream>
using namespace std;

int main(){
    int j=0,k=0;
    string s,x;
    cin >> s;

    for(int i=0; i < s.length(); i++){
        if(isupper(s[i])){
            j++;
        }
        else k++;
    }

    if(j>k){
        for(int i=0;i<s.length();i++){
            x = toupper(s[i]);
            cout << x;
        }
    }
    else{
        for(int i=0;i<s.length();i++){
            x = tolower(s[i]);
            cout << x;
        }
    }
}