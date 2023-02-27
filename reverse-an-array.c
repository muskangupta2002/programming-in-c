#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    int i=0,j=size-1;
    while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
   }
    for(int i=0 ; i<size; i++){
        printf("%d ", arr[i]);

    }
    return 0;
}