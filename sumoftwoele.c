#include<stdio.h>
#include<stdbool.h> 
//brute force method- run two pointers ....take an element and find coressponding element to it.
//method2- sum compare with target ...run the pointer acc to target
int main(){
   int arr[]={10,2,5,12,6};
   int sum= 17;

    int size= sizeof(arr)/sizeof(int);
   /*method1-
    for(int i=0; i<size; i++){
        bool isfound = false;
       for(int j=0; j<size; j++){
       if(arr[i]+ arr[j]==sum){
            printf("%d\n", arr[i]);
            printf("%d",arr[j]);
        isfound=true;
        break;
       }
       }
       if(isfound==true){
        break;
       }
    }
    */
   //Method -2
    for(int i=0; i<size-1; i++){
        int min=i;
        for(int j=(i+1); j<size; j++){
            if(arr[min]>arr[j]){
                min=j;
            }
            

        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

    }
   int i=0;
   int j=size-1;
   while(i<j){
    int n=(arr[i]+arr[j]);
    if(n==sum){
        printf("%d\n", arr[i]);
        printf("%d",arr[j]);
        break;
    }
    else if(n>sum){
        j--;
    }
    else{
        i++;
    }
   }
   
    
    return 0;
}