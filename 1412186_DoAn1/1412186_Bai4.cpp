#include	<stdio.h>
#define		namNhuan(a)	(((a%400==0) || ((a%4==0) && (a%100!=0)))?1:0)
#include	"1412186_Bai4.h"
void nhapNgayThang (int *d,int *m, int *y)
{
	printf("Hay nhap ngay:\n");
	scanf("%i",&*d);
	printf("Hay nhap thang:\n");
	scanf("%i",&*m);
	printf("Hay nhap nam:\n");
	scanf("%i",&*y);
}
int xdSoNgay (int m,int y) //xac dinh thang do co bao nhieu ngay
{
	switch(m)
	{
	case 1:case 3:case 5:case 7:case 8:case 10: case 12:return 31;
	case 4:case 6:case 9:case 11:						return 30;
	case 2:if (namNhuan(y))	return 29; 
		   else				return 28;
	}
}
char* xdThu(int d, int m, int y) //xac dinh ngay do la thu may trong tuan
{
	long	s=0;
	int		i;
	for (i=1900;i<=y;i++)
		if (namNhuan(i))
			s+=366;
		else 
			s+=365;
	for (i=1;i<m;i++)
		s+=xdSoNgay(i,y);
	s+=d+5;
	s=s%7;
	switch(s)
	{
	case 0: return "chu nhat";
	case 1: return "thu hai ";
	case 2: return "thu ba  ";
	case 3: return "thu tu  ";
	case 4: return "thu nam ";
	case 5: return "thu sau ";
	case 6: return "thu bay ";
	}
}
void xdNgayLienTruoc(int d, int m, int y)
{
	if (d==1)
		if (m!=1)
		{
			d=xdSoNgay(m-1,y);
			m--;
		}
		else
		{
			d=31;
			m=12;
			y--;
		}
	else
		d--;
	printf("Ngay lien truoc %i/%i/%i \n",d,m,y);
}
void xdNgayLienSau(int d, int m, int y)
{
	if (d==xdSoNgay(m,y))
		if (m!=12)
		{
			d=1;
			m++;
		}
		else
		{
			d=1;
			m=1;
			y++;
		}
	else
		d++;
	printf("Ngay lien sau %i/%i/%i\n",d,m,y);
}
void lichvannien()
{
	int d,m,y;
	printf("--- Chuong trinh lich van nien ---\n");
	nhapNgayThang(&d,&m,&y);
	printf("Ngay %i/%i/%i la ngay %s\n",d,m,y,xdThu(d,m,y));
	xdNgayLienTruoc(d,m,y);
	xdNgayLienSau(d,m,y);
}