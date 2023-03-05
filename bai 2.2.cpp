#include<stdio.h>
#include<conio.h>
long giaithua(int n)
{
	if(n==0)
	return 1;
	return giaithua(n-1)*n;
	}
	
	int main()
	{
		int n,T;
		printf("\n nhap n:");
		scanf("%d",&n);
		T=giaithua(n);
		printf("T=%d",T);
		getch();
		return 0;
	}
