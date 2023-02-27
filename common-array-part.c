#include<stdio.h>
int main(){
    int arr1[]={1,2,3,4,5,6,10};
    int size1 = sizeof(arr1)/sizeof(int);

    int arr2[]= {1,2,3,6,10};
    int size2 = sizeof(arr2)/sizeof(int);
   
    int i=0, j=0;
    while(i<size1 || j<size2){
        if(arr1[i]>arr2[j]){
            j=j+1;
        }
        else if(arr1[i]<arr2[j]){
             i=i+1;
        }
        else if(arr1[i]==arr2[j]){
            
            
            printf("%d ", arr2[j]);
            i=i+1;
            j=j+1;
            
        }

    }
    return 0;

}
 // for(int i=0; i<size1; i++){
    //     for(int j=0; j<size1; j++){
    //     if(arr1[i]>arr2[j]){
    //         j=j+1;
    //     }
    //     else if(arr1[i]<arr2[j]){
    //          i=i+1;
    //     }
    //     else if(arr1[i]==arr2[j]){
            
            
    //         printf("%d ", arr2[j]);
    //         i=i+1;
    //         j=j+1;
            
    //     }
    //     }
    // }