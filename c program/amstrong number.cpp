//amstrong number
#include<stdio.h>
int main(){
	int a,n,rem,add=0;
	printf("enter the number:");
	scanf("%d",&n);
	a=n;
	while(n!=0){
		rem=n%10;
		add=add+(rem*rem*rem);
		n=n/10;
	}
	printf("sum of cube of %d is %d",a,add);
	if (a==add){
		printf("\n%d is an amstrong number",a);
	}
	else{
		printf("\n%d is not an amstrong number",a);
	}
	return 0;
}
