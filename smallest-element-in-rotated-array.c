#include<stdio.h>
int main(){
       int arr[]={3,4,5,1,2,3};
       int size=sizeof(arr)/sizeof(int);
       int s=0, e=size-1;
       while(s<=e){
        int mid=(s+e)/2;
        int target=arr[mid];
        if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){
            printf("%d", arr[mid]);
            break;
        }
        
        if(target>=arr[s]){
            s=mid;
        }
        if(target<=arr[e]){
            e=mid;
        }
       }
}