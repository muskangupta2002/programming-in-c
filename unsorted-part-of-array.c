// #include<stdio.h>
// int main(){
//     int arr[]={1,2,3,4,5,8,6,7,9,10,11};
//     int size=sizeof(arr)/sizeof(int);
//     for(int i=1; i<size; i++){
//       if(arr[i]<arr[i-1] ){}
//       largest =max(largest, arr[i]);
//     largest = arr[i]> largest ? arr[ : largest;
//     smallest = smallest> arr[i]]
//     }
//     for(int i=size-1; i>=0; i--){
//         if(arr[i-1]>arr[i]){
//             printf("%d", (i));
//             break;
//         }
//     }
      
//     return 0;
// }
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[]={1,2,3,4,5,8,6,7,9,10,11};
 int size=sizeof(arr)/sizeof(int);
int largest=INT_MIN;
int smallest=INT_MAX;
for(int i=1;i<size-1;i++){
    if(arr[i]<arr[i-1]){
    //   largest=max(largest,arr[i]);
    largest=arr[i]>largest ? arr[i]:largest;
    //    smallest=min(smallest,arr[i]);
    smallest=arr[i]<smallest ? arr[i]:smallest;
    }
    if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
    // largest=max(largest,arr[i]);
    largest=arr[i]>largest ? arr[i]:largest;
    //    smallest=min(smallest,arr[i]);
     smallest=arr[i]<smallest ? arr[i]:smallest;
    }
}
int i=0;
while(arr[i]<smallest){
    i++;
}
printf("%d",i);
int j=size-1;
while(arr[j]>largest){
    j--;
}
printf("%d",j);
}