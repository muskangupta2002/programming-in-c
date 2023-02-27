#include<stdio.h>
int main(){
  int arr[5][6]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30}};
  int minr=0;
  int maxr=4;
  int minc=0;
  int maxc=5;
  int count=0;
  while(count<=30 ){
    for(int i=minc; i<=maxc; i++){
      printf("%d ", arr[minr][i] );
      count++;

    }
    minr++;

    for(int i=minr; i<=maxr; i++){
      printf("%d ", arr[i][maxc] );
        count++;
    }
    maxc--;

    for(int i=maxc; i>=minc; i--){
      printf("%d ", arr[maxr][i] );
      count++;
    }
    maxr--;

    for(int i=maxr; i>=minr; i--){
      printf("%d ", arr[i][minc] );
      count++;
if(count>30){
  break;
}
    }
    minc++;
  }



    return 0;
}