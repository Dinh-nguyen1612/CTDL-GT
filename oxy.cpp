#include<stdio.h>
#include<conio.h>
#include<math.h>
struct toado
{
	int x;
	int y;
};

typedef struct toado td;

 void nhaptoado(toado &a)
 {
 	printf("nhap toa do:");
 	scanf("%d", &a.x);
 	printf("nhap hoanh do:\n");
 	scanf("%d",&a.y);
 }
 void xuattoado(toado a)
 {
 	printf("toa do nhap la:(%d,%d)\n");
 	scanf("%d",a.x,a.y);
 };
 
 int main()
 {
 	toado td;
 	nhaptoado(td);
 	xuattoado(td);
 	getch();
 	return 0;
 }
