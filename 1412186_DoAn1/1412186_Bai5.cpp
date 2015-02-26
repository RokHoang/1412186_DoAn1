#include	<stdio.h>
#include	"windows.h" //clrscr
#include	<conio.h>
#include	"1412186_Bai5.h"
void nhapDoDaiCanh(int *n)
{
	printf("Hay nhap do dai canh:\n");
	scanf("%i",&*n);
}
void horizontal(int h) //di den cot h
{
	int i;
	for (i=1;i<=h;i++)
		printf(" ");
}
void vertical(int v) //di den dong v
{
	int i;
	for (i=1;i<=v;i++)
		printf("\n");
}
void space(int n) //in khoang trang space
{
	int i;
	for (i=1;i<=n;i++)
		printf("  ");
}
void star(int n) //in dau *
{
	int i;
	for (i=1;i<=n;i++)
		printf("* ");
}
void inCanhQuat(int n,int x,int y)
{
	int a;
	int i;
	vertical(y);
	a=n;
	for (i=1;i<=n;i++) //ve 2 canh quat tren
	{
		horizontal(x);
			space(i-1);
			star(a);
			space(a-1);
			star(i);
			a--;
		printf("\n");
	}
	a=n;
	for (i=1;i<=n;i++) //ve 2 canh quat duoi
	{
		horizontal(x);
			star(a);
			space(i-1);
			star(i);
			a--;
		printf("\n");
	}
}

void hinhcanhquat()
{
	int n;
	int x,y;
	int key=10;
	nhapDoDaiCanh(&n);
	x=40-2*n;
	y=12-n;//x la hoang do ,y la tung do
	do
	{
		system("cls");
		printf("Press ESC to exit");
		switch(key)
		{
		case 80: if (y<(24-n*2))	y++;break; //down
		case 72: if (y>1)			y--;break; //up
		case 75: if (x>0)			x--;break; //left
		case 77: if (x<(79-4*n))	x++;break; //right
		}
		inCanhQuat(n,x,y);
		key=getch();
	}
	while (key!=27);
}
