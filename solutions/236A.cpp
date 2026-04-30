// Boy or Girl

#include <iostream>
#include <set>
using namespace std;

int main(){
    string user_name;
    cin >> user_name;
    set<char> alength = {};
    
    for(int i=0; i<user_name.length(); i++){
        char word = user_name[i];
        alength.insert(word);
    }
    
    int size = alength.size();
    
    if(size % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else cout << "IGNORE HIM!";
}