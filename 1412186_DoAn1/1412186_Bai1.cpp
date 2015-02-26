#include <stdio.h>
#include <math.h>
#include "1412186_Bai1.h"
void tinhtienloinganhang()
{
	float s,q;
	long i,m,n;
	int plan;
	printf("Hay nhap so tien goi\n");
	scanf("%ld",&m);
	printf("Hay nhap so thang gui\n");
	scanf("%ld",&n);
	printf("Hay nhap lai suat\n");
	scanf("%f",&q);
	printf("Ban muon su dung cach 1 hay cach 2\n");
	scanf("%i",&plan);
	q=q/100+1;
	s=(float)m;
	if (plan==1) 
		for (i=1;i<=n;i++)
				s=s*q;
	else
	{
		s=s*pow(q,n);
	}
	printf("So tien sau %ld thang la: %f",n,s);
}