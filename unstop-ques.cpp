#include<iostream>
using namespace std;
int main(){
    int k=4;
    int arr[]={3,2,1,6,5,4,3,2,1,6,5,4,99,88,77};
    int size=sizeof(arr)/sizeof(int);
    int a=0,b=k-1;
    while(a<size){
        int s=a,e=b;
        while(s<e){
            swap(arr[s], arr[e]);
            s++;
            e--;

        }
        a=a+k;
        b=b+k;
        if(b>=size){
            b=size-1;
        }
    }
    for(int i=0;i<size; i++){
        cout<<arr[i]<<" ";
        
    }
}