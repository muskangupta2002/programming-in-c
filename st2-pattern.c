#include<stdio.h>
int main(){
int n;
scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int y=n-i; y>0; y--){
            printf(" ");
        }
        int k=i;
        for(int j=1; j<=i; j++){
            printf("%d", k);
            k++;
        }
        k=k-2;
        for( int p=k; p>=i; p-- ){
            printf("%d", p);
        }
        printf("\n");
    }
    return 0;
}
//     1
//   232
//   34543
//  4567654
// 567898765