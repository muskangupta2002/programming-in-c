#include<stdio.h>
int main(){
    int arr[]={10,2,5,12,6};
    int size= sizeof(arr)/sizeof(int);
    for(int i=1; i<size; i++){
        int j=i-1;
        int key= arr[i];
        while(key<arr[j]  && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;  
       
    }
    for(int i=0; i<size; i++){
        printf("%d " , arr[i]);
    }
    
    return 0;
}