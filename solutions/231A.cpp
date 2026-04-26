//Team

#include <iostream>
using namespace std;

int n, p, y, t;
cin >> n;
int k;

int main(){
    for(int i = 1; i <= 3; i++){
        cin >> p >> y >> t;

        if(p+y==2 || y+t==2 || t+p==2){
            k+=1;
        }
    }
    cout << k;
    return 0;
}