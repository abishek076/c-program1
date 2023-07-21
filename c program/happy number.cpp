#include<stdio.h>
int split(int r);
int happy(int n){
	int a=n,count=0;
	while(n!=1&&n!=4){
		n=split(n);
		count++;}
	if (n==1){
		printf("\n%d is a happy number",a);
		printf("  number of iterations: %d",count);}}
int split(int r){
	int rem,add=0;
	while(r!=0){
		rem=r%10;
		add+=(rem*rem);
		r=r/10;}
	return add;}
int main(){
	int n,i,choose;
	printf("enter the value:");
	scanf("%d",&n);
	again:
	for (i=1; i<=n; i++)
			happy(i);
	return 0;}
