#include<stdio.h>
int fact(int f);
int split(int r);
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	split(n);
	printf("value for %d is %d",n,split(n));
	if (n==split(n)){
		printf("\n%d is a strong number",n);
	}
	else{
		printf("\n%d is not a strong number",n);
	}
	return 0;
}
int split(int r){
	int rem,add=0;
	while(r!=0){
		rem=r%10;
		add+=fact(rem);
		r=r/10;
	}
	return add;
}
int fact(int f){
	int multi=1;
	for (int i=1;i<=f;i++){
		multi=multi*i;
	}
	return multi;
}
