#include <stdio.h>
#include <stdlib.h>


//Ad Soyad: Kadir IR	
//No: 1220505055


struct ogrenci{
	char ad[10];
	char soyad[10];
	int no;
	char adres[25];
};


int main() {
	
	struct ogrenci o1;
	strcpy(o1.ad,"Didem");
	strcpy(o1.soyad,"Gumus");
	o1.no = 55;
	strcpy(o1.adres,"Kocaeli");
	printf("1.Ogrenci Bilgileri:\nAd Soyad:%s %s\nNo:%d\nAdres:%s\n\n",o1.ad,o1.soyad,o1.no,o1.adres);
	
	struct ogrenci o2;
	strcpy(o2.ad,"Alper");
	strcpy(o2.soyad,"Burcan");
	o2.no = 465;
	strcpy(o2.adres,"Bilecik");
	printf("2.Ogrenci Bilgileri:\nAd Soyad:%s %s\nNo:%d\nAdres:%s\n\n",o2.ad,o2.soyad,o2.no,o2.adres);
	
	struct ogrenci o3;
	strcpy(o3.ad,"Mehmet");
	strcpy(o3.soyad,"Kocul");
	o3.no = 442;
	strcpy(o3.adres,"Mus");
	printf("3.Ogrenci Bilgileri:\nAd Soyad:%s %s\nNo:%d\nAdres:%s\n\n",o3.ad,o3.soyad,o3.no,o3.adres);
	
	struct ogrenci o4;
	strcpy(o4.ad,"Ferat");
	strcpy(o4.soyad,"Cerkez");
	o4.no = 885;
	strcpy(o4.adres,"Ankara");
	printf("4.Ogrenci Bilgileri:\nAd Soyad:%s %s\nNo:%d\nAdres:%s\n\n",o4.ad,o4.soyad,o4.no,o4.adres);
	
	struct ogrenci o5;
	strcpy(o5.ad,"Lale");
	strcpy(o5.soyad,"Devir");
	o5.no = 999;
	strcpy(o5.adres,"Aydin");
	printf("5.Ogrenci Bilgileri:\nAd Soyad:%s %s\nNo:%d\nAdres:%s ",o5.ad,o5.soyad,o5.no,o5.adres);
	
	
	return 0;
	
}
