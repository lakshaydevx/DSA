#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i=0 ; i < n ; i++){
        for(int j=1 ; j <= n*2 ; j++){
            if(j <= i+1 || j >= n*2-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    for(int i=0 ; i < n ; i++){
        for(int j=1 ; j <= n*2 ; j++){
            if(j <= n-i || j >= n+i+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}