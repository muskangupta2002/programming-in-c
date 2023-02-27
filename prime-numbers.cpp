#include<iostream>
using namespace std;
int main(){
    for(int i=2; i<=20; i++){
        int cnt=0;
        for(int j=2; j<i; j++){
            if(i%j==0){
                cnt=1;
            }

        }
    if(cnt==0){cout<<i<<endl;}    
    }
    return 0;
}