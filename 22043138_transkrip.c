#include <stdio.h>


 int main ()
 {
 	// membuat variabel
 	char name[20], nim[20], prodi[20], universitas[20], nhuruf, npredikat;
 	float jmlh_prt, jmlh_hdr, nilai_tgs, nilai_UTS, nilai_UAS;
 	float nilai_hdr, nilai_akhir, jmlh_nhdr, jmlh_ntgs, jmlh_nuts, jmlh_nuas;
 	
 	printf("Nama Mahasiswa: ");
 	scanf("%[^\n]", name);
 	
 	printf("NIM: ");
 	scanf("		%[^\n]", nim);
 	
 	printf("Program Studi: ");
 	scanf("		%[^\n]", prodi);
 	
 	printf("Universitas: ");
 	scanf(" 	%[^\n\n]", universitas);
 	
	printf("\n\nInputkan Nilai Mahasiswa\n");
	printf("=========================\n");

 	// meminta input nilai pratikum, UTS, UAS
	printf("Jumlah Pertemuan: ");
 	scanf("%f", &jmlh_prt);

	printf("Jumlah Hadir: ");
 	scanf("%f", &jmlh_hdr);

	// menghitung nilai hadir
	nilai_hdr = (jmlh_hdr / jmlh_prt) * 100;

	printf("nilai hadir: %.f\n", nilai_hdr);

 	printf("nilai tugas: ");
 	scanf("%f", &nilai_tgs);
 	
 	printf("nilai UTS: ");
 	scanf("%f", &nilai_UTS);
 	
 	printf("nilai UAS: ");
 	scanf("%f", &nilai_UAS);
 	
 	// menghitung nilai akhir
	
    //

	jmlh_nhdr = nilai_hdr * 0.2 ;
	jmlh_ntgs = nilai_tgs * 0.2 ;
	jmlh_nuts = nilai_UTS * 0.25 ;
	jmlh_nuas = nilai_UAS * 0.35 ;

 	nilai_akhir = (nilai_hdr * 0.2) + (nilai_tgs * 0.2) + (nilai_UTS * 0.25) + (nilai_UAS * 0.35);

	if(nilai_akhir>=85 && nilai_akhir<=100) nhuruf='A';
	else if (nilai_akhir>=70 && nilai_akhir<85) nhuruf='B';
	else if (nilai_akhir>=69 && nilai_akhir<50) nhuruf='C';
	else if (nilai_akhir>=49 && nilai_akhir<30) nhuruf='D';
	else if (nilai_akhir>=29 && nilai_akhir<0) nhuruf='E';
	else nhuruf='F';


	printf("\n\nHasil Pengolahan Nilai\n");
	printf("==========================\n");
 	printf("20 Persen Nilai Hadir: %.2f\n", jmlh_nhdr);
 	printf("20 Persen Nilai Tugas: %.2f\n", jmlh_ntgs);
 	printf("25 Persen Nilai Uts: %.2f\n", jmlh_nuts);
 	printf("35 Persen Nilai Uas: %.2f\n", jmlh_nuas);


	printf("\n\nHasil Transkrip Nilai\n");
	printf("==========================\n");
 	printf("\n Halo, selamat datang\n");
 	printf("Nama: %s\n", name);
 	printf("NIM: %s\n", nim);
 	printf("Program Studi: %s\n", prodi);
 	printf("Universitas: %s\n", universitas);
 	printf("nilai akhir: %.2f\n", nilai_akhir);
	printf("nilai huruf anda :%c\n", nhuruf);
	printf("nilai predikat anda :" );
	if (nhuruf='A') printf("Sangat Memuaskan");
	else if (nhuruf='B') printf("Memuaskan");
	else if (nhuruf='C') printf("Cukup Memuaskan");
	else if (nhuruf='D') printf("Kurang Memuaskan");
	else if (nhuruf='E') printf("Gagal Total");
	else printf("ok");
 	
 	return 0;
 }