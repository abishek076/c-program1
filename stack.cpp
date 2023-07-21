#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int a[100],n,top=-1;
int main()
{
	printf("enter the size of stack:");
	scanf("%d,&n");
	while(1)
	{
		printf("1.push 2.pop 3.display 4.exit\n");
		int ch;
		scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		push();
		break;
		case 2:
		pop();
		break;
		case 3:
		display();
		break;
		case 4:exit(0);
		default:
			exit(0);
	}
}}
void push()
{
	if(top==n-1)
	{
		printf("overflow");
	}
	else{
		top++;
		printf("enter the val");
		int val;
		scanf("%d",&val);
		a[top]=val;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("underflow");
	}
	else
	{
		top--;
	}
}
void display()
{
	for(int i=0;i<-top;i++){
		printf("%d",a[i]);
	}
}
