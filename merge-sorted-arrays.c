#include<stdio.h>
int main(){
    int arr1[]={1,3,7,9,11,99,707};
    int arr2[]={2,4,6,8,22,33,44,55,66,1000};
    int size1= sizeof(arr1)/sizeof(int);
    int size2= sizeof(arr2)/sizeof(int);
    int size3= size1 + size2;
    int marr[size3];
    int i=0,j=0;
    for(int k=0; k<size3; k++){
        if(i>=size1){
            marr[k]=arr2[j];
            j++;
        }
        else if(j>=size2){
            marr[k]=arr1[i];
            i++;
        }
        else if(arr1[i]<arr2[j]){
            marr[k]=arr1[i];
            i++;
        }
        else if(arr1[i]>arr2[j]){
            marr[k]=arr2[j];
            j++;
        }
    

    }
   
    for(int i=0; i<size3; i++){
        printf("%d " , marr[i]);
    }
    /*
    for(int i=0; i<size3; i++){
        if(i<size1){
            marr[i]=arr1[i];
        }
        else{
            marr[i]=arr2[i-size2];
        }
    }
    for(int i=1; i<size3; i++){
        int j=i-1;
        int key= marr[i];
        while(key<marr[j]  && j>=0){
            marr[j+1]=marr[j];
            j--;
        }
        marr[j+1]=key;  
       
    }
    for(int i=0; i<size3; i++){
        printf("%d " , marr[i]);
    }
    */


    return 0;
}