#include<stdio.h>
static int y=0;
int ways(int n){
    
    if(n<=0){

        return  0;
    }
    if(n==1){
        y++;
        return 1;
    }
    else if(n==2){
        y++;
        return 2;
    }
    else if(n==3){
        y++;
        return 3;
    }
    y++;
    return ways(n-1) + ways(n-2) + ways(n-3);
}
int main(){
    printf("%d\n", ways(4));
    printf("%d", y);
    return 0;
}