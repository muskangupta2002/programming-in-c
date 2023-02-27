#include<stdio.h>
int main(){
int arr[]={10,2,5,12,6};
    int size= sizeof(arr)/sizeof(int);
    for(int i=0; i<size; i++){
        int issorted=1;
        for(int j=0; j<size-i; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                
                arr[j+1]=arr[j];
                arr[j]=temp;
                issorted=0;
            }
        }
        if(issorted==1){break;}
    }
     for(int i=0; i<size; i++){
        printf("%d " , arr[i]);
    }
    return 0;
}