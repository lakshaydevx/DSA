#include<iostream>
using namespace std;

int main(){
    char charASCI = 65;
    for(int i = 1 ; i <= 4 ; i++){
        for(int j=1 ; j <= i ; j++){
            cout<<charASCI;
            charASCI++;
        }
        cout<<endl;
    }
    return 0;
}