// Queue at the School

#include <iostream>
using namespace std;

int main(){
    int n, t;
    string a;
    cin >> n >> t; 
    cin >> a;

    for(int j=0; j<t; j++){
        if(a[j] == 'B' && a[j+1] == 'G'){
            a[j] = 'G';
            a[j+1] = 'B';
        }
    }
    cout << a; 
}