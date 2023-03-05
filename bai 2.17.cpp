#include<stdio.h>
 int main()
 {
 	int n;
 	long S=0;
 	printf("/nnhap n:");
 	scanf("%d",&n);
 	for (int i=1;i<=n;i++)
 	{
 		S=S+i*i;
	 }
	 printf("\ntong 1^2+2^2+....+%d^2 la:%d",n,S);
	 return 0;
 }
