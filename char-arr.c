#include<stdio.h>
int main(){
    int n=4;
    char arr[n];
    for(int i=0; i<n; i++){
        scanf("%c", &arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%c ", arr[i]);
    }
    char ch[20];
    scanf("%s", &ch);
    printf("%s", ch);
    //a string is char array ending with null character
    //if we dont end the char array with null character and print it as a string its gonna print garbage values
    //another method of making a string 
    char gh[20]="abc";
     printf("%s", gh);
    //print the above char array till you get null character
    return 0;

}