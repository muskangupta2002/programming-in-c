#include<stdio.h>
int main(){
 
    int arr[]={6,1,7,5,9,3,4,2};
    int size = sizeof(arr)/sizeof(int);
    
    void mm(int arr[], int stt, int midd, int endd){
        int i=stt, j=midd+1;
        int array[endd+1];
        int k=0;
        while(k<=endd){
            if(i>midd){
                array[k]=arr[j];
                j++;
            }
            else if(j>endd){
                array[k]=arr[i];
                i++;
            }
            else if(arr[i]<arr[j]){
                array[k]=arr[i];
                i++;
            }
            else if(arr[j]<arr[i]){
                array[k]=arr[j];
                j++;
            }
            k++;
        }
        for(int p=0; p<=endd; p++){
            arr[p]=array[p];
        }
    }
   void ms(int arr[], int st, int end){
        if(st<end){
        
        int mid= st- ((st-end)/2);
        ms(arr, st, mid);
        ms(arr, mid+1 , end);
        mm(arr, st, mid, end);
        }
        return;
    }
    ms(arr, 0, size-1);
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
   return 0;
}