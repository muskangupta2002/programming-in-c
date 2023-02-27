#include<iostream>
using namespace std; 
void sort012(int *arr, int n)
{
   //   Write your code here
   int low=0, mid=0, high=n-1;
   while(mid<=high){
      switch(arr[mid]){
      case 0:
         swap(arr[mid], arr[low]);
         mid++, low++;
         break;
     case 1:
         mid++;
         break;
      
      case 2:
      swap(arr[mid], arr[high]);
         high--;
         break;
      }
   }
}
int main(){
   int arr[]={2,1,0,2,2,1,0,2,1,0,0,1,1,1,1,1};
   int size=sizeof(arr)/sizeof(int);
   sort012(arr, size);
   for(int i=0; i<size; i++){
   cout<< arr[i];
   }
   return 0;
}  