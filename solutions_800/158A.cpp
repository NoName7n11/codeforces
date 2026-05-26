//Next Round

#include <iostream>
using namespace std;

int main(){
    int n, k, a = 0, i;
    cin >> n >> k;
    int arr[n];
    
    for(i=1; i<=n; i++){
        cin >> arr[i];
    }
    
    for(i=0; i<k; i++){
        if(arr[i]>=arr[k] && arr[i]>0){
            a+=1;
        }
        else cout << a;
    }
    cout << a;
    return 0;
}