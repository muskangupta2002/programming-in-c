#include<stdio.h>
int main(){
int arr[]={2,1,4,7,3,2,5};

int size = sizeof(arr)/sizeof(int);
int maxlength=0;

for(int i=0; i<size; i++){
	int j=i;
	int k=i;
	int prev=0;
	int next=0;
	while(k+1<=size-1 && arr[k+1]>arr[k]){

		next++;
		k=k+1;
	}
	while(j-1>=0 && arr[j-1]<arr[j]){
        prev++;
		j=j-1;
	}
	
	int length = next + prev + 1;
	if(length > maxlength){
		maxlength= length;
	}
	i=k+1;

	
}
printf("%d", maxlength);


	
	return 0;
}
