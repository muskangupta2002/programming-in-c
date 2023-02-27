#include<stdio.h>
int main(){
    // pass by reference
    void  swap(int *a, int *b){
       int temp= *a;
        *a= *b;
        *b=temp;
        return;
    }
    int x=10, y=9;
    swap(&x,&y);
     printf("%d %d\n", x,y);

    //pass by value

     void  swap1(int a, int b){
       int temp= a;
        a= b;
        b=temp;
        return;
    }
    swap1(x,y);
     printf("%d %d", x,y);


    //pass by value

    return 0;
}   