#include	<stdio.h>
#include	<math.h>
#include	"1412186_Bai2.h"
void demsotebaosongsot()
{
	int n,d,m,plan,solan,i;
	float t,ketqua;
	printf("Hay nhap so te bao ban dau:\n");
	scanf("%i",&n);
	printf("Hay nhap so ngay te bao se chet\n");
	scanf("%i",&d);
	printf("Hay nhap ty le te bao chet\n");
	scanf("%f",&t);
	printf("Hay nhap so ngay thi nghiem\n");
	scanf("%i",&m);
	solan=m/d; //so lan te bao giam di
	t=1-t/100; //chuyen thanh ti le song sot
	ketqua=(float)n;
	printf("Ban muon su dung cach 1 hay cach 2\n");
	scanf("%i",&plan);
	if (plan==1)
		for (i=1;i<=m;i++)
		{
			ketqua=ketqua*2;
			if ((i%d)==0)
				ketqua=ketqua*t;
		}
	else
		ketqua=ketqua*pow(t,(float)solan)*pow(2,(float)m);
	printf("So te bao sau %i ngay la: %f",m,ketqua);
}