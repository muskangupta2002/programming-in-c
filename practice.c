#include<stdio.h>
#include<string.h>
// 10  
int main(){
    char str[]="yuckzx";
    int len= strlen(str);
    
    for(int i=0; i<len-1; i++){
        char min= i;
        for(int j=i+1; j<len; j++ ){
            if(str[min]> str[j]){
                min=j;
            }
            
        }
        char temp= str[i];
            str[i]=str[min];
            str[min]=temp;

    
    }
    printf("%s", str);

    return 0;
}