#include<stdio.h>
typedef struct cricketers 
{
    char nameofcricketer[20];
    int age;
    int matches;
    int average_runs;
} cricketer;

int main(){
    cricketer arr[20];
    for(int i=0; i<20; i++){
        scanf("%d", &arr[i].age);
        scanf("%d", &arr[i].matches);
        scanf("%d", &arr[i].average_runs);
        
    }
    return 0;
}