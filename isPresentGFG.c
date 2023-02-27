#include<stdio.h>
#include<stdbool.h> 
int main(){
    int A[] = {1,2,5,7,0};
    int n=sizeof(A)/sizeof(int);
    int B[] = {2,4,5,0,1};
 

    for(int i=0;i<n; i++){
        bool isPresent= false;
        for(int j=0; j<n; j++){
            if(A[i]==B[j]){
                isPresent = true;
            }
            else {
                continue;
                }
        }
        if (isPresent==false){
            printf("%d", isPresent);
            break;
        }

    }
    return 0;
}