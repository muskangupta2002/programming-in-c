#include<stdio.h>
void swap(int arr[], int a, int b){
   int temp = arr[a];
   arr[a]=arr[b];
   arr[b]=temp;
}
int main(){
  int arr[]={-3,5,6,-5,9,-6,-2,-1,4,5,6,7};
  int size=sizeof(arr)/sizeof(int);
   int i=0,j=size-1;
   while(i<j){
    if(arr[i]>0 && arr[j]<0){
   swap(arr ,i, j);
   i++;
   j--;
  }
  else{
  if(arr[i]<0){
   i++;
  }
  if(arr[j]>0){
   j--;
  }
  }
   }
   for(int i=0; i<size; i++){
   printf("%d ,", arr[i]);
   }
   return 0;
}