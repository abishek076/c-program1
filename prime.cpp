#include<stdio.h>
	int prime(int num){
		int z=1,i;
		for(i=2;i<=num/2;i++){
			if(num%i==0){
				z=0;
			}
		return z;
		}
	}
int main()
{
	int i,j,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++){
		if(arr[i]==0||arr[i]==1){
			printf("\nneither prime nor composite:%d",arr[i]);
		}
		else if(prime(arr[i])){
			printf("\nprime number:%d",arr[i]);
		}
		else{
			printf("\ncomposite number:%d",arr[i]);
		}
	}

	return 0;
	
}
