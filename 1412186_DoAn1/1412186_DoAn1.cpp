#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "1412186_Bai1.h"
#include "1412186_Bai2.h"
#include "1412186_Bai3.h"
#include "1412186_Bai4.h"
#include "1412186_Bai5.h"
int main()
{
	int		stt,ketqua;
	int		ask=10;
	do
	{
		system("cls");
		printf("********** DO AN 1 - 1412186 **********\n");
		printf("**1. Tinh tien loi ngan hang.        **\n");
		printf("**2. Dem so te bao song sot.	     **\n");
		printf("**3. Gia lap may tinh bo tui don gian**\n");
		printf("**4. Lich van nien.                  **\n");
		printf("**5. Hinh canh quat.                 **\n");
		printf("***************************************\n\n");
		printf("Hay chon chuong trinh ban muon su dung: (1,2,3,4,5)\n");
		scanf("%i",&stt);
		switch(stt)
		{
			case 1: tinhtienloinganhang();	break;
			case 2: demsotebaosongsot();	break;
			case 3: gialapmaytinhbotui();	break;
			case 4: lichvannien();			break;
			case 5: hinhcanhquat();			break;
		}
		printf("\n\n---------------------------------------\n\n");
		fflush(stdin);
		do
		{
		printf("Ban co muon tiep tuc su dung chuong trinh khong ? (y/n) \n");
		ask=getch();
		}	while ((ask!=89) && (ask!=121) && (ask!=78) && (ask!=110));
	}	while ((ask==89) || (ask==121));
	return 0;
}