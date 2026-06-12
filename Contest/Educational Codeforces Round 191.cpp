// AI Project Development

//AI Code
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t, n, x, y, z;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> n >> x >> y >> z;
        int noAI = (n + (x+y) - 1) / (x+y);
        int ai;
        if(x*z >= n) ai = (n + x - 1) / x;
        else {
            int rem = n - x*z;
            int sp = x + 10*y;
            ai = z + (rem + sp - 1) / sp;
        }

        cout << min(noAI, ai) << "\n";
    }
}


//Self Code
#include <iostream>
using namespace std;
 
int main(){
    int t, n, x, y, z, c(0);
    cin >> t;
    cin >> n >> x >> y >> z;
 
    while(n > 0){
        if(x+y <= n){
            for(int i=0; i<z; i++){
                n = n - x;
                c++;
            }
            z = 0;
            n = n - (x+(10*y));
            c++;
        }
        else{
            n = n - (x+y);
            c++;
        }
    }
    cout << c;
}