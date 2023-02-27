#include<stdio.h>
int main(){
    int arr[]={1,2,2,3,3,3,4,5,6,7,8,8};
    int size= sizeof(arr)/sizeof(int);
    int i=0, j=0;
    while(i<size){
        if(arr[i]==arr[i+1]){
            i++;
        }
        else{
            arr[j]=arr[i];
            j++;
            i++;
        }
    }
    size = j;
       for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
       }
}