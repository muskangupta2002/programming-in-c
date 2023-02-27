//also called kadane's algorithm
#include<stdio.h>
#include<limits.h>
int main(){
//Problem - you have to print max sum possible for a subarray
  int arr[]={1,2,-2,20,3};
  int size = sizeof(arr)/sizeof(int);
  /* MEthod 1
  int sum=INT_MIN;
  for(int i=0; i<size; i++){

    for(int j=i; j<size; j++){
        
        int currsum=0;
        for(int k=i; k<=j; k++){
          
            currsum=currsum+arr[k];
        }
        if(currsum>sum){
            sum=currsum;
        }
    }
  }
  printf("%d", sum);*/
  //optimized approach1
  int cf[size];
  cf[0]=arr[0];
  for (int i=1; i<size; i++){
    for(int j=1; j<size; j++){
        cf[i]=cf[i-1]+arr[i];
    }
  }
  int sum=INT_MIN;
  for(int i=0; i<size; i++){
    printf("%d ", cf[i]);
  }
for(int i=0; i<size; i++){
    for(int k=i+1; k<size; k++){
            int currsum=cf[k]-cf[i];
            if(currsum>sum){sum=currsum;}
    }
    
}
if(cf[size-1]>sum){
    sum=cf[size-1];
}
printf("%d", sum);

return 0;
}