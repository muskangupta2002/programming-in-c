#include<stdio.h>
int main(){
int arri[]={1,2,3,4,5,6,7,8};
int size= sizeof(arri)/sizeof(int);
int search=4;
int binarySearch(int arr[] , int st, int end, int search){
    int mid= st- ((st-end)/2);

    if(arr[mid]==search){
     
        return mid;
    }
if(search<arr[mid]){
binarySearch(arr, st,mid-1,search);
}
else{binarySearch(arr, mid+1, end, search);}
}

int n = binarySearch(arri, 0, size-1, search);
printf("%d", n);

return 0;
}