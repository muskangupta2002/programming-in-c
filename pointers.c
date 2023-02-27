#include<stdio.h>
#include<stdlib.h>
int* func1(){
    static int arr[]={1,3,4};//add static keyword before int keyword to make the array static throughout the code and it wont throw error anymore while returning its address
    printf("base address is %p\n", arr); //%p to return a pointer
    // arr is hence a dangling pointer since it was assigned an address at a time but now the memory is deallocated
    
    free(arr);
    return arr; //will throw an error since its the address of a local variable or nil in an online compiler
}

int main(){
    int m=9;
    void* ptr=&m;
    printf("%d\n", *((int*)ptr)); //for void ptr
    // malloc
    int n=5; 
    int * arr2= (int *)malloc(n*(sizeof(int))); //n blocks of integer are assigned to this memory
    //melloc just assigns values of address
    //calloc initialises each member of array with 0
    //realloc works similar to vector
    arr2[0]=5;
    for( int i=0; i<n ; i++){
        printf("%d " , arr2[i]);
    }
    printf("\n");
    int * arr3= (int *)calloc(n, 4);//syntax of calloc
    for( int i=0; i<n ; i++){
        printf("%d " , arr3[i]);
    }
    printf("\n");


//array is by default passed by reference ina  function
// int* function-name -> this function returns an array's base address
    int f=10;
    int *ptr2=&f;
    int * ptr1= func1();
    printf("%p" , ptr1);
    
    return 0;
}
// memory in heap-> dynamically allocated ->lives forever