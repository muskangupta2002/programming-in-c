#include<stdio.h>
int main(){
    int arr[]={10,2,5,12,6};
    int size= sizeof(arr)/sizeof(int);
    for(int i=0; i<size-1; i++){
        int min=i;
        for(int j=(i+1); j<size; j++){
            if(arr[min]>arr[j]){
                min=j;
            }
            

        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

    }
    for(int i=0; i<size; i++){
        printf("%d " , arr[i]);
    }
    
    return 0;
}