#include <iostream>
using namespace std;

int main(){
    int i, j, count = 0;
    int arr[5][5];
    
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cin >> arr[i][j];
        }
    }
    
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(arr[i][j] == 1){
                
                while(i!=2){
                    if(i<2){
                        i+=1;
                        count++;
                    }
                    else{
                        i-=1;
                        count++;
                    }
                }
                while(j!=2){
                    if(j<2){
                        j+=1;
                        count++;
                    }
                    else{
                        j-=1;
                        count++;
                    }
                }
                cout << count;
                return 0; 
            }
        }
    }
    return 0;
}