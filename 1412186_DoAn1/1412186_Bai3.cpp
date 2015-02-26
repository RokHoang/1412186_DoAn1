#include	<stdio.h>
#include	<conio.h>
#include	<string.h>
#include	<stdlib.h>
#include	"1412186_Bai3.h"
/***********************Nhap va kiem tra**********************/

void	input (char str[],int *distance)
{
	printf("Hay nhap phep tinh cua ban:\n");
	gets(str);
	*distance=strlen(str);
}
void	cut(char str[],int distance,char sohang1[],int *spt1,char sohang2[],int *spt2,char *toantu)
{
	int i,j;
	j=0;
	for (i=0;i<=(distance-1);i++)//nhap chuoi vao sohang1
	{
			if (str[i]!=' ')
			{
				j++;
				sohang1[j]=str[i];
			}
			else break;
	}
	*spt1=j;//xd so phan tu cua sohang1
	i++;
	*toantu=str[i];//nhap dau toan tu +-*/
	i+=2;
	j=0;
	for (;i<=(distance-1);i++)//nhap chuoi vao sohang2
	{
			if (str[i]!='/0')
			{
				j++;
				sohang1[j]=str[i];
			}
			else break;
	}
	*spt2=j;//xd so phan tu cua sohang2
}
int		checkDot(char sohang[],int spt)//kt so "." trong chuoi
{
	int i;
	int dot=0;//xac dinh so "." trong chuoi
	for (i=1;i<=spt;i++)
		if	(sohang[i]=='.')
			dot++;
	if (dot>1)
		return (-9);
	return dot;
}
int check(char sohang[],int spt)//kt sohang co thoa man hay khong
{
	if ((spt-checkDot(sohang,spt))<=9)
		return 0;
	return 1;
}

/******************chuyen thanh so va tinh toan********************/

void	convert(char str[],double *fsohang1,double *fsohang2)		//nhap gia tri cho 2 so hang
{
	char *tam;
	*fsohang1=atof(strtok(str," "));
	tam=strtok(NULL," ");
	*fsohang2=atof(strtok(NULL,"/0"));
}
double	calculator(double fsohang1,char toantu,double fsohang2)	//tinh toan 
{
	switch(toantu)
	{
	case '+': return (fsohang1+fsohang2);
	case '-': return (fsohang1-fsohang2);
	case '*': return (fsohang1*fsohang2);
	case '/': return (fsohang1/fsohang2);
	}
}

void		gialapmaytinhbotui()
{
	char str[100];
	char sohang1[50]={0},sohang2[50]={0},toantu=NULL;
	int distance,spt1,spt2;	//distance la so phan tu cua str[]
							//spt1 va spt2 la so phan tu cua sohang1 va sohang2
	double fsohang1=0,fsohang2=0;
	printf("--- Chuong trinh Gia lap may tinh bo tui ---\n");
	do
	{
		fflush(stdin);
		str[50]=NULL;
		input(str,&distance);
		cut(str,distance,sohang1,&spt1,sohang2,&spt2,&toantu);
	}
	while (check(sohang1,spt1) && (check(sohang2,spt2)));
	convert(str,&fsohang1,&fsohang2);
	printf("So hang 1   %.2lf\n",fsohang1);
	printf("Phep tinh   %c\n",toantu);
	printf("So hang 2   %.2lf\n",fsohang2);	
	printf("Ket qua   = %.2lf",calculator(fsohang1,toantu,fsohang2));
}