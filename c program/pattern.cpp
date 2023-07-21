#include<stdio.h>
int main()
{
	/*int a=3;
	for(int i=1;i<=a;i++)
	{
    	for(int j=1;j<=a;j++)
        	{
		    	printf("*");
	 	 	}
	 	printf("\n");
	}*/
  /*  nt i, j;
   char input, alphabet = 'A';
   printf("Enter an uppercase character you want to print in the last row: ");
   scanf("%c", &input);
   for (i = 1; i <= (input - 'A' + 1); ++i) {
      for (j = 1; j <= i; ++j) {
        printf("%c ", alphabet);
      }
      alphabet++;
      printf("\n");
   }
  
  
   int i, j;
   int input,k=1;
   scanf("%d", &input);
   for (i = 1; i <=input; ++i) {
   	
      for (j = 1; j <= i; ++j) {
        printf("%d ",k++); 
      }
      printf("\n");

}*/
   int i, j,input;
   char alphabet = 'A';
   scanf("%d", &input);
   for (i = 1; i <=input; ++i) {
      for (j = 1; j <= i; ++j) {
        printf("%c ", alphabet++);
      }
      printf("\n");}
return 0;
}
