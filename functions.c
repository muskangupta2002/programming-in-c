//funtions need to be predefined
#include<stdio.h>
int addno(int a, int b); //prototype
int main(){
    int a=9,b=10;
    addno(a,b); //function called before definition but since the prototype is defined so no error thrown
    int addno(int a,int b){ //function definition
        return (a+b);
    }
}