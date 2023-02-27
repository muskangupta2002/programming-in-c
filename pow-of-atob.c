#include<stdio.h>
int powerr(int a, int b){
    if(b==0){
        return 1;
    }
    int x= powerr(a, b/2);
    if(b%2==0){
        return x*x;
    }
    else{return x*x*a;}
}
int main(){
    printf("%d", powerr(2, 0));
}