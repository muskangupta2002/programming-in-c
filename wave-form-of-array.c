#include<stdio.h>
//problem- elements at even indexes must be greater than the element just next to it and just previous to it ..
//if not - jusst  swap them 
int main(){
    
int arr[]= {5,10,4,3,1};
int size = sizeof(arr)/sizeof(int);
void swap(int a, int b){
  int temp = arr[a];
  arr[a]=arr[b];
  arr[b]=temp;
}

for(int i=0; i<size; i+=2){
  if((i-1)>=0 && arr[i]<arr[i-1]){
  swap(i , i-1);
  }
  if((i+1)<size && arr[i]<arr[i+1]){
  swap(i,i+1);
  }
}
for(int i=0; i<size; i++){
  printf("%d ", arr[i]);
}
return 0;

}