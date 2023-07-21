#include<stdio.h>
int reverse(int r){
	int rem,add=0;
	while(r!=0){
		rem=r%10;
		add=add*10+rem;
		r=r/10;
	}	
	return add;
}
int main(){
	//adam number
	int n,a,n1,sq,sq1;
	printf("enter the number:");
	scanf("%d",&n);
	a=n;
	sq=n*n;
	printf("square of %d is %d",n,sq);
	n1=reverse(a);
	sq1=n1*n1;
	printf("\nsquare of %d is %d",n1,sq1);
	if (sq==(reverse(sq1))){
		printf("\n%d is an adam number",a);
	}
	else{
		printf("\n%d is not an adam number",a);
	}
	return 0;
}
