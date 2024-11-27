#include <stdio.h>
int main(){
	int n=5;
	int arr[5]={1,2,3,4,5};
	for(int i=0;i<n;i++){
		printf("cac so co trong mang la %d \n",arr[i]);
	}
	printf("\n: ");
	for(int i = n - 1;i >= 0; i--){
		printf("%d",arr[i]);
	}
	
	return 0;
}
