#include<stdio.h>
#include<limits.h>
int main(){
int arr[]={5,0,1,2,3,8,6};
int size  = sizeof(arr)/sizeof(int);
int maxele= INT_MIN;

for(int i=0;i<size;i++){

    
    if(arr[i]>maxele){
        maxele=arr[i];
        
    }
    int minele= INT_MAX;
    for(int j=i+1; j<size; j++){
        
        if(arr[j]<minele){
            minele=arr[j];
          
        }
    }
    if(maxele<minele){
        printf("%d", (i+1));
        break;
        
    }
}
return 0;
}