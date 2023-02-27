#include<stdio.h>
int main(){
    int arr[]={6,7,8,9,10};
    int *ptr=arr;
    char arr1[]={'g', 'f', 'd'};
    char *ptr1= arr1;

    for(int i=0; i<5; i++ ){
        printf("%d \n", *(ptr+i));
    }
    
    for(int i=0; i<3; i++ ){
        printf("%c at %d\n", *(ptr1+i), (ptr+i));
    }
}