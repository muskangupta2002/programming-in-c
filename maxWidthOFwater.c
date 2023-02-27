#include<stdio.h>
#define new_max(x,y) (((x) >= (y)) ? (x) : (y))
#define new_min(x,y) (((x) <= (y)) ? (x) : (y))

int main(){
    // container with most water leetcode question

   int arr[]={10,2,5,12,6};
   int k= 3;
   int size= sizeof(arr)/sizeof(int);  
   int area=0;    
   /*method -1 (brute force method)
   for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
        int height = new_min(arr[i],arr[j]);
        int width = j-i;
        int a= height*width;
        if(a>area){
            area =a;
        }
    }
   } */
   /*method 2 (optimized approach)*/
     
  int i=0, j=size-1;
  while(i<j){
        int height = new_min(arr[i],arr[j]);
        int width = j-i;
        int a= height*width;
        if(a>area){
            area =a;

        }
        arr[i]<arr[j] ? i++ : j--;
  }
   printf("%d", area);
 
 
    return 0;
}