#include <stdio.h>

int main (){
	int bilangan_satuan;
	int bilangan_puluhan;
	int bilangan_ratusan;
	int bilangan_ribuan;
	printf ("Masukkan Bilangan Satuan =");
	scanf ("%i",&bilangan_satuan);
		if(bilangan_satuan>=0 && bilangan_satuan<10){
		printf("Bilangan Satuan");
	}else if(bilangan_puluhan>=10 && bilangan_puluhan<100){
		printf("Bilangan Puluhan");
	}else if(bilangan_ratusan>=100 && bilangan_ratusan<1000){
		printf("Bilangan Ratusan");
	}else if(bilangan_ribuan>=1000 && bilangan_ribuan<10000){
		printf("Bilangan Ribuan");
	}else{
		printf("Bilangan selain satuan,puluhan,ratusan,ribuan");
}
}
